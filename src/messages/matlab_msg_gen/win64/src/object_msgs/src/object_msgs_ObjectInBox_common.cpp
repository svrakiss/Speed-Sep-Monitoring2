// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/ObjectInBox
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
#include "object_msgs/msg/object_in_box.hpp"
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
namespace object_msgs {
namespace matlabhelper {
namespace ObjectInBox {
  void copy_from_arr_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr);
  void copy_from_arr_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_object(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_object_type& val);
  MDArray_T get_arr_roi(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_roi_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr) {
    // object.object_name
    try {
        const matlab::data::CharArray _objectobject_name_arr = arr[0]["object_name"];
        val.object_name = _objectobject_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object_name' is wrong type; expected a string.");
    }
    // object.probability
    try {
        const matlab::data::TypedArray<float> _objectprobability_arr = arr[0]["probability"];
        val.probability = _objectprobability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
    }
  }
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
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::ObjectInBox>& msg, const matlab::data::StructArray arr) {
    try {
        //object
        const matlab::data::StructArray object_arr = arr[0]["object"];
        copy_from_arr_object(msg->object,object_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object' is wrong type; expected a struct.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_object(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_object_type& val) {
    auto _objectoutArray = factory.createStructArray({1,1},{"object_name","probability"});
    // object.object_name
    _objectoutArray[0]["object_name"] = factory.createCharArray(val.object_name);
    // object.probability
    _objectoutArray[0]["probability"] = factory.createScalar(val.probability);
    return _objectoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_roi(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_roi_type& val) {
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
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::ObjectInBox>& msg) {
    auto outArray = factory.createStructArray({1,1},{"object","roi"});
    // object
    outArray[0]["object"] = get_arr_object(factory, msg->object);
    // roi
    outArray[0]["roi"] = get_arr_roi(factory, msg->roi);
    return outArray;
  }
} //namespace ObjectInBox
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER