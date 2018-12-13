// Generated by gencpp from file nasa_r2_common_msgs/JointControlDataArray.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLDATAARRAY_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLDATAARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nasa_r2_common_msgs/JointControlData.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct JointControlDataArray_
{
  typedef JointControlDataArray_<ContainerAllocator> Type;

  JointControlDataArray_()
    : header()
    , joint()
    , data()  {
    }
  JointControlDataArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , joint(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_type;
  _joint_type joint;

   typedef std::vector< ::nasa_r2_common_msgs::JointControlData_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nasa_r2_common_msgs::JointControlData_<ContainerAllocator> >::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> const> ConstPtr;

}; // struct JointControlDataArray_

typedef ::nasa_r2_common_msgs::JointControlDataArray_<std::allocator<void> > JointControlDataArray;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlDataArray > JointControlDataArrayPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlDataArray const> JointControlDataArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/murray/Projects/chessbot/src/nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "96b9d2bc74ad5b1c503caf2252599837";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x96b9d2bc74ad5b1cULL;
  static const uint64_t static_value2 = 0x503caf2252599837ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointControlDataArray";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string[] joint\n\
JointControlData[] data\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/JointControlData\n\
JointControlMode            controlMode\n\
JointControlCommandMode     commandMode\n\
JointControlCalibrationMode calibrationMode\n\
JointControlClearFaultMode  clearFaultMode\n\
JointControlCoeffState      coeffState\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/JointControlMode\n\
uint8 state\n\
uint8 IGNORE     = 0\n\
uint8 INVALID    = 1\n\
uint8 BOOTLOADER = 2\n\
uint8 FAULTED    = 3\n\
uint8 SAFE       = 4\n\
uint8 OFF        = 5\n\
uint8 PARK       = 6\n\
uint8 NEUTRAL    = 7\n\
uint8 DRIVE      = 8\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/JointControlCommandMode\n\
uint8 state\n\
uint8 IGNORE          = 0\n\
uint8 INVALID         = 1\n\
uint8 MOTCOM          = 2\n\
uint8 MULTILOOPSTEP   = 3\n\
uint8 MULTILOOPSMOOTH = 4\n\
uint8 ACTUATOR        = 5\n\
uint8 STALLMODE       = 6\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/JointControlCalibrationMode\n\
uint8 state\n\
uint8 IGNORE       = 0\n\
uint8 DISABLE      = 1\n\
uint8 ENABLE       = 2\n\
uint8 UNCALIBRATED = 3\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/JointControlClearFaultMode\n\
uint8 state\n\
uint8 IGNORE  = 0\n\
uint8 DISABLE = 1\n\
uint8 ENABLE  = 2\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/JointControlCoeffState\n\
uint8 state\n\
uint8 NOTLOADED = 0\n\
uint8 LOADED    = 1\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.joint);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControlDataArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointControlDataArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint[]" << std::endl;
    for (size_t i = 0; i < v.joint.size(); ++i)
    {
      s << indent << "  joint[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint[i]);
    }
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nasa_r2_common_msgs::JointControlData_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLDATAARRAY_H
