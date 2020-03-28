// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg\ObjectInBox3D.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__TRAITS_HPP_
#define OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__TRAITS_HPP_

#include "object_msgs/msg/object_in_box3_d__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'object'
#include "object_msgs/msg/object__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/region_of_interest__traits.hpp"
// Member 'min'
// Member 'max'
#include "geometry_msgs/msg/point32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_msgs::msg::ObjectInBox3D>()
{
  return "object_msgs::msg::ObjectInBox3D";
}

template<>
struct has_fixed_size<object_msgs::msg::ObjectInBox3D>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point32>::value && has_fixed_size<object_msgs::msg::Object>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<object_msgs::msg::ObjectInBox3D>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point32>::value && has_bounded_size<object_msgs::msg::Object>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__TRAITS_HPP_
