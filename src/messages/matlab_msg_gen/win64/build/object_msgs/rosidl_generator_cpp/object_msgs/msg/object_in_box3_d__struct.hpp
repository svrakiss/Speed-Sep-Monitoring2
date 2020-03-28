// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg\ObjectInBox3D.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__STRUCT_HPP_
#define OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'object'
#include "object_msgs/msg/object__struct.hpp"
// Member 'roi'
#include "sensor_msgs/msg/region_of_interest__struct.hpp"
// Member 'min'
// Member 'max'
#include "geometry_msgs/msg/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__ObjectInBox3D __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__ObjectInBox3D __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectInBox3D_
{
  using Type = ObjectInBox3D_<ContainerAllocator>;

  explicit ObjectInBox3D_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : object(_init),
    roi(_init),
    min(_init),
    max(_init)
  {
    (void)_init;
  }

  explicit ObjectInBox3D_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : object(_alloc, _init),
    roi(_alloc, _init),
    min(_alloc, _init),
    max(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_type =
    object_msgs::msg::Object_<ContainerAllocator>;
  _object_type object;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _min_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _min_type min;
  using _max_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _max_type max;

  // setters for named parameter idiom
  Type & set__object(
    const object_msgs::msg::Object_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__min(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__max(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::ObjectInBox3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::ObjectInBox3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::ObjectInBox3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::ObjectInBox3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__ObjectInBox3D
    std::shared_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__ObjectInBox3D
    std::shared_ptr<object_msgs::msg::ObjectInBox3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectInBox3D_ & other) const
  {
    if (this->object != other.object) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    if (this->min != other.min) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectInBox3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectInBox3D_

// alias to use template instance with default allocator
using ObjectInBox3D =
  object_msgs::msg::ObjectInBox3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__STRUCT_HPP_
