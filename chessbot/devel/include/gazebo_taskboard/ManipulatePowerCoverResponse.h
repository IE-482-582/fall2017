// Generated by gencpp from file gazebo_taskboard/ManipulatePowerCoverResponse.msg
// DO NOT EDIT!


#ifndef GAZEBO_TASKBOARD_MESSAGE_MANIPULATEPOWERCOVERRESPONSE_H
#define GAZEBO_TASKBOARD_MESSAGE_MANIPULATEPOWERCOVERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_taskboard
{
template <class ContainerAllocator>
struct ManipulatePowerCoverResponse_
{
  typedef ManipulatePowerCoverResponse_<ContainerAllocator> Type;

  ManipulatePowerCoverResponse_()
    : ok(false)  {
    }
  ManipulatePowerCoverResponse_(const ContainerAllocator& _alloc)
    : ok(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ok_type;
  _ok_type ok;




  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ManipulatePowerCoverResponse_

typedef ::gazebo_taskboard::ManipulatePowerCoverResponse_<std::allocator<void> > ManipulatePowerCoverResponse;

typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerCoverResponse > ManipulatePowerCoverResponsePtr;
typedef boost::shared_ptr< ::gazebo_taskboard::ManipulatePowerCoverResponse const> ManipulatePowerCoverResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_taskboard

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'gazebo_taskboard': ['/home/murray/Projects/chessbot/src/nasa_r2_simulator/gazebo_taskboard/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_taskboard/ManipulatePowerCoverResponse";
  }

  static const char* value(const ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ok\n\
\n\
";
  }

  static const char* value(const ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ok);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ManipulatePowerCoverResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_taskboard::ManipulatePowerCoverResponse_<ContainerAllocator>& v)
  {
    s << indent << "ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ok);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_TASKBOARD_MESSAGE_MANIPULATEPOWERCOVERRESPONSE_H
