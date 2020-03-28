// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg\PerfValue.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__PERF_VALUE__STRUCT_HPP_
#define OBJECT_MSGS__MSG__PERF_VALUE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__PerfValue __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__PerfValue __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerfValue_
{
  using Type = PerfValue_<ContainerAllocator>;

  explicit PerfValue_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->average = 0.0;
      this->min = 0.0;
      this->max = 0.0;
      this->std_dev = 0.0;
      this->window = 0;
    }
  }

  explicit PerfValue_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->average = 0.0;
      this->min = 0.0;
      this->max = 0.0;
      this->std_dev = 0.0;
      this->window = 0;
    }
  }

  // field types and members
  using _average_type =
    double;
  _average_type average;
  using _min_type =
    double;
  _min_type min;
  using _max_type =
    double;
  _max_type max;
  using _std_dev_type =
    double;
  _std_dev_type std_dev;
  using _window_type =
    int16_t;
  _window_type window;

  // setters for named parameter idiom
  Type & set__average(
    const double & _arg)
  {
    this->average = _arg;
    return *this;
  }
  Type & set__min(
    const double & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__max(
    const double & _arg)
  {
    this->max = _arg;
    return *this;
  }
  Type & set__std_dev(
    const double & _arg)
  {
    this->std_dev = _arg;
    return *this;
  }
  Type & set__window(
    const int16_t & _arg)
  {
    this->window = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::PerfValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::PerfValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::PerfValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::PerfValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::PerfValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::PerfValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::PerfValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::PerfValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::PerfValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::PerfValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__PerfValue
    std::shared_ptr<object_msgs::msg::PerfValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__PerfValue
    std::shared_ptr<object_msgs::msg::PerfValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerfValue_ & other) const
  {
    if (this->average != other.average) {
      return false;
    }
    if (this->min != other.min) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    if (this->std_dev != other.std_dev) {
      return false;
    }
    if (this->window != other.window) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerfValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerfValue_

// alias to use template instance with default allocator
using PerfValue =
  object_msgs::msg::PerfValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__PERF_VALUE__STRUCT_HPP_
