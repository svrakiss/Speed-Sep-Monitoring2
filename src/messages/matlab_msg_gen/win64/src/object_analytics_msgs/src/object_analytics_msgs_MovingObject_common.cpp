// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_analytics_msgs/MovingObject
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "object_analytics_msgs/msg/moving_object.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#ifndef FOUNDATION_MATLABDATA_API
typedef matlab::data::Array MDArray_T;
typedef matlab::data::ArrayFactory MDFactory_T;
#else
typedef foundation::matlabdata::Array MDArray_T;
typedef foundation::matlabdata::standalone::ClientArrayFactory MDFactory_T;
#endif
namespace object_analytics_msgs {
namespace matlabhelper {
namespace MovingObject {
  void copy_from_arr_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  void copy_from_arr_min(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr);
  void copy_from_arr_max(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr);
  void copy_from_arr_velocity(geometry_msgs::msg::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_roi(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_roi_type& val);
  MDArray_T get_arr_min(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_min_type& val);
  MDArray_T get_arr_max(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_max_type& val);
  MDArray_T get_arr_velocity(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_velocity_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _roiheight_arr = arr[0]["height"];
        val.height = _roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _roiwidth_arr = arr[0]["width"];
        val.width = _roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_min(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr) {
    // min.x
    try {
        const matlab::data::TypedArray<float> _minx_arr = arr[0]["x"];
        val.x = _minx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    // min.y
    try {
        const matlab::data::TypedArray<float> _miny_arr = arr[0]["y"];
        val.y = _miny_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    // min.z
    try {
        const matlab::data::TypedArray<float> _minz_arr = arr[0]["z"];
        val.z = _minz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_max(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr) {
    // max.x
    try {
        const matlab::data::TypedArray<float> _maxx_arr = arr[0]["x"];
        val.x = _maxx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    // max.y
    try {
        const matlab::data::TypedArray<float> _maxy_arr = arr[0]["y"];
        val.y = _maxy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    // max.z
    try {
        const matlab::data::TypedArray<float> _maxz_arr = arr[0]["z"];
        val.z = _maxz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_velocity(geometry_msgs::msg::Point& val, const matlab::data::StructArray& arr) {
    // velocity.x
    try {
        const matlab::data::TypedArray<double> _velocityx_arr = arr[0]["x"];
        val.x = _velocityx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // velocity.y
    try {
        const matlab::data::TypedArray<double> _velocityy_arr = arr[0]["y"];
        val.y = _velocityy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // velocity.z
    try {
        const matlab::data::TypedArray<double> _velocityz_arr = arr[0]["z"];
        val.z = _velocityz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_analytics_msgs::msg::MovingObject>& msg, const matlab::data::StructArray arr) {
    try {
        //id
        const matlab::data::TypedArray<int32_t> id_arr = arr[0]["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    try {
        //type
        const matlab::data::CharArray type_arr = arr[0]["type"];
        msg->type = type_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a string.");
    }
    try {
        //probability
        const matlab::data::TypedArray<float> probability_arr = arr[0]["probability"];
        msg->probability = probability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
    }
    try {
        //roi
        const matlab::data::StructArray roi_arr = arr[0]["roi"];
        copy_from_arr_roi(msg->roi,roi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
    try {
        //min
        const matlab::data::StructArray min_arr = arr[0]["min"];
        copy_from_arr_min(msg->min,min_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'min' is wrong type; expected a struct.");
    }
    try {
        //max
        const matlab::data::StructArray max_arr = arr[0]["max"];
        copy_from_arr_max(msg->max,max_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'max' is wrong type; expected a struct.");
    }
    try {
        //velocity
        const matlab::data::StructArray velocity_arr = arr[0]["velocity"];
        copy_from_arr_velocity(msg->velocity,velocity_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_roi(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_roi_type& val) {
    auto _roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // roi.x_offset
    _roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // roi.y_offset
    _roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // roi.height
    _roioutArray[0]["height"] = factory.createScalar(val.height);
    // roi.width
    _roioutArray[0]["width"] = factory.createScalar(val.width);
    // roi.do_rectify
    _roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _roioutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_min(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_min_type& val) {
    auto _minoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // min.x
    _minoutArray[0]["x"] = factory.createScalar(val.x);
    // min.y
    _minoutArray[0]["y"] = factory.createScalar(val.y);
    // min.z
    _minoutArray[0]["z"] = factory.createScalar(val.z);
    return _minoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_max(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_max_type& val) {
    auto _maxoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // max.x
    _maxoutArray[0]["x"] = factory.createScalar(val.x);
    // max.y
    _maxoutArray[0]["y"] = factory.createScalar(val.y);
    // max.z
    _maxoutArray[0]["z"] = factory.createScalar(val.z);
    return _maxoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_velocity(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_velocity_type& val) {
    auto _velocityoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // velocity.x
    _velocityoutArray[0]["x"] = factory.createScalar(val.x);
    // velocity.y
    _velocityoutArray[0]["y"] = factory.createScalar(val.y);
    // velocity.z
    _velocityoutArray[0]["z"] = factory.createScalar(val.z);
    return _velocityoutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_analytics_msgs::msg::MovingObject>& msg) {
    auto outArray = factory.createStructArray({1,1},{"id","type","probability","roi","min","max","velocity"});
    // id
    outArray[0]["id"] = factory.createScalar(msg->id);
    // type
    outArray[0]["type"] = factory.createCharArray(msg->type);
    // probability
    outArray[0]["probability"] = factory.createScalar(msg->probability);
    // roi
    outArray[0]["roi"] = get_arr_roi(factory, msg->roi);
    // min
    outArray[0]["min"] = get_arr_min(factory, msg->min);
    // max
    outArray[0]["max"] = get_arr_max(factory, msg->max);
    // velocity
    outArray[0]["velocity"] = get_arr_velocity(factory, msg->velocity);
    return outArray;
  }
} //namespace MovingObject
} //namespace matlabhelper
} //namespace object_analytics_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER