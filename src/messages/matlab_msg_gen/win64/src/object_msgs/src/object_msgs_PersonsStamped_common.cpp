// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/PersonsStamped
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
#include "object_msgs/msg/persons_stamped.hpp"
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
namespace PersonsStamped {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_faces(object_msgs::msg::ObjectInBox& val, const matlab::data::Struct& arr);
  void copy_from_arr_faces_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr);
  void copy_from_arr_faces_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  void copy_from_arr_emotions(object_msgs::msg::Emotion& val, const matlab::data::Struct& arr);
  void copy_from_arr_emotions_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  void copy_from_arr_agegenders(object_msgs::msg::AgeGender& val, const matlab::data::Struct& arr);
  void copy_from_arr_agegenders_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  void copy_from_arr_headposes(object_msgs::msg::HeadPose& val, const matlab::data::Struct& arr);
  void copy_from_arr_headposes_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_faces(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_faces_type& val);
  MDArray_T get_arr_faces_object(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_object_type& val);
  MDArray_T get_arr_faces_roi(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_roi_type& val);
  MDArray_T get_arr_emotions(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_emotions_type& val);
  MDArray_T get_arr_emotions_roi(MDFactory_T& factory, object_msgs::msg::Emotion::_roi_type& val);
  MDArray_T get_arr_agegenders(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_agegenders_type& val);
  MDArray_T get_arr_agegenders_roi(MDFactory_T& factory, object_msgs::msg::AgeGender::_roi_type& val);
  MDArray_T get_arr_headposes(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_headposes_type& val);
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
  void copy_from_arr_faces(object_msgs::msg::ObjectInBox& val, const matlab::data::Struct& arr) {
    // faces.object
    try {
        const matlab::data::StructArray _facesobject_arr = arr["object"];
        copy_from_arr_faces_object(val.object,_facesobject_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object' is wrong type; expected a struct.");
    }
    // faces.roi
    try {
        const matlab::data::StructArray _facesroi_arr = arr["roi"];
        copy_from_arr_faces_roi(val.roi,_facesroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_faces_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr) {
    // faces.object.object_name
    try {
        const matlab::data::CharArray _faces_objectobject_name_arr = arr[0]["object_name"];
        val.object_name = _faces_objectobject_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object_name' is wrong type; expected a string.");
    }
    // faces.object.probability
    try {
        const matlab::data::TypedArray<float> _faces_objectprobability_arr = arr[0]["probability"];
        val.probability = _faces_objectprobability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_faces_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // faces.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _faces_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _faces_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // faces.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _faces_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _faces_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // faces.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _faces_roiheight_arr = arr[0]["height"];
        val.height = _faces_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // faces.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _faces_roiwidth_arr = arr[0]["width"];
        val.width = _faces_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // faces.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _faces_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _faces_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_emotions(object_msgs::msg::Emotion& val, const matlab::data::Struct& arr) {
    // emotions.emotion
    try {
        const matlab::data::CharArray _emotionsemotion_arr = arr["emotion"];
        val.emotion = _emotionsemotion_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'emotion' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'emotion' is wrong type; expected a string.");
    }
    // emotions.roi
    try {
        const matlab::data::StructArray _emotionsroi_arr = arr["roi"];
        copy_from_arr_emotions_roi(val.roi,_emotionsroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_emotions_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // emotions.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _emotions_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _emotions_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // emotions.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _emotions_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _emotions_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // emotions.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _emotions_roiheight_arr = arr[0]["height"];
        val.height = _emotions_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // emotions.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _emotions_roiwidth_arr = arr[0]["width"];
        val.width = _emotions_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // emotions.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _emotions_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _emotions_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_agegenders(object_msgs::msg::AgeGender& val, const matlab::data::Struct& arr) {
    // agegenders.age
    try {
        const matlab::data::TypedArray<float> _agegendersage_arr = arr["age"];
        val.age = _agegendersage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'age' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'age' is wrong type; expected a single.");
    }
    // agegenders.gender
    try {
        const matlab::data::CharArray _agegendersgender_arr = arr["gender"];
        val.gender = _agegendersgender_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gender' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gender' is wrong type; expected a string.");
    }
    // agegenders.gender_confidence
    try {
        const matlab::data::TypedArray<float> _agegendersgender_confidence_arr = arr["gender_confidence"];
        val.gender_confidence = _agegendersgender_confidence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gender_confidence' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gender_confidence' is wrong type; expected a single.");
    }
    // agegenders.roi
    try {
        const matlab::data::StructArray _agegendersroi_arr = arr["roi"];
        copy_from_arr_agegenders_roi(val.roi,_agegendersroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_agegenders_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // agegenders.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _agegenders_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _agegenders_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // agegenders.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _agegenders_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _agegenders_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // agegenders.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _agegenders_roiheight_arr = arr[0]["height"];
        val.height = _agegenders_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // agegenders.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _agegenders_roiwidth_arr = arr[0]["width"];
        val.width = _agegenders_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // agegenders.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _agegenders_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _agegenders_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
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
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::PersonsStamped>& msg, const matlab::data::StructArray arr) {
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
        //faces
        const matlab::data::StructArray faces_arr = arr[0]["faces"];
        for (auto _facesarr : faces_arr) {
        	object_msgs::msg::ObjectInBox _val;
        	copy_from_arr_faces(_val,_facesarr);
        	msg->faces.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'faces' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'faces' is wrong type; expected a struct.");
    }
    try {
        //emotions
        const matlab::data::StructArray emotions_arr = arr[0]["emotions"];
        for (auto _emotionsarr : emotions_arr) {
        	object_msgs::msg::Emotion _val;
        	copy_from_arr_emotions(_val,_emotionsarr);
        	msg->emotions.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'emotions' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'emotions' is wrong type; expected a struct.");
    }
    try {
        //agegenders
        const matlab::data::StructArray agegenders_arr = arr[0]["agegenders"];
        for (auto _agegendersarr : agegenders_arr) {
        	object_msgs::msg::AgeGender _val;
        	copy_from_arr_agegenders(_val,_agegendersarr);
        	msg->agegenders.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'agegenders' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'agegenders' is wrong type; expected a struct.");
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
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_header_type& val) {
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
  MDArray_T get_arr_faces(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_faces_type& val) {
    auto _facesoutArray = factory.createStructArray({1,val.size()},{"object","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // faces.object
    _facesoutArray[idx]["object"] = get_arr_faces_object(factory, val[idx].object);
    // faces.roi
    _facesoutArray[idx]["roi"] = get_arr_faces_roi(factory, val[idx].roi);
    }
    return _facesoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_faces_object(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_object_type& val) {
    auto _faces_objectoutArray = factory.createStructArray({1,1},{"object_name","probability"});
    // faces.object.object_name
    _faces_objectoutArray[0]["object_name"] = factory.createCharArray(val.object_name);
    // faces.object.probability
    _faces_objectoutArray[0]["probability"] = factory.createScalar(val.probability);
    return _faces_objectoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_faces_roi(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_roi_type& val) {
    auto _faces_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // faces.roi.x_offset
    _faces_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // faces.roi.y_offset
    _faces_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // faces.roi.height
    _faces_roioutArray[0]["height"] = factory.createScalar(val.height);
    // faces.roi.width
    _faces_roioutArray[0]["width"] = factory.createScalar(val.width);
    // faces.roi.do_rectify
    _faces_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _faces_roioutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_emotions(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_emotions_type& val) {
    auto _emotionsoutArray = factory.createStructArray({1,val.size()},{"emotion","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // emotions.emotion
    	_emotionsoutArray[idx]["emotion"] = factory.createCharArray(val[idx].emotion);
    // emotions.roi
    _emotionsoutArray[idx]["roi"] = get_arr_emotions_roi(factory, val[idx].roi);
    }
    return _emotionsoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_emotions_roi(MDFactory_T& factory, object_msgs::msg::Emotion::_roi_type& val) {
    auto _emotions_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // emotions.roi.x_offset
    _emotions_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // emotions.roi.y_offset
    _emotions_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // emotions.roi.height
    _emotions_roioutArray[0]["height"] = factory.createScalar(val.height);
    // emotions.roi.width
    _emotions_roioutArray[0]["width"] = factory.createScalar(val.width);
    // emotions.roi.do_rectify
    _emotions_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _emotions_roioutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_agegenders(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_agegenders_type& val) {
    auto _agegendersoutArray = factory.createStructArray({1,val.size()},{"age","gender","gender_confidence","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // agegenders.age
    	_agegendersoutArray[idx]["age"] = factory.createScalar(val[idx].age);
    // agegenders.gender
    	_agegendersoutArray[idx]["gender"] = factory.createCharArray(val[idx].gender);
    // agegenders.gender_confidence
    	_agegendersoutArray[idx]["gender_confidence"] = factory.createScalar(val[idx].gender_confidence);
    // agegenders.roi
    _agegendersoutArray[idx]["roi"] = get_arr_agegenders_roi(factory, val[idx].roi);
    }
    return _agegendersoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_agegenders_roi(MDFactory_T& factory, object_msgs::msg::AgeGender::_roi_type& val) {
    auto _agegenders_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // agegenders.roi.x_offset
    _agegenders_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // agegenders.roi.y_offset
    _agegenders_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // agegenders.roi.height
    _agegenders_roioutArray[0]["height"] = factory.createScalar(val.height);
    // agegenders.roi.width
    _agegenders_roioutArray[0]["width"] = factory.createScalar(val.width);
    // agegenders.roi.do_rectify
    _agegenders_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _agegenders_roioutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_headposes(MDFactory_T& factory, object_msgs::msg::PersonsStamped::_headposes_type& val) {
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
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::PersonsStamped>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","faces","emotions","agegenders","headposes"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // faces
    outArray[0]["faces"] = get_arr_faces(factory, msg->faces);
    // emotions
    outArray[0]["emotions"] = get_arr_emotions(factory, msg->emotions);
    // agegenders
    outArray[0]["agegenders"] = get_arr_agegenders(factory, msg->agegenders);
    // headposes
    outArray[0]["headposes"] = get_arr_headposes(factory, msg->headposes);
    return outArray;
  }
} //namespace PersonsStamped
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER