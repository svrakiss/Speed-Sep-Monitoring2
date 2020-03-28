// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg\Objects.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECTS__STRUCT_HPP_
#define OBJECT_MSGS__MSG__OBJECTS__STRUCT_HPP_

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
// Member 'image'
#include "sensor_msgs/msg/image__struct.hpp"
// Member 'objects_vector'
#include "object_msgs/msg/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__Objects __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__Objects __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Objects_
{
  using Type = Objects_<ContainerAllocator>;

  explicit Objects_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    image(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->inference_time_ms = 0.0f;
    }
  }

  explicit Objects_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->inference_time_ms = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _objects_vector_type =
    std::vector<object_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<object_msgs::msg::Object_<ContainerAllocator>>::other>;
  _objects_vector_type objects_vector;
  using _inference_time_ms_type =
    float;
  _inference_time_ms_type inference_time_ms;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__objects_vector(
    const std::vector<object_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<object_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_vector = _arg;
    return *this;
  }
  Type & set__inference_time_ms(
    const float & _arg)
  {
    this->inference_time_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::Objects_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::Objects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::Objects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::Objects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Objects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Objects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Objects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Objects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::Objects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::Objects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__Objects
    std::shared_ptr<object_msgs::msg::Objects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__Objects
    std::shared_ptr<object_msgs::msg::Objects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Objects_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->objects_vector != other.objects_vector) {
      return false;
    }
    if (this->inference_time_ms != other.inference_time_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const Objects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Objects_

// alias to use template instance with default allocator
using Objects =
  object_msgs::msg::Objects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__OBJECTS__STRUCT_HPP_
