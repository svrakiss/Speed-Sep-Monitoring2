// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/AgeGender
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
#include "object_msgs/msg/age_gender.hpp"
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
namespace AgeGender {
  void copy_from_arr_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_roi(MDFactory_T& factory, object_msgs::msg::AgeGender::_roi_type& val);
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
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::AgeGender>& msg, const matlab::data::StructArray arr) {
    try {
        //age
        const matlab::data::TypedArray<float> age_arr = arr[0]["age"];
        msg->age = age_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'age' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'age' is wrong type; expected a single.");
    }
    try {
        //gender
        const matlab::data::CharArray gender_arr = arr[0]["gender"];
        msg->gender = gender_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gender' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gender' is wrong type; expected a string.");
    }
    try {
        //gender_confidence
        const matlab::data::TypedArray<float> gender_confidence_arr = arr[0]["gender_confidence"];
        msg->gender_confidence = gender_confidence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gender_confidence' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gender_confidence' is wrong type; expected a single.");
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
  MDArray_T get_arr_roi(MDFactory_T& factory, object_msgs::msg::AgeGender::_roi_type& val) {
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
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::AgeGender>& msg) {
    auto outArray = factory.createStructArray({1,1},{"age","gender","gender_confidence","roi"});
    // age
    outArray[0]["age"] = factory.createScalar(msg->age);
    // gender
    outArray[0]["gender"] = factory.createCharArray(msg->gender);
    // gender_confidence
    outArray[0]["gender_confidence"] = factory.createScalar(msg->gender_confidence);
    // roi
    outArray[0]["roi"] = get_arr_roi(factory, msg->roi);
    return outArray;
  }
} //namespace AgeGender
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER