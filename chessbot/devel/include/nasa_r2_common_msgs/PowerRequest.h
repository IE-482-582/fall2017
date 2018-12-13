// Generated by gencpp from file nasa_r2_common_msgs/PowerRequest.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_POWERREQUEST_H
#define NASA_R2_COMMON_MSGS_MESSAGE_POWERREQUEST_H


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
struct PowerRequest_
{
  typedef PowerRequest_<ContainerAllocator> Type;

  PowerRequest_()
    : channel()
    , state(false)  {
    }
  PowerRequest_(const ContainerAllocator& _alloc)
    : channel(_alloc)
    , state(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _channel_type;
  _channel_type channel;

   typedef uint8_t _state_type;
  _state_type state;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PowerRequest_

typedef ::nasa_r2_common_msgs::PowerRequest_<std::allocator<void> > PowerRequest;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::PowerRequest > PowerRequestPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::PowerRequest const> PowerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1045ad41f2608d96980e5002751cdcee";
  }

  static const char* value(const ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1045ad41f2608d96ULL;
  static const uint64_t static_value2 = 0x980e5002751cdceeULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/PowerRequest";
  }

  static const char* value(const ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string channel\n\
bool state\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channel);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::PowerRequest_<ContainerAllocator>& v)
  {
    s << indent << "channel: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.channel);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_POWERREQUEST_H
