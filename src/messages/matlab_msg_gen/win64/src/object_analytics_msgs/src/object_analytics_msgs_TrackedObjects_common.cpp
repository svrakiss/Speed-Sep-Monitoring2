// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_analytics_msgs/TrackedObjects
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
#include "object_analytics_msgs/msg/tracked_objects.hpp"
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
namespace TrackedObjects {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_tracked_objects(object_analytics_msgs::msg::TrackedObject& val, const matlab::data::Struct& arr);
  void copy_from_arr_tracked_objects_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr);
  void copy_from_arr_tracked_objects_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObjects::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_tracked_objects(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObjects::_tracked_objects_type& val);
  MDArray_T get_arr_tracked_objects_object(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObject::_object_type& val);
  MDArray_T get_arr_tracked_objects_roi(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObject::_roi_type& val);
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
  void copy_from_arr_tracked_objects(object_analytics_msgs::msg::TrackedObject& val, const matlab::data::Struct& arr) {
    // tracked_objects.id
    try {
        const matlab::data::TypedArray<int32_t> _tracked_objectsid_arr = arr["id"];
        val.id = _tracked_objectsid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    // tracked_objects.object
    try {
        const matlab::data::StructArray _tracked_objectsobject_arr = arr["object"];
        copy_from_arr_tracked_objects_object(val.object,_tracked_objectsobject_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object' is wrong type; expected a struct.");
    }
    // tracked_objects.roi
    try {
        const matlab::data::StructArray _tracked_objectsroi_arr = arr["roi"];
        copy_from_arr_tracked_objects_roi(val.roi,_tracked_objectsroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_tracked_objects_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr) {
    // tracked_objects.object.object_name
    try {
        const matlab::data::CharArray _tracked_objects_objectobject_name_arr = arr[0]["object_name"];
        val.object_name = _tracked_objects_objectobject_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object_name' is wrong type; expected a string.");
    }
    // tracked_objects.object.probability
    try {
        const matlab::data::TypedArray<float> _tracked_objects_objectprobability_arr = arr[0]["probability"];
        val.probability = _tracked_objects_objectprobability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_tracked_objects_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // tracked_objects.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _tracked_objects_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _tracked_objects_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // tracked_objects.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _tracked_objects_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _tracked_objects_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // tracked_objects.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _tracked_objects_roiheight_arr = arr[0]["height"];
        val.height = _tracked_objects_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // tracked_objects.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _tracked_objects_roiwidth_arr = arr[0]["width"];
        val.width = _tracked_objects_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // tracked_objects.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _tracked_objects_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _tracked_objects_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_analytics_msgs::msg::TrackedObjects>& msg, const matlab::data::StructArray arr) {
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
        //tracked_objects
        const matlab::data::StructArray tracked_objects_arr = arr[0]["tracked_objects"];
        for (auto _tracked_objectsarr : tracked_objects_arr) {
        	object_analytics_msgs::msg::TrackedObject _val;
        	copy_from_arr_tracked_objects(_val,_tracked_objectsarr);
        	msg->tracked_objects.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tracked_objects' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'tracked_objects' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObjects::_header_type& val) {
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
  MDArray_T get_arr_tracked_objects(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObjects::_tracked_objects_type& val) {
    auto _tracked_objectsoutArray = factory.createStructArray({1,val.size()},{"id","object","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // tracked_objects.id
    	_tracked_objectsoutArray[idx]["id"] = factory.createScalar(val[idx].id);
    // tracked_objects.object
    _tracked_objectsoutArray[idx]["object"] = get_arr_tracked_objects_object(factory, val[idx].object);
    // tracked_objects.roi
    _tracked_objectsoutArray[idx]["roi"] = get_arr_tracked_objects_roi(factory, val[idx].roi);
    }
    return _tracked_objectsoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_tracked_objects_object(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObject::_object_type& val) {
    auto _tracked_objects_objectoutArray = factory.createStructArray({1,1},{"object_name","probability"});
    // tracked_objects.object.object_name
    _tracked_objects_objectoutArray[0]["object_name"] = factory.createCharArray(val.object_name);
    // tracked_objects.object.probability
    _tracked_objects_objectoutArray[0]["probability"] = factory.createScalar(val.probability);
    return _tracked_objects_objectoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_tracked_objects_roi(MDFactory_T& factory, object_analytics_msgs::msg::TrackedObject::_roi_type& val) {
    auto _tracked_objects_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // tracked_objects.roi.x_offset
    _tracked_objects_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // tracked_objects.roi.y_offset
    _tracked_objects_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // tracked_objects.roi.height
    _tracked_objects_roioutArray[0]["height"] = factory.createScalar(val.height);
    // tracked_objects.roi.width
    _tracked_objects_roioutArray[0]["width"] = factory.createScalar(val.width);
    // tracked_objects.roi.do_rectify
    _tracked_objects_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _tracked_objects_roioutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_analytics_msgs::msg::TrackedObjects>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","tracked_objects"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // tracked_objects
    outArray[0]["tracked_objects"] = get_arr_tracked_objects(factory, msg->tracked_objects);
    return outArray;
  }
} //namespace TrackedObjects
} //namespace matlabhelper
} //namespace object_analytics_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER