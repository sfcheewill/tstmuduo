// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resolver.proto

#include "resolver.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace resolver {
class ResolveRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResolveRequest> _instance;
} _ResolveRequest_default_instance_;
class ResolveResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResolveResponse> _instance;
} _ResolveResponse_default_instance_;
}  // namespace resolver
static void InitDefaultsscc_info_ResolveRequest_resolver_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::resolver::_ResolveRequest_default_instance_;
    new (ptr) ::resolver::ResolveRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::resolver::ResolveRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResolveRequest_resolver_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ResolveRequest_resolver_2eproto}, {}};

static void InitDefaultsscc_info_ResolveResponse_resolver_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::resolver::_ResolveResponse_default_instance_;
    new (ptr) ::resolver::ResolveResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::resolver::ResolveResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResolveResponse_resolver_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ResolveResponse_resolver_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_resolver_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_resolver_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_resolver_2eproto[1];

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_resolver_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveRequest, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveRequest, address_),
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveRequest, name_),
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveRequest, age_),
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveRequest, number_),
  0,
  1,
  2,
  3,
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveResponse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveResponse, resolved_),
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveResponse, ip_),
  PROTOBUF_FIELD_OFFSET(::resolver::ResolveResponse, port_),
  0,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::resolver::ResolveRequest)},
  { 13, 21, sizeof(::resolver::ResolveResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::resolver::_ResolveRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::resolver::_ResolveResponse_default_instance_),
};

const char descriptor_table_protodef_resolver_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016resolver.proto\022\010resolver\"L\n\016ResolveReq"
  "uest\022\017\n\007address\030\001 \002(\t\022\014\n\004name\030\002 \002(\t\022\013\n\003a"
  "ge\030\003 \002(\005\022\016\n\006number\030\004 \002(\005\"D\n\017ResolveRespo"
  "nse\022\027\n\010resolved\030\001 \001(\010:\005false\022\n\n\002ip\030\002 \003(\007"
  "\022\014\n\004port\030\003 \003(\0052Q\n\017ResolverService\022>\n\007Res"
  "olve\022\030.resolver.ResolveRequest\032\031.resolve"
  "r.ResolveResponseB\t\200\001\001\210\001\001\220\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_resolver_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_resolver_2eproto_sccs[2] = {
  &scc_info_ResolveRequest_resolver_2eproto.base,
  &scc_info_ResolveResponse_resolver_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_resolver_2eproto_once;
static bool descriptor_table_resolver_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_resolver_2eproto = {
  &descriptor_table_resolver_2eproto_initialized, descriptor_table_protodef_resolver_2eproto, "resolver.proto", 268,
  &descriptor_table_resolver_2eproto_once, descriptor_table_resolver_2eproto_sccs, descriptor_table_resolver_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_resolver_2eproto::offsets,
  file_level_metadata_resolver_2eproto, 2, file_level_enum_descriptors_resolver_2eproto, file_level_service_descriptors_resolver_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_resolver_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_resolver_2eproto), true);
namespace resolver {

// ===================================================================

void ResolveRequest::InitAsDefaultInstance() {
}
class ResolveRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<ResolveRequest>()._has_bits_);
  static void set_has_address(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_age(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_number(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

ResolveRequest::ResolveRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:resolver.ResolveRequest)
}
ResolveRequest::ResolveRequest(const ResolveRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_address()) {
    address_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&age_, &from.age_,
    static_cast<size_t>(reinterpret_cast<char*>(&number_) -
    reinterpret_cast<char*>(&age_)) + sizeof(number_));
  // @@protoc_insertion_point(copy_constructor:resolver.ResolveRequest)
}

void ResolveRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ResolveRequest_resolver_2eproto.base);
  address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&age_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&number_) -
      reinterpret_cast<char*>(&age_)) + sizeof(number_));
}

ResolveRequest::~ResolveRequest() {
  // @@protoc_insertion_point(destructor:resolver.ResolveRequest)
  SharedDtor();
}

void ResolveRequest::SharedDtor() {
  address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResolveRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResolveRequest& ResolveRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResolveRequest_resolver_2eproto.base);
  return *internal_default_instance();
}


void ResolveRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:resolver.ResolveRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      address_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&age_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&number_) -
        reinterpret_cast<char*>(&age_)) + sizeof(number_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ResolveRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string address = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "resolver.ResolveRequest.address");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "resolver.ResolveRequest.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 age = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_age(&has_bits);
          age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 number = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_number(&has_bits);
          number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResolveRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:resolver.ResolveRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string address = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_address().data(), static_cast<int>(this->_internal_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "resolver.ResolveRequest.address");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_address(), target);
  }

  // required string name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "resolver.ResolveRequest.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // required int32 age = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_age(), target);
  }

  // required int32 number = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:resolver.ResolveRequest)
  return target;
}

size_t ResolveRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:resolver.ResolveRequest)
  size_t total_size = 0;

  if (_internal_has_address()) {
    // required string address = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());
  }

  if (_internal_has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (_internal_has_age()) {
    // required int32 age = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_age());
  }

  if (_internal_has_number()) {
    // required int32 number = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_number());
  }

  return total_size;
}
size_t ResolveRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:resolver.ResolveRequest)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required string address = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());

    // required string name = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());

    // required int32 age = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_age());

    // required int32 number = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_number());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResolveRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:resolver.ResolveRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const ResolveRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResolveRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:resolver.ResolveRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:resolver.ResolveRequest)
    MergeFrom(*source);
  }
}

void ResolveRequest::MergeFrom(const ResolveRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:resolver.ResolveRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      address_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.address_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000004u) {
      age_ = from.age_;
    }
    if (cached_has_bits & 0x00000008u) {
      number_ = from.number_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ResolveRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:resolver.ResolveRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResolveRequest::CopyFrom(const ResolveRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:resolver.ResolveRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResolveRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void ResolveRequest::InternalSwap(ResolveRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  address_.Swap(&other->address_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(age_, other->age_);
  swap(number_, other->number_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResolveRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ResolveResponse::InitAsDefaultInstance() {
}
class ResolveResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<ResolveResponse>()._has_bits_);
  static void set_has_resolved(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ResolveResponse::ResolveResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:resolver.ResolveResponse)
}
ResolveResponse::ResolveResponse(const ResolveResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      ip_(from.ip_),
      port_(from.port_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resolved_ = from.resolved_;
  // @@protoc_insertion_point(copy_constructor:resolver.ResolveResponse)
}

void ResolveResponse::SharedCtor() {
  resolved_ = false;
}

ResolveResponse::~ResolveResponse() {
  // @@protoc_insertion_point(destructor:resolver.ResolveResponse)
  SharedDtor();
}

void ResolveResponse::SharedDtor() {
}

void ResolveResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResolveResponse& ResolveResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResolveResponse_resolver_2eproto.base);
  return *internal_default_instance();
}


void ResolveResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:resolver.ResolveResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ip_.Clear();
  port_.Clear();
  resolved_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ResolveResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool resolved = 1 [default = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_resolved(&has_bits);
          resolved_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated fixed32 ip = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_ip(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr));
            ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<21>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFixed32Parser(_internal_mutable_ip(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 port = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_port(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<24>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_port(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResolveResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:resolver.ResolveResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool resolved = 1 [default = false];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_resolved(), target);
  }

  // repeated fixed32 ip = 2;
  for (int i = 0, n = this->_internal_ip_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(2, this->_internal_ip(i), target);
  }

  // repeated int32 port = 3;
  for (int i = 0, n = this->_internal_port_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_port(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:resolver.ResolveResponse)
  return target;
}

size_t ResolveResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:resolver.ResolveResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated fixed32 ip = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_ip_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_ip_size());
    total_size += data_size;
  }

  // repeated int32 port = 3;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->port_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_port_size());
    total_size += data_size;
  }

  // optional bool resolved = 1 [default = false];
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResolveResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:resolver.ResolveResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ResolveResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResolveResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:resolver.ResolveResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:resolver.ResolveResponse)
    MergeFrom(*source);
  }
}

void ResolveResponse::MergeFrom(const ResolveResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:resolver.ResolveResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  ip_.MergeFrom(from.ip_);
  port_.MergeFrom(from.port_);
  if (from._internal_has_resolved()) {
    _internal_set_resolved(from._internal_resolved());
  }
}

void ResolveResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:resolver.ResolveResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResolveResponse::CopyFrom(const ResolveResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:resolver.ResolveResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResolveResponse::IsInitialized() const {
  return true;
}

void ResolveResponse::InternalSwap(ResolveResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ip_.InternalSwap(&other->ip_);
  port_.InternalSwap(&other->port_);
  swap(resolved_, other->resolved_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResolveResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

ResolverService::~ResolverService() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* ResolverService::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_resolver_2eproto);
  return file_level_service_descriptors_resolver_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* ResolverService::GetDescriptor() {
  return descriptor();
}

void ResolverService::Resolve(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::resolver::ResolveRequest*,
                         ::resolver::ResolveResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Resolve() not implemented.");
  done->Run();
}

void ResolverService::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_resolver_2eproto[0]);
  switch(method->index()) {
    case 0:
      Resolve(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::resolver::ResolveRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::resolver::ResolveResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& ResolverService::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::resolver::ResolveRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& ResolverService::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::resolver::ResolveResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

ResolverService_Stub::ResolverService_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
ResolverService_Stub::ResolverService_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
ResolverService_Stub::~ResolverService_Stub() {
  if (owns_channel_) delete channel_;
}

void ResolverService_Stub::Resolve(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::resolver::ResolveRequest* request,
                              ::resolver::ResolveResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace resolver
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::resolver::ResolveRequest* Arena::CreateMaybeMessage< ::resolver::ResolveRequest >(Arena* arena) {
  return Arena::CreateInternal< ::resolver::ResolveRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::resolver::ResolveResponse* Arena::CreateMaybeMessage< ::resolver::ResolveResponse >(Arena* arena) {
  return Arena::CreateInternal< ::resolver::ResolveResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
