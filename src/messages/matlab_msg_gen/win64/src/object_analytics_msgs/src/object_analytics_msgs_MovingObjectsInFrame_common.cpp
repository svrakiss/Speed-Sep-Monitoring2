// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_analytics_msgs/MovingObjectsInFrame
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
#include "object_analytics_msgs/msg/moving_objects_in_frame.hpp"
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
namespace MovingObjectsInFrame {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects(object_analytics_msgs::msg::MovingObject& val, const matlab::data::Struct& arr);
  void copy_from_arr_objects_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_min(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_max(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_velocity(geometry_msgs::msg::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_analytics_msgs::msg::MovingObjectsInFrame::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_objects(MDFactory_T& factory, object_analytics_msgs::msg::MovingObjectsInFrame::_objects_type& val);
  MDArray_T get_arr_objects_roi(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_roi_type& val);
  MDArray_T get_arr_objects_min(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_min_type& val);
  MDArray_T get_arr_objects_max(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_max_type& val);
  MDArray_T get_arr_objects_velocity(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_velocity_type& val);
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
  void copy_from_arr_objects(object_analytics_msgs::msg::MovingObject& val, const matlab::data::Struct& arr) {
    // objects.id
    try {
        const matlab::data::TypedArray<int32_t> _objectsid_arr = arr["id"];
        val.id = _objectsid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    // objects.type
    try {
        const matlab::data::CharArray _objectstype_arr = arr["type"];
        val.type = _objectstype_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a string.");
    }
    // objects.probability
    try {
        const matlab::data::TypedArray<float> _objectsprobability_arr = arr["probability"];
        val.probability = _objectsprobability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
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
    // objects.min
    try {
        const matlab::data::StructArray _objectsmin_arr = arr["min"];
        copy_from_arr_objects_min(val.min,_objectsmin_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'min' is wrong type; expected a struct.");
    }
    // objects.max
    try {
        const matlab::data::StructArray _objectsmax_arr = arr["max"];
        copy_from_arr_objects_max(val.max,_objectsmax_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'max' is wrong type; expected a struct.");
    }
    // objects.velocity
    try {
        const matlab::data::StructArray _objectsvelocity_arr = arr["velocity"];
        copy_from_arr_objects_velocity(val.velocity,_objectsvelocity_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a struct.");
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
  void copy_from_arr_objects_min(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr) {
    // objects.min.x
    try {
        const matlab::data::TypedArray<float> _objects_minx_arr = arr[0]["x"];
        val.x = _objects_minx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    // objects.min.y
    try {
        const matlab::data::TypedArray<float> _objects_miny_arr = arr[0]["y"];
        val.y = _objects_miny_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    // objects.min.z
    try {
        const matlab::data::TypedArray<float> _objects_minz_arr = arr[0]["z"];
        val.z = _objects_minz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_max(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr) {
    // objects.max.x
    try {
        const matlab::data::TypedArray<float> _objects_maxx_arr = arr[0]["x"];
        val.x = _objects_maxx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    // objects.max.y
    try {
        const matlab::data::TypedArray<float> _objects_maxy_arr = arr[0]["y"];
        val.y = _objects_maxy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    // objects.max.z
    try {
        const matlab::data::TypedArray<float> _objects_maxz_arr = arr[0]["z"];
        val.z = _objects_maxz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_velocity(geometry_msgs::msg::Point& val, const matlab::data::StructArray& arr) {
    // objects.velocity.x
    try {
        const matlab::data::TypedArray<double> _objects_velocityx_arr = arr[0]["x"];
        val.x = _objects_velocityx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // objects.velocity.y
    try {
        const matlab::data::TypedArray<double> _objects_velocityy_arr = arr[0]["y"];
        val.y = _objects_velocityy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // objects.velocity.z
    try {
        const matlab::data::TypedArray<double> _objects_velocityz_arr = arr[0]["z"];
        val.z = _objects_velocityz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_analytics_msgs::msg::MovingObjectsInFrame>& msg, const matlab::data::StructArray arr) {
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
        	object_analytics_msgs::msg::MovingObject _val;
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
  MDArray_T get_arr_header(MDFactory_T& factory, object_analytics_msgs::msg::MovingObjectsInFrame::_header_type& val) {
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
  MDArray_T get_arr_objects(MDFactory_T& factory, object_analytics_msgs::msg::MovingObjectsInFrame::_objects_type& val) {
    auto _objectsoutArray = factory.createStructArray({1,val.size()},{"id","type","probability","roi","min","max","velocity"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // objects.id
    	_objectsoutArray[idx]["id"] = factory.createScalar(val[idx].id);
    // objects.type
    	_objectsoutArray[idx]["type"] = factory.createCharArray(val[idx].type);
    // objects.probability
    	_objectsoutArray[idx]["probability"] = factory.createScalar(val[idx].probability);
    // objects.roi
    _objectsoutArray[idx]["roi"] = get_arr_objects_roi(factory, val[idx].roi);
    // objects.min
    _objectsoutArray[idx]["min"] = get_arr_objects_min(factory, val[idx].min);
    // objects.max
    _objectsoutArray[idx]["max"] = get_arr_objects_max(factory, val[idx].max);
    // objects.velocity
    _objectsoutArray[idx]["velocity"] = get_arr_objects_velocity(factory, val[idx].velocity);
    }
    return _objectsoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_roi(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_roi_type& val) {
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
  MDArray_T get_arr_objects_min(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_min_type& val) {
    auto _objects_minoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // objects.min.x
    _objects_minoutArray[0]["x"] = factory.createScalar(val.x);
    // objects.min.y
    _objects_minoutArray[0]["y"] = factory.createScalar(val.y);
    // objects.min.z
    _objects_minoutArray[0]["z"] = factory.createScalar(val.z);
    return _objects_minoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_max(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_max_type& val) {
    auto _objects_maxoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // objects.max.x
    _objects_maxoutArray[0]["x"] = factory.createScalar(val.x);
    // objects.max.y
    _objects_maxoutArray[0]["y"] = factory.createScalar(val.y);
    // objects.max.z
    _objects_maxoutArray[0]["z"] = factory.createScalar(val.z);
    return _objects_maxoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_velocity(MDFactory_T& factory, object_analytics_msgs::msg::MovingObject::_velocity_type& val) {
    auto _objects_velocityoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // objects.velocity.x
    _objects_velocityoutArray[0]["x"] = factory.createScalar(val.x);
    // objects.velocity.y
    _objects_velocityoutArray[0]["y"] = factory.createScalar(val.y);
    // objects.velocity.z
    _objects_velocityoutArray[0]["z"] = factory.createScalar(val.z);
    return _objects_velocityoutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_analytics_msgs::msg::MovingObjectsInFrame>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","objects"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // objects
    outArray[0]["objects"] = get_arr_objects(factory, msg->objects);
    return outArray;
  }
} //namespace MovingObjectsInFrame
} //namespace matlabhelper
} //namespace object_analytics_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER