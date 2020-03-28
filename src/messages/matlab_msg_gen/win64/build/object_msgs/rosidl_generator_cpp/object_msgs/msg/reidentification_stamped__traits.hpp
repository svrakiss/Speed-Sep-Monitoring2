// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg\ReidentificationStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__REIDENTIFICATION_STAMPED__TRAITS_HPP_
#define OBJECT_MSGS__MSG__REIDENTIFICATION_STAMPED__TRAITS_HPP_

#include "object_msgs/msg/reidentification_stamped__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_msgs::msg::ReidentificationStamped>()
{
  return "object_msgs::msg::ReidentificationStamped";
}

template<>
struct has_fixed_size<object_msgs::msg::ReidentificationStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::msg::ReidentificationStamped>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__REIDENTIFICATION_STAMPED__TRAITS_HPP_
