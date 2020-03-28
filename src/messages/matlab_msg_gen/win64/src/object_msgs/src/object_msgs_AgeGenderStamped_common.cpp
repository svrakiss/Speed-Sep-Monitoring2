// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/AgeGenderStamped
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
#include "object_msgs/msg/age_gender_stamped.hpp"
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
namespace AgeGenderStamped {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects(object_msgs::msg::AgeGender& val, const matlab::data::Struct& arr);
  void copy_from_arr_objects_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::AgeGenderStamped::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_objects(MDFactory_T& factory, object_msgs::msg::AgeGenderStamped::_objects_type& val);
  MDArray_T get_arr_objects_roi(MDFactory_T& factory, object_msgs::msg::AgeGender::_roi_type& val);
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
  void copy_from_arr_objects(object_msgs::msg::AgeGender& val, const matlab::data::Struct& arr) {
    // objects.age
    try {
        const matlab::data::TypedArray<float> _objectsage_arr = arr["age"];
        val.age = _objectsage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'age' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'age' is wrong type; expected a single.");
    }
    // objects.gender
    try {
        const matlab::data::CharArray _objectsgender_arr = arr["gender"];
        val.gender = _objectsgender_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gender' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gender' is wrong type; expected a string.");
    }
    // objects.gender_confidence
    try {
        const matlab::data::TypedArray<float> _objectsgender_confidence_arr = arr["gender_confidence"];
        val.gender_confidence = _objectsgender_confidence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gender_confidence' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gender_confidence' is wrong type; expected a single.");
    }
    // objects.roi
    try {
        const matlab::data::StructArray _objectsroi_arr = arr["roi"];
        copy_from_arr_objects_roi(val.roi,_objectsroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // objects.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _objects_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _objects_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // objects.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _objects_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _objects_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // objects.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _objects_roiheight_arr = arr[0]["height"];
        val.height = _objects_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // objects.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _objects_roiwidth_arr = arr[0]["width"];
        val.width = _objects_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // objects.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _objects_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _objects_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::AgeGenderStamped>& msg, const matlab::data::StructArray arr) {
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
        //objects
        const matlab::data::StructArray objects_arr = arr[0]["objects"];
        for (auto _objectsarr : objects_arr) {
        	object_msgs::msg::AgeGender _val;
        	copy_from_arr_objects(_val,_objectsarr);
        	msg->objects.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'objects' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'objects' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::AgeGenderStamped::_header_type& val) {
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
  MDArray_T get_arr_objects(MDFactory_T& factory, object_msgs::msg::AgeGenderStamped::_objects_type& val) {
    auto _objectsoutArray = factory.createStructArray({1,val.size()},{"age","gender","gender_confidence","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // objects.age
    	_objectsoutArray[idx]["age"] = factory.createScalar(val[idx].age);
    // objects.gender
    	_objectsoutArray[idx]["gender"] = factory.createCharArray(val[idx].gender);
    // objects.gender_confidence
    	_objectsoutArray[idx]["gender_confidence"] = factory.createScalar(val[idx].gender_confidence);
    // objects.roi
    _objectsoutArray[idx]["roi"] = get_arr_objects_roi(factory, val[idx].roi);
    }
    return _objectsoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_roi(MDFactory_T& factory, object_msgs::msg::AgeGender::_roi_type& val) {
    auto _objects_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // objects.roi.x_offset
    _objects_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // objects.roi.y_offset
    _objects_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // objects.roi.height
    _objects_roioutArray[0]["height"] = factory.createScalar(val.height);
    // objects.roi.width
    _objects_roioutArray[0]["width"] = factory.createScalar(val.width);
    // objects.roi.do_rectify
    _objects_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _objects_roioutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::AgeGenderStamped>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","objects"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // objects
    outArray[0]["objects"] = get_arr_objects(factory, msg->objects);
    return outArray;
  }
} //namespace AgeGenderStamped
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER