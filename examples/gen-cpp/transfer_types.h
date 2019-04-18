/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef transfer_TYPES_H
#define transfer_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




class LoginParam;

class LoginResult;

class SendEmptyRequestReq;

class OneFile;

class OneFileDeriveEx;

typedef struct _LoginParam__isset {
  _LoginParam__isset() : userType(false), user(false), pwd(false), macAddr(false), deviceType(false), tick(false), deviceInfo(false), status(false), status_flag(false), clientIP(false), version(false), sdkid(false), markSign(false), redirectUri(false), ip(false) {}
  bool userType :1;
  bool user :1;
  bool pwd :1;
  bool macAddr :1;
  bool deviceType :1;
  bool tick :1;
  bool deviceInfo :1;
  bool status :1;
  bool status_flag :1;
  bool clientIP :1;
  bool version :1;
  bool sdkid :1;
  bool markSign :1;
  bool redirectUri :1;
  bool ip :1;
} _LoginParam__isset;

class LoginParam {
 public:

  LoginParam(const LoginParam&);
  LoginParam(LoginParam&&);
  LoginParam& operator=(const LoginParam&);
  LoginParam& operator=(LoginParam&&);
  LoginParam() : userType(0), user(), pwd(), macAddr(), deviceType(0), tick(0), deviceInfo(), status(0), status_flag(0), clientIP(), version(), sdkid(0), markSign(), redirectUri(), ip() {
  }

  virtual ~LoginParam() throw();
  int8_t userType;
  std::string user;
  std::string pwd;
  std::string macAddr;
  int8_t deviceType;
  int8_t tick;
  std::string deviceInfo;
  int8_t status;
  int8_t status_flag;
  std::string clientIP;
  std::string version;
  int64_t sdkid;
  std::string markSign;
  std::string redirectUri;
  std::string ip;

  _LoginParam__isset __isset;

  void __set_userType(const int8_t val);

  void __set_user(const std::string& val);

  void __set_pwd(const std::string& val);

  void __set_macAddr(const std::string& val);

  void __set_deviceType(const int8_t val);

  void __set_tick(const int8_t val);

  void __set_deviceInfo(const std::string& val);

  void __set_status(const int8_t val);

  void __set_status_flag(const int8_t val);

  void __set_clientIP(const std::string& val);

  void __set_version(const std::string& val);

  void __set_sdkid(const int64_t val);

  void __set_markSign(const std::string& val);

  void __set_redirectUri(const std::string& val);

  void __set_ip(const std::string& val);

  bool operator == (const LoginParam & rhs) const
  {
    if (!(userType == rhs.userType))
      return false;
    if (!(user == rhs.user))
      return false;
    if (!(pwd == rhs.pwd))
      return false;
    if (!(macAddr == rhs.macAddr))
      return false;
    if (!(deviceType == rhs.deviceType))
      return false;
    if (__isset.tick != rhs.__isset.tick)
      return false;
    else if (__isset.tick && !(tick == rhs.tick))
      return false;
    if (__isset.deviceInfo != rhs.__isset.deviceInfo)
      return false;
    else if (__isset.deviceInfo && !(deviceInfo == rhs.deviceInfo))
      return false;
    if (__isset.status != rhs.__isset.status)
      return false;
    else if (__isset.status && !(status == rhs.status))
      return false;
    if (__isset.status_flag != rhs.__isset.status_flag)
      return false;
    else if (__isset.status_flag && !(status_flag == rhs.status_flag))
      return false;
    if (__isset.clientIP != rhs.__isset.clientIP)
      return false;
    else if (__isset.clientIP && !(clientIP == rhs.clientIP))
      return false;
    if (__isset.version != rhs.__isset.version)
      return false;
    else if (__isset.version && !(version == rhs.version))
      return false;
    if (__isset.sdkid != rhs.__isset.sdkid)
      return false;
    else if (__isset.sdkid && !(sdkid == rhs.sdkid))
      return false;
    if (__isset.markSign != rhs.__isset.markSign)
      return false;
    else if (__isset.markSign && !(markSign == rhs.markSign))
      return false;
    if (__isset.redirectUri != rhs.__isset.redirectUri)
      return false;
    else if (__isset.redirectUri && !(redirectUri == rhs.redirectUri))
      return false;
    if (__isset.ip != rhs.__isset.ip)
      return false;
    else if (__isset.ip && !(ip == rhs.ip))
      return false;
    return true;
  }
  bool operator != (const LoginParam &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LoginParam & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LoginParam &a, LoginParam &b);

inline std::ostream& operator<<(std::ostream& out, const LoginParam& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _LoginResult__isset {
  _LoginResult__isset() : code(false), what(false), sessionTimeout(false), sessionID(false), userID(false), serverTime(false), privateKey(false), ticket(false), area(false), captcha(false), remainLockTime(false) {}
  bool code :1;
  bool what :1;
  bool sessionTimeout :1;
  bool sessionID :1;
  bool userID :1;
  bool serverTime :1;
  bool privateKey :1;
  bool ticket :1;
  bool area :1;
  bool captcha :1;
  bool remainLockTime :1;
} _LoginResult__isset;

class LoginResult {
 public:

  LoginResult(const LoginResult&);
  LoginResult(LoginResult&&);
  LoginResult& operator=(const LoginResult&);
  LoginResult& operator=(LoginResult&&);
  LoginResult() : code(0), what(), sessionTimeout(0), sessionID(0), userID(0), serverTime(0), privateKey(), ticket(), area(), captcha(), remainLockTime(0) {
  }

  virtual ~LoginResult() throw();
  int32_t code;
  std::string what;
  int32_t sessionTimeout;
  int64_t sessionID;
  int64_t userID;
  int64_t serverTime;
  std::string privateKey;
  std::string ticket;
  std::string area;
  std::string captcha;
  int64_t remainLockTime;

  _LoginResult__isset __isset;

  void __set_code(const int32_t val);

  void __set_what(const std::string& val);

  void __set_sessionTimeout(const int32_t val);

  void __set_sessionID(const int64_t val);

  void __set_userID(const int64_t val);

  void __set_serverTime(const int64_t val);

  void __set_privateKey(const std::string& val);

  void __set_ticket(const std::string& val);

  void __set_area(const std::string& val);

  void __set_captcha(const std::string& val);

  void __set_remainLockTime(const int64_t val);

  bool operator == (const LoginResult & rhs) const
  {
    if (!(code == rhs.code))
      return false;
    if (__isset.what != rhs.__isset.what)
      return false;
    else if (__isset.what && !(what == rhs.what))
      return false;
    if (__isset.sessionTimeout != rhs.__isset.sessionTimeout)
      return false;
    else if (__isset.sessionTimeout && !(sessionTimeout == rhs.sessionTimeout))
      return false;
    if (__isset.sessionID != rhs.__isset.sessionID)
      return false;
    else if (__isset.sessionID && !(sessionID == rhs.sessionID))
      return false;
    if (__isset.userID != rhs.__isset.userID)
      return false;
    else if (__isset.userID && !(userID == rhs.userID))
      return false;
    if (__isset.serverTime != rhs.__isset.serverTime)
      return false;
    else if (__isset.serverTime && !(serverTime == rhs.serverTime))
      return false;
    if (__isset.privateKey != rhs.__isset.privateKey)
      return false;
    else if (__isset.privateKey && !(privateKey == rhs.privateKey))
      return false;
    if (__isset.ticket != rhs.__isset.ticket)
      return false;
    else if (__isset.ticket && !(ticket == rhs.ticket))
      return false;
    if (__isset.area != rhs.__isset.area)
      return false;
    else if (__isset.area && !(area == rhs.area))
      return false;
    if (__isset.captcha != rhs.__isset.captcha)
      return false;
    else if (__isset.captcha && !(captcha == rhs.captcha))
      return false;
    if (__isset.remainLockTime != rhs.__isset.remainLockTime)
      return false;
    else if (__isset.remainLockTime && !(remainLockTime == rhs.remainLockTime))
      return false;
    return true;
  }
  bool operator != (const LoginResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LoginResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LoginResult &a, LoginResult &b);

inline std::ostream& operator<<(std::ostream& out, const LoginResult& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _SendEmptyRequestReq__isset {
  _SendEmptyRequestReq__isset() : sessionID(false), ticket(false), notifyID(false), timeout(false), nextReqInterval(false) {}
  bool sessionID :1;
  bool ticket :1;
  bool notifyID :1;
  bool timeout :1;
  bool nextReqInterval :1;
} _SendEmptyRequestReq__isset;

class SendEmptyRequestReq {
 public:

  SendEmptyRequestReq(const SendEmptyRequestReq&);
  SendEmptyRequestReq(SendEmptyRequestReq&&);
  SendEmptyRequestReq& operator=(const SendEmptyRequestReq&);
  SendEmptyRequestReq& operator=(SendEmptyRequestReq&&);
  SendEmptyRequestReq() : sessionID(0), ticket(), notifyID(0), timeout(0), nextReqInterval(0) {
  }

  virtual ~SendEmptyRequestReq() throw();
  int64_t sessionID;
  std::string ticket;
  int64_t notifyID;
  int32_t timeout;
  int32_t nextReqInterval;

  _SendEmptyRequestReq__isset __isset;

  void __set_sessionID(const int64_t val);

  void __set_ticket(const std::string& val);

  void __set_notifyID(const int64_t val);

  void __set_timeout(const int32_t val);

  void __set_nextReqInterval(const int32_t val);

  bool operator == (const SendEmptyRequestReq & rhs) const
  {
    if (!(sessionID == rhs.sessionID))
      return false;
    if (!(ticket == rhs.ticket))
      return false;
    if (!(notifyID == rhs.notifyID))
      return false;
    if (__isset.timeout != rhs.__isset.timeout)
      return false;
    else if (__isset.timeout && !(timeout == rhs.timeout))
      return false;
    if (__isset.nextReqInterval != rhs.__isset.nextReqInterval)
      return false;
    else if (__isset.nextReqInterval && !(nextReqInterval == rhs.nextReqInterval))
      return false;
    return true;
  }
  bool operator != (const SendEmptyRequestReq &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SendEmptyRequestReq & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SendEmptyRequestReq &a, SendEmptyRequestReq &b);

inline std::ostream& operator<<(std::ostream& out, const SendEmptyRequestReq& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OneFile__isset {
  _OneFile__isset() : name(false), file_type(false), file_buffer(false), file_size(false), file_hsh(false) {}
  bool name :1;
  bool file_type :1;
  bool file_buffer :1;
  bool file_size :1;
  bool file_hsh :1;
} _OneFile__isset;

class OneFile {
 public:

  OneFile(const OneFile&);
  OneFile(OneFile&&);
  OneFile& operator=(const OneFile&);
  OneFile& operator=(OneFile&&);
  OneFile() : name(), file_type(), file_buffer(), file_size(0), file_hsh() {
  }

  virtual ~OneFile() throw();
  std::string name;
  std::string file_type;
  std::string file_buffer;
  int64_t file_size;
  std::string file_hsh;

  _OneFile__isset __isset;

  void __set_name(const std::string& val);

  void __set_file_type(const std::string& val);

  void __set_file_buffer(const std::string& val);

  void __set_file_size(const int64_t val);

  void __set_file_hsh(const std::string& val);

  bool operator == (const OneFile & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(file_type == rhs.file_type))
      return false;
    if (!(file_buffer == rhs.file_buffer))
      return false;
    if (!(file_size == rhs.file_size))
      return false;
    if (!(file_hsh == rhs.file_hsh))
      return false;
    return true;
  }
  bool operator != (const OneFile &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OneFile & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(OneFile &a, OneFile &b);

inline std::ostream& operator<<(std::ostream& out, const OneFile& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OneFileDeriveEx__isset {
  _OneFileDeriveEx__isset() : one_file_obj(false), str_extent_1(false), int_extent_1(false) {}
  bool one_file_obj :1;
  bool str_extent_1 :1;
  bool int_extent_1 :1;
} _OneFileDeriveEx__isset;

class OneFileDeriveEx {
 public:

  OneFileDeriveEx(const OneFileDeriveEx&);
  OneFileDeriveEx(OneFileDeriveEx&&);
  OneFileDeriveEx& operator=(const OneFileDeriveEx&);
  OneFileDeriveEx& operator=(OneFileDeriveEx&&);
  OneFileDeriveEx() : str_extent_1(), int_extent_1(0) {
  }

  virtual ~OneFileDeriveEx() throw();
  OneFile one_file_obj;
  std::string str_extent_1;
  int32_t int_extent_1;

  _OneFileDeriveEx__isset __isset;

  void __set_one_file_obj(const OneFile& val);

  void __set_str_extent_1(const std::string& val);

  void __set_int_extent_1(const int32_t val);

  bool operator == (const OneFileDeriveEx & rhs) const
  {
    if (!(one_file_obj == rhs.one_file_obj))
      return false;
    if (!(str_extent_1 == rhs.str_extent_1))
      return false;
    if (!(int_extent_1 == rhs.int_extent_1))
      return false;
    return true;
  }
  bool operator != (const OneFileDeriveEx &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OneFileDeriveEx & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(OneFileDeriveEx &a, OneFileDeriveEx &b);

inline std::ostream& operator<<(std::ostream& out, const OneFileDeriveEx& obj)
{
  obj.printTo(out);
  return out;
}



#endif