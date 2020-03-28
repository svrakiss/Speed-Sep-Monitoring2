// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/LandmarkStamped
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
#include "object_msgs/msg/landmark_stamped.hpp"
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
namespace LandmarkStamped {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_landmarks(object_msgs::msg::Landmark& val, const matlab::data::Struct& arr);
  void copy_from_arr_landmarks_landmark_points(geometry_msgs::msg::Point& val, const matlab::data::Struct& arr);
  void copy_from_arr_landmarks_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::LandmarkStamped::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_landmarks(MDFactory_T& factory, object_msgs::msg::LandmarkStamped::_landmarks_type& val);
  MDArray_T get_arr_landmarks_landmark_points(MDFactory_T& factory, object_msgs::msg::Landmark::_landmark_points_type& val);
  MDArray_T get_arr_landmarks_roi(MDFactory_T& factory, object_msgs::msg::Landmark::_roi_type& val);
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
  void copy_from_arr_landmarks(object_msgs::msg::Landmark& val, const matlab::data::Struct& arr) {
    // landmarks.landmark_points
    try {
        const matlab::data::StructArray _landmarkslandmark_points_arr = arr["landmark_points"];
        for (auto _landmark_pointsarr : _landmarkslandmark_points_arr) {
        	geometry_msgs::msg::Point _val;
        	copy_from_arr_landmarks_landmark_points(_val,_landmark_pointsarr);
        	val.landmark_points.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'landmark_points' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'landmark_points' is wrong type; expected a struct.");
    }
    // landmarks.roi
    try {
        const matlab::data::StructArray _landmarksroi_arr = arr["roi"];
        copy_from_arr_landmarks_roi(val.roi,_landmarksroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_landmarks_landmark_points(geometry_msgs::msg::Point& val, const matlab::data::Struct& arr) {
    // landmarks.landmark_points.x
    try {
        const matlab::data::TypedArray<double> _landmarks_landmark_pointsx_arr = arr["x"];
        val.x = _landmarks_landmark_pointsx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // landmarks.landmark_points.y
    try {
        const matlab::data::TypedArray<double> _landmarks_landmark_pointsy_arr = arr["y"];
        val.y = _landmarks_landmark_pointsy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // landmarks.landmark_points.z
    try {
        const matlab::data::TypedArray<double> _landmarks_landmark_pointsz_arr = arr["z"];
        val.z = _landmarks_landmark_pointsz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_landmarks_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // landmarks.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _landmarks_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _landmarks_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // landmarks.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _landmarks_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _landmarks_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // landmarks.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _landmarks_roiheight_arr = arr[0]["height"];
        val.height = _landmarks_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // landmarks.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _landmarks_roiwidth_arr = arr[0]["width"];
        val.width = _landmarks_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // landmarks.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _landmarks_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _landmarks_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::LandmarkStamped>& msg, const matlab::data::StructArray arr) {
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
        //landmarks
        const matlab::data::StructArray landmarks_arr = arr[0]["landmarks"];
        for (auto _landmarksarr : landmarks_arr) {
        	object_msgs::msg::Landmark _val;
        	copy_from_arr_landmarks(_val,_landmarksarr);
        	msg->landmarks.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'landmarks' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'landmarks' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::LandmarkStamped::_header_type& val) {
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
  MDArray_T get_arr_landmarks(MDFactory_T& factory, object_msgs::msg::LandmarkStamped::_landmarks_type& val) {
    auto _landmarksoutArray = factory.createStructArray({1,val.size()},{"landmark_points","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // landmarks.landmark_points
    _landmarksoutArray[idx]["landmark_points"] = get_arr_landmarks_landmark_points(factory, val[idx].landmark_points);
    // landmarks.roi
    _landmarksoutArray[idx]["roi"] = get_arr_landmarks_roi(factory, val[idx].roi);
    }
    return _landmarksoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_landmarks_landmark_points(MDFactory_T& factory, object_msgs::msg::Landmark::_landmark_points_type& val) {
    auto _landmarks_landmark_pointsoutArray = factory.createStructArray({1,val.size()},{"x","y","z"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // landmarks.landmark_points.x
    	_landmarks_landmark_pointsoutArray[idx]["x"] = factory.createScalar(val[idx].x);
    // landmarks.landmark_points.y
    	_landmarks_landmark_pointsoutArray[idx]["y"] = factory.createScalar(val[idx].y);
    // landmarks.landmark_points.z
    	_landmarks_landmark_pointsoutArray[idx]["z"] = factory.createScalar(val[idx].z);
    }
    return _landmarks_landmark_pointsoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_landmarks_roi(MDFactory_T& factory, object_msgs::msg::Landmark::_roi_type& val) {
    auto _landmarks_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // landmarks.roi.x_offset
    _landmarks_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // landmarks.roi.y_offset
    _landmarks_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // landmarks.roi.height
    _landmarks_roioutArray[0]["height"] = factory.createScalar(val.height);
    // landmarks.roi.width
    _landmarks_roioutArray[0]["width"] = factory.createScalar(val.width);
    // landmarks.roi.do_rectify
    _landmarks_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _landmarks_roioutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::LandmarkStamped>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","landmarks"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // landmarks
    outArray[0]["landmarks"] = get_arr_landmarks(factory, msg->landmarks);
    return outArray;
  }
} //namespace LandmarkStamped
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER