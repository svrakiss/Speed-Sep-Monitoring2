// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:msg\ObjectsInMasks.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "object_msgs/msg/objects_in_masks__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace object_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__ObjectsInMasks__objects_vector(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_msgs::msg::ObjectInMask> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectsInMasks__objects_vector(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_msgs::msg::ObjectInMask> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectsInMasks__objects_vector(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_msgs::msg::ObjectInMask> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectsInMasks__objects_vector(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_msgs::msg::ObjectInMask> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectsInMasks_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInMasks, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects_vector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_msgs::msg::ObjectInMask>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInMasks, objects_vector),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectsInMasks__objects_vector,  // size() function pointer
    get_const_function__ObjectsInMasks__objects_vector,  // get_const(index) function pointer
    get_function__ObjectsInMasks__objects_vector,  // get(index) function pointer
    resize_function__ObjectsInMasks__objects_vector  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectsInMasks_message_members = {
  "object_msgs::msg",  // message namespace
  "ObjectsInMasks",  // message name
  2,  // number of fields
  sizeof(object_msgs::msg::ObjectsInMasks),
  ObjectsInMasks_message_member_array  // message members
};

static const rosidl_message_type_support_t ObjectsInMasks_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectsInMasks_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace object_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<object_msgs::msg::ObjectsInMasks>()
{
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectsInMasks_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, object_msgs, msg, ObjectsInMasks)() {
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectsInMasks_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
