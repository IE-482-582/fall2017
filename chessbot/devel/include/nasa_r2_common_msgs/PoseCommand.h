// Generated by gencpp from file nasa_r2_common_msgs/PoseCommand.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMAND_H
#define NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct PoseCommand_
{
  typedef PoseCommand_<ContainerAllocator> Type;

  PoseCommand_()
    : commandId()
    , refFrame()
    , pose()
    , baseFrame()
    , toolFrame()  {
    }
  PoseCommand_(const ContainerAllocator& _alloc)
    : commandId(_alloc)
    , refFrame(_alloc)
    , pose(_alloc)
    , baseFrame(_alloc)
    , toolFrame(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _commandId_type;
  _commandId_type commandId;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _refFrame_type;
  _refFrame_type refFrame;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _baseFrame_type;
  _baseFrame_type baseFrame;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _toolFrame_type;
  _toolFrame_type toolFrame;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> const> ConstPtr;

}; // struct PoseCommand_

typedef ::nasa_r2_common_msgs::PoseCommand_<std::allocator<void> > PoseCommand;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommand > PoseCommandPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommand const> PoseCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "325108abdcbe78370664839c919cbaa8";
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x325108abdcbe7837ULL;
  static const uint64_t static_value2 = 0x0664839c919cbaa8ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/PoseCommand";
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A Pose with reference coordinate frame, chain definition, and command_id\n\
string commandId\n\
string refFrame\n\
geometry_msgs/Pose pose\n\
string baseFrame\n\
string toolFrame\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.commandId);
      stream.next(m.refFrame);
      stream.next(m.pose);
      stream.next(m.baseFrame);
      stream.next(m.toolFrame);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::PoseCommand_<ContainerAllocator>& v)
  {
    s << indent << "commandId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.commandId);
    s << indent << "refFrame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.refFrame);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "baseFrame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.baseFrame);
    s << indent << "toolFrame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.toolFrame);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMAND_H
