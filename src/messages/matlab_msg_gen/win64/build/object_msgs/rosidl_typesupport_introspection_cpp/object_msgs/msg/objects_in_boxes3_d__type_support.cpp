// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:msg\ObjectsInBoxes3D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "object_msgs/msg/objects_in_boxes3_d__struct.hpp"
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

size_t size_function__ObjectsInBoxes3D__objects_in_boxes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_msgs::msg::ObjectInBox3D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectsInBoxes3D__objects_in_boxes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_msgs::msg::ObjectInBox3D> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectsInBoxes3D__objects_in_boxes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_msgs::msg::ObjectInBox3D> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectsInBoxes3D__objects_in_boxes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_msgs::msg::ObjectInBox3D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectsInBoxes3D_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInBoxes3D, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects_in_boxes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_msgs::msg::ObjectInBox3D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInBoxes3D, objects_in_boxes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectsInBoxes3D__objects_in_boxes,  // size() function pointer
    get_const_function__ObjectsInBoxes3D__objects_in_boxes,  // get_const(index) function pointer
    get_function__ObjectsInBoxes3D__objects_in_boxes,  // get(index) function pointer
    resize_function__ObjectsInBoxes3D__objects_in_boxes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectsInBoxes3D_message_members = {
  "object_msgs::msg",  // message namespace
  "ObjectsInBoxes3D",  // message name
  2,  // number of fields
  sizeof(object_msgs::msg::ObjectsInBoxes3D),
  ObjectsInBoxes3D_message_member_array  // message members
};

static const rosidl_message_type_support_t ObjectsInBoxes3D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectsInBoxes3D_message_members,
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
get_message_type_support_handle<object_msgs::msg::ObjectsInBoxes3D>()
{
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectsInBoxes3D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, object_msgs, msg, ObjectsInBoxes3D)() {
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectsInBoxes3D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
