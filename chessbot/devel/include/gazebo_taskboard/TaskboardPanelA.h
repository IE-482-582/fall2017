// Generated by gencpp from file gazebo_taskboard/TaskboardPanelA.msg
// DO NOT EDIT!


#ifndef GAZEBO_TASKBOARD_MESSAGE_TASKBOARDPANELA_H
#define GAZEBO_TASKBOARD_MESSAGE_TASKBOARDPANELA_H


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
struct TaskboardPanelA_
{
  typedef TaskboardPanelA_<ContainerAllocator> Type;

  TaskboardPanelA_()
    : PANEL_POWER_COVER()
    , PANEL_POWER_SWITCH()
    , PANEL_POWER_LED()
    , A01_ROCKER_SWITCH()
    , A01_ROCKER_LED_TOP()
    , A01_ROCKER_LED_BOTTOM()
    , A02_LED_NUM_PAD_A1()
    , A02_LED_NUM_PAD_A2()
    , A02_LED_NUM_PAD_A3()
    , A02_LED_NUM_PAD_B1()
    , A02_LED_NUM_PAD_B2()
    , A02_LED_NUM_PAD_B3()
    , A02_LED_NUM_PAD_C1()
    , A02_LED_NUM_PAD_C2()
    , A02_LED_NUM_PAD_C3()
    , A02_NUM_PAD_A1()
    , A02_NUM_PAD_A2()
    , A02_NUM_PAD_A3()
    , A02_NUM_PAD_B1()
    , A02_NUM_PAD_B2()
    , A02_NUM_PAD_B3()
    , A02_NUM_PAD_C1()
    , A02_NUM_PAD_C2()
    , A02_NUM_PAD_C3()
    , A03_TOGGLE()
    , A03_LED()
    , A04_TOGGLE()
    , A04_LED_TOP()
    , A04_LED_BOTTOM()
    , A05_TOGGLE()
    , A05_LED()  {
    }
  TaskboardPanelA_(const ContainerAllocator& _alloc)
    : PANEL_POWER_COVER(_alloc)
    , PANEL_POWER_SWITCH(_alloc)
    , PANEL_POWER_LED(_alloc)
    , A01_ROCKER_SWITCH(_alloc)
    , A01_ROCKER_LED_TOP(_alloc)
    , A01_ROCKER_LED_BOTTOM(_alloc)
    , A02_LED_NUM_PAD_A1(_alloc)
    , A02_LED_NUM_PAD_A2(_alloc)
    , A02_LED_NUM_PAD_A3(_alloc)
    , A02_LED_NUM_PAD_B1(_alloc)
    , A02_LED_NUM_PAD_B2(_alloc)
    , A02_LED_NUM_PAD_B3(_alloc)
    , A02_LED_NUM_PAD_C1(_alloc)
    , A02_LED_NUM_PAD_C2(_alloc)
    , A02_LED_NUM_PAD_C3(_alloc)
    , A02_NUM_PAD_A1(_alloc)
    , A02_NUM_PAD_A2(_alloc)
    , A02_NUM_PAD_A3(_alloc)
    , A02_NUM_PAD_B1(_alloc)
    , A02_NUM_PAD_B2(_alloc)
    , A02_NUM_PAD_B3(_alloc)
    , A02_NUM_PAD_C1(_alloc)
    , A02_NUM_PAD_C2(_alloc)
    , A02_NUM_PAD_C3(_alloc)
    , A03_TOGGLE(_alloc)
    , A03_LED(_alloc)
    , A04_TOGGLE(_alloc)
    , A04_LED_TOP(_alloc)
    , A04_LED_BOTTOM(_alloc)
    , A05_TOGGLE(_alloc)
    , A05_LED(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PANEL_POWER_COVER_type;
  _PANEL_POWER_COVER_type PANEL_POWER_COVER;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PANEL_POWER_SWITCH_type;
  _PANEL_POWER_SWITCH_type PANEL_POWER_SWITCH;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PANEL_POWER_LED_type;
  _PANEL_POWER_LED_type PANEL_POWER_LED;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A01_ROCKER_SWITCH_type;
  _A01_ROCKER_SWITCH_type A01_ROCKER_SWITCH;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A01_ROCKER_LED_TOP_type;
  _A01_ROCKER_LED_TOP_type A01_ROCKER_LED_TOP;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A01_ROCKER_LED_BOTTOM_type;
  _A01_ROCKER_LED_BOTTOM_type A01_ROCKER_LED_BOTTOM;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_A1_type;
  _A02_LED_NUM_PAD_A1_type A02_LED_NUM_PAD_A1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_A2_type;
  _A02_LED_NUM_PAD_A2_type A02_LED_NUM_PAD_A2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_A3_type;
  _A02_LED_NUM_PAD_A3_type A02_LED_NUM_PAD_A3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_B1_type;
  _A02_LED_NUM_PAD_B1_type A02_LED_NUM_PAD_B1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_B2_type;
  _A02_LED_NUM_PAD_B2_type A02_LED_NUM_PAD_B2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_B3_type;
  _A02_LED_NUM_PAD_B3_type A02_LED_NUM_PAD_B3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_C1_type;
  _A02_LED_NUM_PAD_C1_type A02_LED_NUM_PAD_C1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_C2_type;
  _A02_LED_NUM_PAD_C2_type A02_LED_NUM_PAD_C2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_LED_NUM_PAD_C3_type;
  _A02_LED_NUM_PAD_C3_type A02_LED_NUM_PAD_C3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_A1_type;
  _A02_NUM_PAD_A1_type A02_NUM_PAD_A1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_A2_type;
  _A02_NUM_PAD_A2_type A02_NUM_PAD_A2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_A3_type;
  _A02_NUM_PAD_A3_type A02_NUM_PAD_A3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_B1_type;
  _A02_NUM_PAD_B1_type A02_NUM_PAD_B1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_B2_type;
  _A02_NUM_PAD_B2_type A02_NUM_PAD_B2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_B3_type;
  _A02_NUM_PAD_B3_type A02_NUM_PAD_B3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_C1_type;
  _A02_NUM_PAD_C1_type A02_NUM_PAD_C1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_C2_type;
  _A02_NUM_PAD_C2_type A02_NUM_PAD_C2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A02_NUM_PAD_C3_type;
  _A02_NUM_PAD_C3_type A02_NUM_PAD_C3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A03_TOGGLE_type;
  _A03_TOGGLE_type A03_TOGGLE;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A03_LED_type;
  _A03_LED_type A03_LED;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A04_TOGGLE_type;
  _A04_TOGGLE_type A04_TOGGLE;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A04_LED_TOP_type;
  _A04_LED_TOP_type A04_LED_TOP;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A04_LED_BOTTOM_type;
  _A04_LED_BOTTOM_type A04_LED_BOTTOM;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A05_TOGGLE_type;
  _A05_TOGGLE_type A05_TOGGLE;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _A05_LED_type;
  _A05_LED_type A05_LED;




  typedef boost::shared_ptr< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> const> ConstPtr;

}; // struct TaskboardPanelA_

typedef ::gazebo_taskboard::TaskboardPanelA_<std::allocator<void> > TaskboardPanelA;

typedef boost::shared_ptr< ::gazebo_taskboard::TaskboardPanelA > TaskboardPanelAPtr;
typedef boost::shared_ptr< ::gazebo_taskboard::TaskboardPanelA const> TaskboardPanelAConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_taskboard

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'gazebo_taskboard': ['/home/murray/Projects/chessbot/src/nasa_r2_simulator/gazebo_taskboard/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ee4c1b86056331dd76c8ef8469b7f0fd";
  }

  static const char* value(const ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xee4c1b86056331ddULL;
  static const uint64_t static_value2 = 0x76c8ef8469b7f0fdULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_taskboard/TaskboardPanelA";
  }

  static const char* value(const ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string PANEL_POWER_COVER\n\
string PANEL_POWER_SWITCH\n\
string PANEL_POWER_LED\n\
string A01_ROCKER_SWITCH\n\
string A01_ROCKER_LED_TOP\n\
string A01_ROCKER_LED_BOTTOM\n\
string A02_LED_NUM_PAD_A1\n\
string A02_LED_NUM_PAD_A2\n\
string A02_LED_NUM_PAD_A3\n\
string A02_LED_NUM_PAD_B1\n\
string A02_LED_NUM_PAD_B2\n\
string A02_LED_NUM_PAD_B3\n\
string A02_LED_NUM_PAD_C1\n\
string A02_LED_NUM_PAD_C2\n\
string A02_LED_NUM_PAD_C3\n\
string A02_NUM_PAD_A1\n\
string A02_NUM_PAD_A2\n\
string A02_NUM_PAD_A3\n\
string A02_NUM_PAD_B1\n\
string A02_NUM_PAD_B2\n\
string A02_NUM_PAD_B3\n\
string A02_NUM_PAD_C1\n\
string A02_NUM_PAD_C2\n\
string A02_NUM_PAD_C3\n\
string A03_TOGGLE\n\
string A03_LED\n\
string A04_TOGGLE\n\
string A04_LED_TOP\n\
string A04_LED_BOTTOM\n\
string A05_TOGGLE\n\
string A05_LED\n\
";
  }

  static const char* value(const ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.PANEL_POWER_COVER);
      stream.next(m.PANEL_POWER_SWITCH);
      stream.next(m.PANEL_POWER_LED);
      stream.next(m.A01_ROCKER_SWITCH);
      stream.next(m.A01_ROCKER_LED_TOP);
      stream.next(m.A01_ROCKER_LED_BOTTOM);
      stream.next(m.A02_LED_NUM_PAD_A1);
      stream.next(m.A02_LED_NUM_PAD_A2);
      stream.next(m.A02_LED_NUM_PAD_A3);
      stream.next(m.A02_LED_NUM_PAD_B1);
      stream.next(m.A02_LED_NUM_PAD_B2);
      stream.next(m.A02_LED_NUM_PAD_B3);
      stream.next(m.A02_LED_NUM_PAD_C1);
      stream.next(m.A02_LED_NUM_PAD_C2);
      stream.next(m.A02_LED_NUM_PAD_C3);
      stream.next(m.A02_NUM_PAD_A1);
      stream.next(m.A02_NUM_PAD_A2);
      stream.next(m.A02_NUM_PAD_A3);
      stream.next(m.A02_NUM_PAD_B1);
      stream.next(m.A02_NUM_PAD_B2);
      stream.next(m.A02_NUM_PAD_B3);
      stream.next(m.A02_NUM_PAD_C1);
      stream.next(m.A02_NUM_PAD_C2);
      stream.next(m.A02_NUM_PAD_C3);
      stream.next(m.A03_TOGGLE);
      stream.next(m.A03_LED);
      stream.next(m.A04_TOGGLE);
      stream.next(m.A04_LED_TOP);
      stream.next(m.A04_LED_BOTTOM);
      stream.next(m.A05_TOGGLE);
      stream.next(m.A05_LED);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskboardPanelA_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_taskboard::TaskboardPanelA_<ContainerAllocator>& v)
  {
    s << indent << "PANEL_POWER_COVER: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PANEL_POWER_COVER);
    s << indent << "PANEL_POWER_SWITCH: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PANEL_POWER_SWITCH);
    s << indent << "PANEL_POWER_LED: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PANEL_POWER_LED);
    s << indent << "A01_ROCKER_SWITCH: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A01_ROCKER_SWITCH);
    s << indent << "A01_ROCKER_LED_TOP: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A01_ROCKER_LED_TOP);
    s << indent << "A01_ROCKER_LED_BOTTOM: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A01_ROCKER_LED_BOTTOM);
    s << indent << "A02_LED_NUM_PAD_A1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_A1);
    s << indent << "A02_LED_NUM_PAD_A2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_A2);
    s << indent << "A02_LED_NUM_PAD_A3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_A3);
    s << indent << "A02_LED_NUM_PAD_B1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_B1);
    s << indent << "A02_LED_NUM_PAD_B2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_B2);
    s << indent << "A02_LED_NUM_PAD_B3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_B3);
    s << indent << "A02_LED_NUM_PAD_C1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_C1);
    s << indent << "A02_LED_NUM_PAD_C2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_C2);
    s << indent << "A02_LED_NUM_PAD_C3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_LED_NUM_PAD_C3);
    s << indent << "A02_NUM_PAD_A1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_A1);
    s << indent << "A02_NUM_PAD_A2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_A2);
    s << indent << "A02_NUM_PAD_A3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_A3);
    s << indent << "A02_NUM_PAD_B1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_B1);
    s << indent << "A02_NUM_PAD_B2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_B2);
    s << indent << "A02_NUM_PAD_B3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_B3);
    s << indent << "A02_NUM_PAD_C1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_C1);
    s << indent << "A02_NUM_PAD_C2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_C2);
    s << indent << "A02_NUM_PAD_C3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A02_NUM_PAD_C3);
    s << indent << "A03_TOGGLE: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A03_TOGGLE);
    s << indent << "A03_LED: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A03_LED);
    s << indent << "A04_TOGGLE: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A04_TOGGLE);
    s << indent << "A04_LED_TOP: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A04_LED_TOP);
    s << indent << "A04_LED_BOTTOM: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A04_LED_BOTTOM);
    s << indent << "A05_TOGGLE: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A05_TOGGLE);
    s << indent << "A05_LED: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.A05_LED);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_TASKBOARD_MESSAGE_TASKBOARDPANELA_H
