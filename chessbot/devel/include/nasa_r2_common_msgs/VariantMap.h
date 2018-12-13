// Generated by gencpp from file nasa_r2_common_msgs/VariantMap.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_VARIANTMAP_H
#define NASA_R2_COMMON_MSGS_MESSAGE_VARIANTMAP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nasa_r2_common_msgs/ValueType.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct VariantMap_
{
  typedef VariantMap_<ContainerAllocator> Type;

  VariantMap_()
    : name()
    , message()
    , value()
    , stringMap()
    , uint16Map()
    , int16Map()
    , uint32Map()
    , int32Map()
    , float32Map()
    , boolMap()  {
    }
  VariantMap_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , message(_alloc)
    , value(_alloc)
    , stringMap(_alloc)
    , uint16Map(_alloc)
    , int16Map(_alloc)
    , uint32Map(_alloc)
    , int32Map(_alloc)
    , float32Map(_alloc)
    , boolMap(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef std::vector< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >::other >  _value_type;
  _value_type value;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _stringMap_type;
  _stringMap_type stringMap;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _uint16Map_type;
  _uint16Map_type uint16Map;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _int16Map_type;
  _int16Map_type int16Map;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _uint32Map_type;
  _uint32Map_type uint32Map;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _int32Map_type;
  _int32Map_type int32Map;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _float32Map_type;
  _float32Map_type float32Map;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _boolMap_type;
  _boolMap_type boolMap;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> const> ConstPtr;

}; // struct VariantMap_

typedef ::nasa_r2_common_msgs::VariantMap_<std::allocator<void> > VariantMap;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMap > VariantMapPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMap const> VariantMapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/murray/Projects/chessbot/src/nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8356d002313ee472651f88ac3bf992a9";
  }

  static const char* value(const ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8356d002313ee472ULL;
  static const uint64_t static_value2 = 0x651f88ac3bf992a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/VariantMap";
  }

  static const char* value(const ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string      name\n\
string      message\n\
ValueType[] value\n\
string[]    stringMap\n\
uint16[]    uint16Map\n\
int16[]     int16Map\n\
uint32[]    uint32Map\n\
int32[]     int32Map\n\
float32[]   float32Map\n\
bool[]      boolMap\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/ValueType\n\
string     key\n\
MappedType type\n\
uint32     index\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/MappedType\n\
uint8 STRING  = 0\n\
uint8 UINT16  = 1\n\
uint8 INT16   = 2\n\
uint8 UINT32  = 3\n\
uint8 INT32   = 4\n\
uint8 FLOAT32 = 5\n\
uint8 BOOL    = 6\n\
\n\
uint8 type\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.message);
      stream.next(m.value);
      stream.next(m.stringMap);
      stream.next(m.uint16Map);
      stream.next(m.int16Map);
      stream.next(m.uint32Map);
      stream.next(m.int32Map);
      stream.next(m.float32Map);
      stream.next(m.boolMap);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VariantMap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >::stream(s, indent + "    ", v.value[i]);
    }
    s << indent << "stringMap[]" << std::endl;
    for (size_t i = 0; i < v.stringMap.size(); ++i)
    {
      s << indent << "  stringMap[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.stringMap[i]);
    }
    s << indent << "uint16Map[]" << std::endl;
    for (size_t i = 0; i < v.uint16Map.size(); ++i)
    {
      s << indent << "  uint16Map[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.uint16Map[i]);
    }
    s << indent << "int16Map[]" << std::endl;
    for (size_t i = 0; i < v.int16Map.size(); ++i)
    {
      s << indent << "  int16Map[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.int16Map[i]);
    }
    s << indent << "uint32Map[]" << std::endl;
    for (size_t i = 0; i < v.uint32Map.size(); ++i)
    {
      s << indent << "  uint32Map[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.uint32Map[i]);
    }
    s << indent << "int32Map[]" << std::endl;
    for (size_t i = 0; i < v.int32Map.size(); ++i)
    {
      s << indent << "  int32Map[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.int32Map[i]);
    }
    s << indent << "float32Map[]" << std::endl;
    for (size_t i = 0; i < v.float32Map.size(); ++i)
    {
      s << indent << "  float32Map[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.float32Map[i]);
    }
    s << indent << "boolMap[]" << std::endl;
    for (size_t i = 0; i < v.boolMap.size(); ++i)
    {
      s << indent << "  boolMap[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.boolMap[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_VARIANTMAP_H
