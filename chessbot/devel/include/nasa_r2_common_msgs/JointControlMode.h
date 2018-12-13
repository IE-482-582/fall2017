// Generated by gencpp from file nasa_r2_common_msgs/JointControlMode.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLMODE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLMODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct JointControlMode_
{
  typedef JointControlMode_<ContainerAllocator> Type;

  JointControlMode_()
    : state(0)  {
    }
  JointControlMode_(const ContainerAllocator& _alloc)
    : state(0)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;


    enum { IGNORE = 0u };
     enum { INVALID = 1u };
     enum { BOOTLOADER = 2u };
     enum { FAULTED = 3u };
     enum { SAFE = 4u };
     enum { OFF = 5u };
     enum { PARK = 6u };
     enum { NEUTRAL = 7u };
     enum { DRIVE = 8u };
 

  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> const> ConstPtr;

}; // struct JointControlMode_

typedef ::nasa_r2_common_msgs::JointControlMode_<std::allocator<void> > JointControlMode;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlMode > JointControlModePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlMode const> JointControlModeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/murray/Projects/chessbot/src/nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ed18104f2125248e91775725024700fe";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xed18104f2125248eULL;
  static const uint64_t static_value2 = 0x91775725024700feULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointControlMode";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 state\n\
uint8 IGNORE     = 0\n\
uint8 INVALID    = 1\n\
uint8 BOOTLOADER = 2\n\
uint8 FAULTED    = 3\n\
uint8 SAFE       = 4\n\
uint8 OFF        = 5\n\
uint8 PARK       = 6\n\
uint8 NEUTRAL    = 7\n\
uint8 DRIVE      = 8\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControlMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointControlMode_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLMODE_H