// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg\Landmark.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__LANDMARK__STRUCT_HPP_
#define OBJECT_MSGS__MSG__LANDMARK__STRUCT_HPP_

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
// Member 'landmark_points'
#include "geometry_msgs/msg/point__struct.hpp"
// Member 'roi'
#include "sensor_msgs/msg/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__Landmark __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__Landmark __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Landmark_
{
  using Type = Landmark_<ContainerAllocator>;

  explicit Landmark_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    (void)_init;
  }

  explicit Landmark_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _landmark_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _landmark_points_type landmark_points;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__landmark_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->landmark_points = _arg;
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
    object_msgs::msg::Landmark_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::Landmark_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::Landmark_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::Landmark_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Landmark_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Landmark_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Landmark_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Landmark_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::Landmark_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::Landmark_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__Landmark
    std::shared_ptr<object_msgs::msg::Landmark_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__Landmark
    std::shared_ptr<object_msgs::msg::Landmark_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Landmark_ & other) const
  {
    if (this->landmark_points != other.landmark_points) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const Landmark_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Landmark_

// alias to use template instance with default allocator
using Landmark =
  object_msgs::msg::Landmark_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__LANDMARK__STRUCT_HPP_
