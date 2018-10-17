/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Photo_H
#define Photo_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "transfer_types.h"



#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class PhotoIf {
 public:
  virtual ~PhotoIf() {}
  virtual bool SendPhoto(const OneFile& onefile) = 0;
};

class PhotoIfFactory {
 public:
  typedef PhotoIf Handler;

  virtual ~PhotoIfFactory() {}

  virtual PhotoIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(PhotoIf* /* handler */) = 0;
};

class PhotoIfSingletonFactory : virtual public PhotoIfFactory {
 public:
  PhotoIfSingletonFactory(const boost::shared_ptr<PhotoIf>& iface) : iface_(iface) {}
  virtual ~PhotoIfSingletonFactory() {}

  virtual PhotoIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(PhotoIf* /* handler */) {}

 protected:
  boost::shared_ptr<PhotoIf> iface_;
};

class PhotoNull : virtual public PhotoIf {
 public:
  virtual ~PhotoNull() {}
  bool SendPhoto(const OneFile& /* onefile */) {
    bool _return = false;
    return _return;
  }
};

typedef struct _Photo_SendPhoto_args__isset {
  _Photo_SendPhoto_args__isset() : onefile(false) {}
  bool onefile :1;
} _Photo_SendPhoto_args__isset;

class Photo_SendPhoto_args {
 public:

  Photo_SendPhoto_args(const Photo_SendPhoto_args&);
  Photo_SendPhoto_args& operator=(const Photo_SendPhoto_args&);
  Photo_SendPhoto_args() {
  }

  virtual ~Photo_SendPhoto_args() throw();
  OneFile onefile;

  _Photo_SendPhoto_args__isset __isset;

  void __set_onefile(const OneFile& val);

  bool operator == (const Photo_SendPhoto_args & rhs) const
  {
    if (!(onefile == rhs.onefile))
      return false;
    return true;
  }
  bool operator != (const Photo_SendPhoto_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Photo_SendPhoto_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Photo_SendPhoto_pargs {
 public:


  virtual ~Photo_SendPhoto_pargs() throw();
  const OneFile* onefile;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Photo_SendPhoto_result__isset {
  _Photo_SendPhoto_result__isset() : success(false) {}
  bool success :1;
} _Photo_SendPhoto_result__isset;

class Photo_SendPhoto_result {
 public:

  Photo_SendPhoto_result(const Photo_SendPhoto_result&);
  Photo_SendPhoto_result& operator=(const Photo_SendPhoto_result&);
  Photo_SendPhoto_result() : success(0) {
  }

  virtual ~Photo_SendPhoto_result() throw();
  bool success;

  _Photo_SendPhoto_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const Photo_SendPhoto_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Photo_SendPhoto_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Photo_SendPhoto_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Photo_SendPhoto_presult__isset {
  _Photo_SendPhoto_presult__isset() : success(false) {}
  bool success :1;
} _Photo_SendPhoto_presult__isset;

class Photo_SendPhoto_presult {
 public:


  virtual ~Photo_SendPhoto_presult() throw();
  bool* success;

  _Photo_SendPhoto_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class PhotoClient : virtual public PhotoIf {
 public:
  PhotoClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  PhotoClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool SendPhoto(const OneFile& onefile);
  void send_SendPhoto(const OneFile& onefile);
  bool recv_SendPhoto();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class PhotoProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<PhotoIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (PhotoProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_SendPhoto(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  PhotoProcessor(boost::shared_ptr<PhotoIf> iface) :
    iface_(iface) {
    processMap_["SendPhoto"] = &PhotoProcessor::process_SendPhoto;
  }

  virtual ~PhotoProcessor() {}
};

class PhotoProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  PhotoProcessorFactory(const ::boost::shared_ptr< PhotoIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< PhotoIfFactory > handlerFactory_;
};

class PhotoMultiface : virtual public PhotoIf {
 public:
  PhotoMultiface(std::vector<boost::shared_ptr<PhotoIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~PhotoMultiface() {}
 protected:
  std::vector<boost::shared_ptr<PhotoIf> > ifaces_;
  PhotoMultiface() {}
  void add(boost::shared_ptr<PhotoIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool SendPhoto(const OneFile& onefile) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->SendPhoto(onefile);
    }
    return ifaces_[i]->SendPhoto(onefile);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class PhotoConcurrentClient : virtual public PhotoIf {
 public:
  PhotoConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  PhotoConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool SendPhoto(const OneFile& onefile);
  int32_t send_SendPhoto(const OneFile& onefile);
  bool recv_SendPhoto(const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif



#endif