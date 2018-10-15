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




class OneFile;

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
  OneFile& operator=(const OneFile&);
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



#endif
