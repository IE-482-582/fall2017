// Generated by gencpp from file nasa_r2_common_msgs/JointStatus.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTSTATUS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTSTATUS_H


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
struct JointStatus_
{
  typedef JointStatus_<ContainerAllocator> Type;

  JointStatus_()
    : publisher()
    , joint()
    , registerValue(0)
    , coeffsLoaded(false)
    , bridgeEnabled(false)
    , motorEnabled(false)
    , brakeReleased(false)
    , motorPowerDetected(false)
    , embeddedMotCom(false)
    , jointFaulted(false)  {
    }
  JointStatus_(const ContainerAllocator& _alloc)
    : publisher(_alloc)
    , joint(_alloc)
    , registerValue(0)
    , coeffsLoaded(false)
    , bridgeEnabled(false)
    , motorEnabled(false)
    , brakeReleased(false)
    , motorPowerDetected(false)
    , embeddedMotCom(false)
    , jointFaulted(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _publisher_type;
  _publisher_type publisher;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joint_type;
  _joint_type joint;

   typedef uint32_t _registerValue_type;
  _registerValue_type registerValue;

   typedef uint8_t _coeffsLoaded_type;
  _coeffsLoaded_type coeffsLoaded;

   typedef uint8_t _bridgeEnabled_type;
  _bridgeEnabled_type bridgeEnabled;

   typedef uint8_t _motorEnabled_type;
  _motorEnabled_type motorEnabled;

   typedef uint8_t _brakeReleased_type;
  _brakeReleased_type brakeReleased;

   typedef uint8_t _motorPowerDetected_type;
  _motorPowerDetected_type motorPowerDetected;

   typedef uint8_t _embeddedMotCom_type;
  _embeddedMotCom_type embeddedMotCom;

   typedef uint8_t _jointFaulted_type;
  _jointFaulted_type jointFaulted;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> const> ConstPtr;

}; // struct JointStatus_

typedef ::nasa_r2_common_msgs::JointStatus_<std::allocator<void> > JointStatus;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatus > JointStatusPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatus const> JointStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "69537d8fb608e752f0cf704b8738add6";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x69537d8fb608e752ULL;
  static const uint64_t static_value2 = 0xf0cf704b8738add6ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointStatus";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string publisher\n\
string joint\n\
uint32 registerValue\n\
bool coeffsLoaded\n\
bool bridgeEnabled\n\
bool motorEnabled\n\
bool brakeReleased\n\
bool motorPowerDetected\n\
bool embeddedMotCom\n\
bool jointFaulted\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.publisher);
      stream.next(m.joint);
      stream.next(m.registerValue);
      stream.next(m.coeffsLoaded);
      stream.next(m.bridgeEnabled);
      stream.next(m.motorEnabled);
      stream.next(m.brakeReleased);
      stream.next(m.motorPowerDetected);
      stream.next(m.embeddedMotCom);
      stream.next(m.jointFaulted);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator>& v)
  {
    s << indent << "publisher: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.publisher);
    s << indent << "joint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint);
    s << indent << "registerValue: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.registerValue);
    s << indent << "coeffsLoaded: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.coeffsLoaded);
    s << indent << "bridgeEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bridgeEnabled);
    s << indent << "motorEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motorEnabled);
    s << indent << "brakeReleased: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brakeReleased);
    s << indent << "motorPowerDetected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motorPowerDetected);
    s << indent << "embeddedMotCom: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.embeddedMotCom);
    s << indent << "jointFaulted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.jointFaulted);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTSTATUS_H
