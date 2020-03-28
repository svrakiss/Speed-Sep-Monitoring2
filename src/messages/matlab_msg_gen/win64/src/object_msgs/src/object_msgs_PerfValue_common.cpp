// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/PerfValue
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
#include "object_msgs/msg/perf_value.hpp"
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
namespace PerfValue {
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::PerfValue>& msg, const matlab::data::StructArray arr) {
    try {
        //average
        const matlab::data::TypedArray<double> average_arr = arr[0]["average"];
        msg->average = average_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'average' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'average' is wrong type; expected a double.");
    }
    try {
        //min
        const matlab::data::TypedArray<double> min_arr = arr[0]["min"];
        msg->min = min_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'min' is wrong type; expected a double.");
    }
    try {
        //max
        const matlab::data::TypedArray<double> max_arr = arr[0]["max"];
        msg->max = max_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'max' is wrong type; expected a double.");
    }
    try {
        //std_dev
        const matlab::data::TypedArray<double> std_dev_arr = arr[0]["std_dev"];
        msg->std_dev = std_dev_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'std_dev' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'std_dev' is wrong type; expected a double.");
    }
    try {
        //window
        const matlab::data::TypedArray<int16_t> window_arr = arr[0]["window"];
        msg->window = window_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'window' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'window' is wrong type; expected a int16.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::PerfValue>& msg) {
    auto outArray = factory.createStructArray({1,1},{"average","min","max","std_dev","window"});
    // average
    outArray[0]["average"] = factory.createScalar(msg->average);
    // min
    outArray[0]["min"] = factory.createScalar(msg->min);
    // max
    outArray[0]["max"] = factory.createScalar(msg->max);
    // std_dev
    outArray[0]["std_dev"] = factory.createScalar(msg->std_dev);
    // window
    outArray[0]["window"] = factory.createScalar(msg->window);
    return outArray;
  }
} //namespace PerfValue
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER