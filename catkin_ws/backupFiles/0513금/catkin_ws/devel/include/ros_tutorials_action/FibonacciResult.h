// Generated by gencpp from file ros_tutorials_action/FibonacciResult.msg
// DO NOT EDIT!


#ifndef ROS_TUTORIALS_ACTION_MESSAGE_FIBONACCIRESULT_H
#define ROS_TUTORIALS_ACTION_MESSAGE_FIBONACCIRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_tutorials_action
{
template <class ContainerAllocator>
struct FibonacciResult_
{
  typedef FibonacciResult_<ContainerAllocator> Type;

  FibonacciResult_()
    : sequence()  {
    }
  FibonacciResult_(const ContainerAllocator& _alloc)
    : sequence(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _sequence_type;
  _sequence_type sequence;





  typedef boost::shared_ptr< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> const> ConstPtr;

}; // struct FibonacciResult_

typedef ::ros_tutorials_action::FibonacciResult_<std::allocator<void> > FibonacciResult;

typedef boost::shared_ptr< ::ros_tutorials_action::FibonacciResult > FibonacciResultPtr;
typedef boost::shared_ptr< ::ros_tutorials_action::FibonacciResult const> FibonacciResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator1> & lhs, const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator2> & rhs)
{
  return lhs.sequence == rhs.sequence;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator1> & lhs, const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_tutorials_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b81e37d2a31925a0e8ae261a8699cb79";
  }

  static const char* value(const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb81e37d2a31925a0ULL;
  static const uint64_t static_value2 = 0xe8ae261a8699cb79ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_tutorials_action/FibonacciResult";
  }

  static const char* value(const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"int32[] sequence\n"
;
  }

  static const char* value(const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sequence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FibonacciResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_tutorials_action::FibonacciResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_tutorials_action::FibonacciResult_<ContainerAllocator>& v)
  {
    s << indent << "sequence[]" << std::endl;
    for (size_t i = 0; i < v.sequence.size(); ++i)
    {
      s << indent << "  sequence[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.sequence[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_TUTORIALS_ACTION_MESSAGE_FIBONACCIRESULT_H
