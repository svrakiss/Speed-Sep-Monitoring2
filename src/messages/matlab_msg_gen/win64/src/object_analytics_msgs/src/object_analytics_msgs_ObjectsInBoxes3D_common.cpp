// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_analytics_msgs/ObjectsInBoxes3D
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
#include "object_analytics_msgs/msg/objects_in_boxes3_d.hpp"
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
namespace ObjectsInBoxes3D {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_in_boxes(object_analytics_msgs::msg::ObjectInBox3D& val, const matlab::data::Struct& arr);
  void copy_from_arr_objects_in_boxes_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_in_boxes_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_in_boxes_min(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_in_boxes_max(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_analytics_msgs::msg::ObjectsInBoxes3D::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_objects_in_boxes(MDFactory_T& factory, object_analytics_msgs::msg::ObjectsInBoxes3D::_objects_in_boxes_type& val);
  MDArray_T get_arr_objects_in_boxes_object(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_object_type& val);
  MDArray_T get_arr_objects_in_boxes_roi(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_roi_type& val);
  MDArray_T get_arr_objects_in_boxes_min(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_min_type& val);
  MDArray_T get_arr_objects_in_boxes_max(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_max_type& val);
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
  void copy_from_arr_objects_in_boxes(object_analytics_msgs::msg::ObjectInBox3D& val, const matlab::data::Struct& arr) {
    // objects_in_boxes.object
    try {
        const matlab::data::StructArray _objects_in_boxesobject_arr = arr["object"];
        copy_from_arr_objects_in_boxes_object(val.object,_objects_in_boxesobject_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object' is wrong type; expected a struct.");
    }
    // objects_in_boxes.roi
    try {
        const matlab::data::StructArray _objects_in_boxesroi_arr = arr["roi"];
        copy_from_arr_objects_in_boxes_roi(val.roi,_objects_in_boxesroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
    // objects_in_boxes.min
    try {
        const matlab::data::StructArray _objects_in_boxesmin_arr = arr["min"];
        copy_from_arr_objects_in_boxes_min(val.min,_objects_in_boxesmin_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'min' is wrong type; expected a struct.");
    }
    // objects_in_boxes.max
    try {
        const matlab::data::StructArray _objects_in_boxesmax_arr = arr["max"];
        copy_from_arr_objects_in_boxes_max(val.max,_objects_in_boxesmax_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'max' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_in_boxes_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr) {
    // objects_in_boxes.object.object_name
    try {
        const matlab::data::CharArray _objects_in_boxes_objectobject_name_arr = arr[0]["object_name"];
        val.object_name = _objects_in_boxes_objectobject_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object_name' is wrong type; expected a string.");
    }
    // objects_in_boxes.object.probability
    try {
        const matlab::data::TypedArray<float> _objects_in_boxes_objectprobability_arr = arr[0]["probability"];
        val.probability = _objects_in_boxes_objectprobability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_in_boxes_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // objects_in_boxes.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _objects_in_boxes_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _objects_in_boxes_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // objects_in_boxes.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _objects_in_boxes_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _objects_in_boxes_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // objects_in_boxes.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _objects_in_boxes_roiheight_arr = arr[0]["height"];
        val.height = _objects_in_boxes_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // objects_in_boxes.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _objects_in_boxes_roiwidth_arr = arr[0]["width"];
        val.width = _objects_in_boxes_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // objects_in_boxes.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _objects_in_boxes_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _objects_in_boxes_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_in_boxes_min(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr) {
    // objects_in_boxes.min.x
    try {
        const matlab::data::TypedArray<float> _objects_in_boxes_minx_arr = arr[0]["x"];
        val.x = _objects_in_boxes_minx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    // objects_in_boxes.min.y
    try {
        const matlab::data::TypedArray<float> _objects_in_boxes_miny_arr = arr[0]["y"];
        val.y = _objects_in_boxes_miny_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    // objects_in_boxes.min.z
    try {
        const matlab::data::TypedArray<float> _objects_in_boxes_minz_arr = arr[0]["z"];
        val.z = _objects_in_boxes_minz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_in_boxes_max(geometry_msgs::msg::Point32& val, const matlab::data::StructArray& arr) {
    // objects_in_boxes.max.x
    try {
        const matlab::data::TypedArray<float> _objects_in_boxes_maxx_arr = arr[0]["x"];
        val.x = _objects_in_boxes_maxx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    // objects_in_boxes.max.y
    try {
        const matlab::data::TypedArray<float> _objects_in_boxes_maxy_arr = arr[0]["y"];
        val.y = _objects_in_boxes_maxy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    // objects_in_boxes.max.z
    try {
        const matlab::data::TypedArray<float> _objects_in_boxes_maxz_arr = arr[0]["z"];
        val.z = _objects_in_boxes_maxz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_analytics_msgs::msg::ObjectsInBoxes3D>& msg, const matlab::data::StructArray arr) {
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
        //objects_in_boxes
        const matlab::data::StructArray objects_in_boxes_arr = arr[0]["objects_in_boxes"];
        for (auto _objects_in_boxesarr : objects_in_boxes_arr) {
        	object_analytics_msgs::msg::ObjectInBox3D _val;
        	copy_from_arr_objects_in_boxes(_val,_objects_in_boxesarr);
        	msg->objects_in_boxes.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'objects_in_boxes' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'objects_in_boxes' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header(MDFactory_T& factory, object_analytics_msgs::msg::ObjectsInBoxes3D::_header_type& val) {
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
  MDArray_T get_arr_objects_in_boxes(MDFactory_T& factory, object_analytics_msgs::msg::ObjectsInBoxes3D::_objects_in_boxes_type& val) {
    auto _objects_in_boxesoutArray = factory.createStructArray({1,val.size()},{"object","roi","min","max"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // objects_in_boxes.object
    _objects_in_boxesoutArray[idx]["object"] = get_arr_objects_in_boxes_object(factory, val[idx].object);
    // objects_in_boxes.roi
    _objects_in_boxesoutArray[idx]["roi"] = get_arr_objects_in_boxes_roi(factory, val[idx].roi);
    // objects_in_boxes.min
    _objects_in_boxesoutArray[idx]["min"] = get_arr_objects_in_boxes_min(factory, val[idx].min);
    // objects_in_boxes.max
    _objects_in_boxesoutArray[idx]["max"] = get_arr_objects_in_boxes_max(factory, val[idx].max);
    }
    return _objects_in_boxesoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_in_boxes_object(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_object_type& val) {
    auto _objects_in_boxes_objectoutArray = factory.createStructArray({1,1},{"object_name","probability"});
    // objects_in_boxes.object.object_name
    _objects_in_boxes_objectoutArray[0]["object_name"] = factory.createCharArray(val.object_name);
    // objects_in_boxes.object.probability
    _objects_in_boxes_objectoutArray[0]["probability"] = factory.createScalar(val.probability);
    return _objects_in_boxes_objectoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_in_boxes_roi(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_roi_type& val) {
    auto _objects_in_boxes_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // objects_in_boxes.roi.x_offset
    _objects_in_boxes_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // objects_in_boxes.roi.y_offset
    _objects_in_boxes_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // objects_in_boxes.roi.height
    _objects_in_boxes_roioutArray[0]["height"] = factory.createScalar(val.height);
    // objects_in_boxes.roi.width
    _objects_in_boxes_roioutArray[0]["width"] = factory.createScalar(val.width);
    // objects_in_boxes.roi.do_rectify
    _objects_in_boxes_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _objects_in_boxes_roioutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_in_boxes_min(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_min_type& val) {
    auto _objects_in_boxes_minoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // objects_in_boxes.min.x
    _objects_in_boxes_minoutArray[0]["x"] = factory.createScalar(val.x);
    // objects_in_boxes.min.y
    _objects_in_boxes_minoutArray[0]["y"] = factory.createScalar(val.y);
    // objects_in_boxes.min.z
    _objects_in_boxes_minoutArray[0]["z"] = factory.createScalar(val.z);
    return _objects_in_boxes_minoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_in_boxes_max(MDFactory_T& factory, object_analytics_msgs::msg::ObjectInBox3D::_max_type& val) {
    auto _objects_in_boxes_maxoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // objects_in_boxes.max.x
    _objects_in_boxes_maxoutArray[0]["x"] = factory.createScalar(val.x);
    // objects_in_boxes.max.y
    _objects_in_boxes_maxoutArray[0]["y"] = factory.createScalar(val.y);
    // objects_in_boxes.max.z
    _objects_in_boxes_maxoutArray[0]["z"] = factory.createScalar(val.z);
    return _objects_in_boxes_maxoutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_ANALYTICS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_analytics_msgs::msg::ObjectsInBoxes3D>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","objects_in_boxes"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // objects_in_boxes
    outArray[0]["objects_in_boxes"] = get_arr_objects_in_boxes(factory, msg->objects_in_boxes);
    return outArray;
  }
} //namespace ObjectsInBoxes3D
} //namespace matlabhelper
} //namespace object_analytics_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER