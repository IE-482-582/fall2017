// Generated by gencpp from file nasa_r2_common_msgs/LabeledControllerJointSettings.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_LABELEDCONTROLLERJOINTSETTINGS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_LABELEDCONTROLLERJOINTSETTINGS_H


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
struct LabeledControllerJointSettings_
{
  typedef LabeledControllerJointSettings_<ContainerAllocator> Type;

  LabeledControllerJointSettings_()
    : originator()
    , joint_names()
    , jointVelocityLimits()
    , jointAccelerationLimits()  {
    }
  LabeledControllerJointSettings_(const ContainerAllocator& _alloc)
    : originator(_alloc)
    , joint_names(_alloc)
    , jointVelocityLimits(_alloc)
    , jointAccelerationLimits(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _originator_type;
  _originator_type originator;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _jointVelocityLimits_type;
  _jointVelocityLimits_type jointVelocityLimits;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _jointAccelerationLimits_type;
  _jointAccelerationLimits_type jointAccelerationLimits;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> const> ConstPtr;

}; // struct LabeledControllerJointSettings_

typedef ::nasa_r2_common_msgs::LabeledControllerJointSettings_<std::allocator<void> > LabeledControllerJointSettings;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledControllerJointSettings > LabeledControllerJointSettingsPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledControllerJointSettings const> LabeledControllerJointSettingsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "24daa103f09600d0728cbef04caeaa3a";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x24daa103f09600d0ULL;
  static const uint64_t static_value2 = 0x728cbef04caeaa3aULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/LabeledControllerJointSettings";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string originator\n\
string[] joint_names\n\
float64[] jointVelocityLimits\n\
float64[] jointAccelerationLimits\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.originator);
      stream.next(m.joint_names);
      stream.next(m.jointVelocityLimits);
      stream.next(m.jointAccelerationLimits);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LabeledControllerJointSettings_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::LabeledControllerJointSettings_<ContainerAllocator>& v)
  {
    s << indent << "originator: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.originator);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "jointVelocityLimits[]" << std::endl;
    for (size_t i = 0; i < v.jointVelocityLimits.size(); ++i)
    {
      s << indent << "  jointVelocityLimits[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.jointVelocityLimits[i]);
    }
    s << indent << "jointAccelerationLimits[]" << std::endl;
    for (size_t i = 0; i < v.jointAccelerationLimits.size(); ++i)
    {
      s << indent << "  jointAccelerationLimits[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.jointAccelerationLimits[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_LABELEDCONTROLLERJOINTSETTINGS_H
