// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:msg\PersonsStamped.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/persons_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "object_msgs/msg/persons_stamped__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace object_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const object_msgs::msg::ObjectInBox &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  object_msgs::msg::ObjectInBox &);
size_t get_serialized_size(
  const object_msgs::msg::ObjectInBox &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectInBox(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace object_msgs

namespace object_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const object_msgs::msg::Emotion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  object_msgs::msg::Emotion &);
size_t get_serialized_size(
  const object_msgs::msg::Emotion &,
  size_t current_alignment);
size_t
max_serialized_size_Emotion(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace object_msgs

namespace object_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const object_msgs::msg::AgeGender &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  object_msgs::msg::AgeGender &);
size_t get_serialized_size(
  const object_msgs::msg::AgeGender &,
  size_t current_alignment);
size_t
max_serialized_size_AgeGender(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace object_msgs

namespace object_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const object_msgs::msg::HeadPose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  object_msgs::msg::HeadPose &);
size_t get_serialized_size(
  const object_msgs::msg::HeadPose &,
  size_t current_alignment);
size_t
max_serialized_size_HeadPose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace object_msgs


namespace object_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_serialize(
  const object_msgs::msg::PersonsStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: faces
  {
    size_t size = ros_message.faces.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.faces[i],
        cdr);
    }
  }
  // Member: emotions
  {
    size_t size = ros_message.emotions.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.emotions[i],
        cdr);
    }
  }
  // Member: agegenders
  {
    size_t size = ros_message.agegenders.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.agegenders[i],
        cdr);
    }
  }
  // Member: headposes
  {
    size_t size = ros_message.headposes.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.headposes[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  object_msgs::msg::PersonsStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: faces
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.faces.resize(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.faces[i]);
    }
  }

  // Member: emotions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.emotions.resize(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.emotions[i]);
    }
  }

  // Member: agegenders
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.agegenders.resize(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.agegenders[i]);
    }
  }

  // Member: headposes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.headposes.resize(size);
    for (size_t i = 0; i < size; i++) {
      object_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.headposes[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
get_serialized_size(
  const object_msgs::msg::PersonsStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: faces
  {
    size_t array_size = ros_message.faces.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.faces[index], current_alignment);
    }
  }
  // Member: emotions
  {
    size_t array_size = ros_message.emotions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.emotions[index], current_alignment);
    }
  }
  // Member: agegenders
  {
    size_t array_size = ros_message.agegenders.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.agegenders[index], current_alignment);
    }
  }
  // Member: headposes
  {
    size_t array_size = ros_message.headposes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.headposes[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
max_serialized_size_PersonsStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: faces
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectInBox(
        full_bounded, current_alignment);
    }
  }

  // Member: emotions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Emotion(
        full_bounded, current_alignment);
    }
  }

  // Member: agegenders
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AgeGender(
        full_bounded, current_alignment);
    }
  }

  // Member: headposes
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HeadPose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PersonsStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const object_msgs::msg::PersonsStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PersonsStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<object_msgs::msg::PersonsStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PersonsStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const object_msgs::msg::PersonsStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PersonsStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PersonsStamped(full_bounded, 0);
}

static message_type_support_callbacks_t _PersonsStamped__callbacks = {
  "object_msgs::msg",
  "PersonsStamped",
  _PersonsStamped__cdr_serialize,
  _PersonsStamped__cdr_deserialize,
  _PersonsStamped__get_serialized_size,
  _PersonsStamped__max_serialized_size
};

static rosidl_message_type_support_t _PersonsStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PersonsStamped__callbacks,
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
get_message_type_support_handle<object_msgs::msg::PersonsStamped>()
{
  return &object_msgs::msg::typesupport_fastrtps_cpp::_PersonsStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, msg, PersonsStamped)() {
  return &object_msgs::msg::typesupport_fastrtps_cpp::_PersonsStamped__handle;
}

#ifdef __cplusplus
}
#endif
