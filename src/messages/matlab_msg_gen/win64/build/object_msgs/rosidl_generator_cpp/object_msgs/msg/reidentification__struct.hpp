// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg\Reidentification.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__REIDENTIFICATION__STRUCT_HPP_
#define OBJECT_MSGS__MSG__REIDENTIFICATION__STRUCT_HPP_

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
// Member 'roi'
#include "sensor_msgs/msg/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__Reidentification __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__Reidentification __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Reidentification_
{
  using Type = Reidentification_<ContainerAllocator>;

  explicit Reidentification_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity = "";
    }
  }

  explicit Reidentification_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : identity(_alloc),
    roi(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity = "";
    }
  }

  // field types and members
  using _identity_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _identity_type identity;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__identity(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->identity = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::Reidentification_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::Reidentification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::Reidentification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::Reidentification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Reidentification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Reidentification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Reidentification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Reidentification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::Reidentification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::Reidentification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__Reidentification
    std::shared_ptr<object_msgs::msg::Reidentification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__Reidentification
    std::shared_ptr<object_msgs::msg::Reidentification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reidentification_ & other) const
  {
    if (this->identity != other.identity) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reidentification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reidentification_

// alias to use template instance with default allocator
using Reidentification =
  object_msgs::msg::Reidentification_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__REIDENTIFICATION__STRUCT_HPP_
