// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:msg\LandmarkStamped.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "object_msgs/msg/landmark_stamped__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace object_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _LandmarkStamped_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LandmarkStamped_type_support_ids_t;

static const _LandmarkStamped_type_support_ids_t _LandmarkStamped_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LandmarkStamped_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LandmarkStamped_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LandmarkStamped_type_support_symbol_names_t _LandmarkStamped_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, msg, LandmarkStamped)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, object_msgs, msg, LandmarkStamped)),
  }
};

typedef struct _LandmarkStamped_type_support_data_t
{
  void * data[2];
} _LandmarkStamped_type_support_data_t;

static _LandmarkStamped_type_support_data_t _LandmarkStamped_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LandmarkStamped_message_typesupport_map = {
  2,
  "object_msgs",
  &_LandmarkStamped_message_typesupport_ids.typesupport_identifier[0],
  &_LandmarkStamped_message_typesupport_symbol_names.symbol_name[0],
  &_LandmarkStamped_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LandmarkStamped_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LandmarkStamped_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace object_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<object_msgs::msg::LandmarkStamped>()
{
  return &::object_msgs::msg::rosidl_typesupport_cpp::LandmarkStamped_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, object_msgs, msg, LandmarkStamped)() {
  return get_message_type_support_handle<object_msgs::msg::LandmarkStamped>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
