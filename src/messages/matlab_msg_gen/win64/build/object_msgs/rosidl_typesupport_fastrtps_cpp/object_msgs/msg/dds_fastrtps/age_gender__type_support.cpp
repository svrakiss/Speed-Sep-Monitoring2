// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:msg\AgeGender.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/age_gender__rosidl_typesupport_fastrtps_cpp.hpp"
#include "object_msgs/msg/age_gender__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::RegionOfInterest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::RegionOfInterest &);
size_t get_serialized_size(
  const sensor_msgs::msg::RegionOfInterest &,
  size_t current_alignment);
size_t
max_serialized_size_RegionOfInterest(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace object_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_serialize(
  const object_msgs::msg::AgeGender & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: age
  cdr << ros_message.age;
  // Member: gender
  cdr << ros_message.gender;
  // Member: gender_confidence
  cdr << ros_message.gender_confidence;
  // Member: roi
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.roi,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  object_msgs::msg::AgeGender & ros_message)
{
  // Member: age
  cdr >> ros_message.age;

  // Member: gender
  cdr >> ros_message.gender;

  // Member: gender_confidence
  cdr >> ros_message.gender_confidence;

  // Member: roi
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.roi);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
get_serialized_size(
  const object_msgs::msg::AgeGender & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gender
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.gender.size() + 1);
  // Member: gender_confidence
  {
    size_t item_size = sizeof(ros_message.gender_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roi

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.roi, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
max_serialized_size_AgeGender(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gender
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: gender_confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roi
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RegionOfInterest(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AgeGender__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const object_msgs::msg::AgeGender *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AgeGender__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<object_msgs::msg::AgeGender *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AgeGender__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const object_msgs::msg::AgeGender *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AgeGender__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AgeGender(full_bounded, 0);
}

static message_type_support_callbacks_t _AgeGender__callbacks = {
  "object_msgs::msg",
  "AgeGender",
  _AgeGender__cdr_serialize,
  _AgeGender__cdr_deserialize,
  _AgeGender__get_serialized_size,
  _AgeGender__max_serialized_size
};

static rosidl_message_type_support_t _AgeGender__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AgeGender__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace object_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_object_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<object_msgs::msg::AgeGender>()
{
  return &object_msgs::msg::typesupport_fastrtps_cpp::_AgeGender__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, msg, AgeGender)() {
  return &object_msgs::msg::typesupport_fastrtps_cpp::_AgeGender__handle;
}

#ifdef __cplusplus
}
#endif
