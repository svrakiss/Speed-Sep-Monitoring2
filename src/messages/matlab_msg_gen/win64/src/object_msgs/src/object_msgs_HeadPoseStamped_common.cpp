// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/HeadPoseStamped
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
#include "object_msgs/msg/head_pose_stamped.hpp"
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
namespace HeadPoseStamped {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_headposes(object_msgs::msg::HeadPose& val, const matlab::data::Struct& arr);
  void copy_from_arr_headposes_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::HeadPoseStamped::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_headposes(MDFactory_T& factory, object_msgs::msg::HeadPoseStamped::_headposes_type& val);
  MDArray_T get_arr_headposes_roi(MDFactory_T& factory, object_msgs::msg::HeadPose::_roi_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr) {
    // header.stamp
    try {
        const matlab::data::StructArray _headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_header_stamp(val.stamp,_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // header.frame_id
    try {
        const matlab::data::CharArray _headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr) {
    // header.stamp.sec
    try {
        const matlab::data::TypedArray<int32_t> _header_stampsec_arr = arr[0]["sec"];
        val.sec = _header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a int32.");
    }
    // header.stamp.nanosec
    try {
        const matlab::data::TypedArray<uint32_t> _header_stampnanosec_arr = arr[0]["nanosec"];
        val.nanosec = _header_stampnanosec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nanosec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nanosec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_headposes(object_msgs::msg::HeadPose& val, const matlab::data::Struct& arr) {
    // headposes.yaw
    try {
        const matlab::data::TypedArray<float> _headposesyaw_arr = arr["yaw"];
        val.yaw = _headposesyaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    // headposes.pitch
    try {
        const matlab::data::TypedArray<float> _headposespitch_arr = arr["pitch"];
        val.pitch = _headposespitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a single.");
    }
    // headposes.roll
    try {
        const matlab::data::TypedArray<float> _headposesroll_arr = arr["roll"];
        val.roll = _headposesroll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a single.");
    }
    // headposes.roi
    try {
        const matlab::data::StructArray _headposesroi_arr = arr["roi"];
        copy_from_arr_headposes_roi(val.roi,_headposesroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_headposes_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // headposes.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _headposes_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _headposes_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // headposes.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _headposes_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _headposes_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // headposes.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _headposes_roiheight_arr = arr[0]["height"];
        val.height = _headposes_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // headposes.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _headposes_roiwidth_arr = arr[0]["width"];
        val.width = _headposes_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // headposes.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _headposes_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _headposes_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::HeadPoseStamped>& msg, const matlab::data::StructArray arr) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr[0]["header"];
        copy_from_arr_header(msg->header,header_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //headposes
        const matlab::data::StructArray headposes_arr = arr[0]["headposes"];
        for (auto _headposesarr : headposes_arr) {
        	object_msgs::msg::HeadPose _val;
        	copy_from_arr_headposes(_val,_headposesarr);
        	msg->headposes.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'headposes' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'headposes' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::HeadPoseStamped::_header_type& val) {
    auto _headeroutArray = factory.createStructArray({1,1},{"stamp","frame_id"});
    // header.stamp
    _headeroutArray[0]["stamp"] = get_arr_header_stamp(factory, val.stamp);
    // header.frame_id
    _headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return _headeroutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val) {
    auto _header_stampoutArray = factory.createStructArray({1,1},{"sec","nanosec"});
    // header.stamp.sec
    _header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // header.stamp.nanosec
    _header_stampoutArray[0]["nanosec"] = factory.createScalar(val.nanosec);
    return _header_stampoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_headposes(MDFactory_T& factory, object_msgs::msg::HeadPoseStamped::_headposes_type& val) {
    auto _headposesoutArray = factory.createStructArray({1,val.size()},{"yaw","pitch","roll","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // headposes.yaw
    	_headposesoutArray[idx]["yaw"] = factory.createScalar(val[idx].yaw);
    // headposes.pitch
    	_headposesoutArray[idx]["pitch"] = factory.createScalar(val[idx].pitch);
    // headposes.roll
    	_headposesoutArray[idx]["roll"] = factory.createScalar(val[idx].roll);
    // headposes.roi
    _headposesoutArray[idx]["roi"] = get_arr_headposes_roi(factory, val[idx].roi);
    }
    return _headposesoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_headposes_roi(MDFactory_T& factory, object_msgs::msg::HeadPose::_roi_type& val) {
    auto _headposes_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // headposes.roi.x_offset
    _headposes_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // headposes.roi.y_offset
    _headposes_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // headposes.roi.height
    _headposes_roioutArray[0]["height"] = factory.createScalar(val.height);
    // headposes.roi.width
    _headposes_roioutArray[0]["width"] = factory.createScalar(val.width);
    // headposes.roi.do_rectify
    _headposes_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _headposes_roioutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::HeadPoseStamped>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","headposes"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // headposes
    outArray[0]["headposes"] = get_arr_headposes(factory, msg->headposes);
    return outArray;
  }
} //namespace HeadPoseStamped
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER