// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg\LandmarkStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__LANDMARK_STAMPED__STRUCT_HPP_
#define OBJECT_MSGS__MSG__LANDMARK_STAMPED__STRUCT_HPP_

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
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'landmarks'
#include "object_msgs/msg/landmark__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__LandmarkStamped __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__LandmarkStamped __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandmarkStamped_
{
  using Type = LandmarkStamped_<ContainerAllocator>;

  explicit LandmarkStamped_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LandmarkStamped_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _landmarks_type =
    std::vector<object_msgs::msg::Landmark_<ContainerAllocator>, typename ContainerAllocator::template rebind<object_msgs::msg::Landmark_<ContainerAllocator>>::other>;
  _landmarks_type landmarks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__landmarks(
    const std::vector<object_msgs::msg::Landmark_<ContainerAllocator>, typename ContainerAllocator::template rebind<object_msgs::msg::Landmark_<ContainerAllocator>>::other> & _arg)
  {
    this->landmarks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::LandmarkStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::LandmarkStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::LandmarkStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::LandmarkStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__LandmarkStamped
    std::shared_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__LandmarkStamped
    std::shared_ptr<object_msgs::msg::LandmarkStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandmarkStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->landmarks != other.landmarks) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandmarkStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandmarkStamped_

// alias to use template instance with default allocator
using LandmarkStamped =
  object_msgs::msg::LandmarkStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__LANDMARK_STAMPED__STRUCT_HPP_
