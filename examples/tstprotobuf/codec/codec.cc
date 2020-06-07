

#include "examples/tstprotobuf/codec/codec.h"

#include "muduo/base/Logging.h"
#include "muduo/net/Endian.h"
#include "muduo/net/protorpc/google-inl.h"

#include <google/protobuf/descriptor.h>

#include <zlib.h>  // adler32

using namespace muduo;
using namespace muduo::net;

void ProtobufCodec::fillEmptyBuffer(Buffer* retbuf, const google::protobuf::Message& message)
{
    assert(retbuf->readableBytes() == 0);

    const std::string& typeName = message.GetTypeName();
    int32_t nameLen = static_cast<int32_t>(typeName.size()+1);

    retbuf->appendInt32(namelen);
    retbuf->append(typeName.c_str(), nameLen);

    // code copied from MessageLite::SerializeToArray() and MessageLite::SerializePartialToArray().
    GOOGLE_DCHECK(message.IsInitialized()) << InitializationErrorMessage("serialize", message);

    int byte_size = message.ByteSizeLong();
    printf("byte_size=%d\n", byte_size);
    buf->ensureWritableBytes(byte_size);

    uint8_t* start = reinterpret_cast<uint8_t*>(retbuf->beginWrite());
    uint8_t* end = message.SerializeWithCachedSizesToArray(start);
    if (end - start != byte_size) {
        ByteSizeConsistencyError(byte_size, (int)message.ByteSizeLong()/*message.ByteSize()*/, static_cast<int>(end - start));
    }
    retbuf->hasWritten(byte_size);

    int32_t checkSum = ::adler32(1, retbuf->peek(), retbuf->readableBytes());
    retbuf->appendInt32(checkSum);

    assert(retbuf->readableBytes() == sizeof nameLen + nameLen + byte_size + sizeof checkSum);
    int32_t len = sockets::hostToNetwork32(static_cast<int32_t>(retbuf->readableBytes()));
    retbuf->prepend(&len, sizeof len);
}

//
// no more google code after this
//

//
// FIXME: merge with RpcCodec
//

namespace
{
const string kNoErrorStr = "NoError";
const string kInvalidLengthStr = "InvalidLength";
const string kCheckSumErrorStr = "CheckSumError";
const string kInvalidNameLenStr = "InvalidNameLen";
const string kUnknownMessageTypeStr = "UnknownMessageType";
const string kParseErrorStr = "ParseError";
const string kUnknownErrorStr = "UnknownError";
}

const string& ProtobufCodec::errorCodeToString(ErrorCode errorCode)
{
    switch (errorCode)
    {
    case kNoError:
        return kNoErrorStr;
    case kInvalidLength:
        return kInvalidLengthStr;
    case kCheckSumError:
        return kCheckSumErrorStr;
    case kInvalidNameLen:
        return kInvalidNameLenStr;
    case kUnknownMessageType:
        return kUnknownMessageTypeStr;
    case kParseError:
        return kParseErrorStr;
    default:
        return kUnknownErrorStr;
    }
}

void ProtobufCodec::defaultErrorCallback(const muduo::net::TcpConnectionPtr& conn,
                                         muduo::net::Buffer* buf,
                                         muduo::Timestamp,
                                         ErrorCode errorCode)
{
    LOG_ERROR << "ProtobufCodec::defaultErrorCallback - " << errorCodeToString(errorCode);
    if (conn && conn->connected()) {
        conn->shutdown();
    }
}

int32_t asInt32(const char* buf)
{
    int32_t be32 = 0;
    ::memcpy(&be32, buf, sizeof(be32));
    return sockets::networkToHost32(be32);
}

void ProtobufCodec::onMessage(const TcpConnectionPtr &conn, Buffer *buf, Timestamp receiveTime) {

    while (buf->readableBytes() >= kMinMessageLen + kHeaderLen)
    {
        const int32_t len = buf->peekInt32();
        if (len > kMaxMessageLen || len < kMinMessageLen)
        {
            errorCallback_(conn, buf, receiveTime, kInvalidLength);
            break;
        }
        else if (buf->readableBytes() >= implicit_cast<size_t>(len + kHeaderLen))
        {
            ErrorCode errorCode = kNoError;
            MessagePtr message = parse(buf->peek() + kHeaderLen, len, &errorCode);
            if (errorCode == kNoError && message)
            {
                messageCallback_(conn, message, receiveTime);
                buf->retrieve(kHeaderLen + len);
            }
            else
            {
                errorCallback_(conn, buf, receiveTime, errorCode);
                break;
            }
        }
        else
        {
            break;
        }
    }

}

google::protobuf::Message* ProtobufCodec::createMessage(const string &type_name) {
    google::protobuf::Message* message = NULL;
    const google::protobuf::Descriptor* descriptor =
            google::protobuf::DescriptorPool::generated_pool()->FindMessageTypeByName(type_name);
    if (descriptor)
    {
        const google::protobuf::Message* prototype =
                google::protobuf::MessageFactory::generated_factory()->GetPrototype(descriptor);
        if (prototype)
        {
            message = prototype->New();
        }
    }
    return message;
}

MessagePtr ProtobufCodec::parse(const char *buf, int len, ErrorCode *errorCode) {
    MessagePtr message;

    // check sum
    int32_t expectedCheckSum = asInt32(buf + len - kHeaderLen);
    int32_t checkSum = static_cast<int32_t>(
                ::adler32(1,
                          reinterpret_cast<const Bytef*>(buf),
                          static_cast<int>(len - kHeaderLen)));
    if (checkSum == expectedCheckSum) {

        // get message type name
        int32_t nameLen = asInt32(buf);

        if (nameLen > 2 && nameLen <= len - 2*kHeaderLen) {
            std::string typeName(buf + kHeaderLen, buf + kHeaderLen + nameLen - 1);
            // create message object
            message.reset(createMessage(typeName));
            if (message)
            {
                // parse from buffer
                const char* data = buf + kHeaderLen + nameLen;
                int32_t dataLen = len - nameLen - 2*kHeaderLen;
                if (message->ParseFromArray(data, dataLen))
                {
                    *error = kNoError;
                }
                else
                {
                    *error = kParseError;
                }
            }
            else
            {
                *error = kUnknownMessageType;
            }
        } else {
            *error = kInvalidNameLen;
        }

    } else {
        *errorCode = kCheckSumError;
    }
    return message;
}
















