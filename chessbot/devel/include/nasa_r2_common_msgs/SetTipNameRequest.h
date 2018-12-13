// Generated by gencpp from file nasa_r2_common_msgs/SetTipNameRequest.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_SETTIPNAMEREQUEST_H
#define NASA_R2_COMMON_MSGS_MESSAGE_SETTIPNAMEREQUEST_H


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
struct SetTipNameRequest_
{
  typedef SetTipNameRequest_<ContainerAllocator> Type;

  SetTipNameRequest_()
    : arm_name()
    , tip_name()  {
    }
  SetTipNameRequest_(const ContainerAllocator& _alloc)
    : arm_name(_alloc)
    , tip_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _arm_name_type;
  _arm_name_type arm_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tip_name_type;
  _tip_name_type tip_name;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetTipNameRequest_

typedef ::nasa_r2_common_msgs::SetTipNameRequest_<std::allocator<void> > SetTipNameRequest;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameRequest > SetTipNameRequestPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameRequest const> SetTipNameRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c684d7fb2263cfca4ef8a63cdba9ef5d";
  }

  static const char* value(const ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc684d7fb2263cfcaULL;
  static const uint64_t static_value2 = 0x4ef8a63cdba9ef5dULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/SetTipNameRequest";
  }

  static const char* value(const ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string arm_name\n\
string tip_name\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.arm_name);
      stream.next(m.tip_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTipNameRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::SetTipNameRequest_<ContainerAllocator>& v)
  {
    s << indent << "arm_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.arm_name);
    s << indent << "tip_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tip_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_SETTIPNAMEREQUEST_H
