// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/ObjectsInMasks
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
#include "object_msgs/msg/objects_in_masks.hpp"
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
namespace ObjectsInMasks {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_vector(object_msgs::msg::ObjectInMask& val, const matlab::data::Struct& arr);
  void copy_from_arr_objects_vector_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::ObjectsInMasks::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_objects_vector(MDFactory_T& factory, object_msgs::msg::ObjectsInMasks::_objects_vector_type& val);
  MDArray_T get_arr_objects_vector_roi(MDFactory_T& factory, object_msgs::msg::ObjectInMask::_roi_type& val);
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
  void copy_from_arr_objects_vector(object_msgs::msg::ObjectInMask& val, const matlab::data::Struct& arr) {
    // objects_vector.object_name
    try {
        const matlab::data::CharArray _objects_vectorobject_name_arr = arr["object_name"];
        val.object_name = _objects_vectorobject_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object_name' is wrong type; expected a string.");
    }
    // objects_vector.probability
    try {
        const matlab::data::TypedArray<float> _objects_vectorprobability_arr = arr["probability"];
        val.probability = _objects_vectorprobability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
    }
    // objects_vector.roi
    try {
        const matlab::data::StructArray _objects_vectorroi_arr = arr["roi"];
        copy_from_arr_objects_vector_roi(val.roi,_objects_vectorroi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
    // objects_vector.mask_array
    try {
        const matlab::data::TypedArray<float> _objects_vectormask_array_arr = arr["mask_array"];
        size_t nelem = _objects_vectormask_array_arr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	val.mask_array.push_back(_objects_vectormask_array_arr[idx]);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mask_array' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mask_array' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_vector_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // objects_vector.roi.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _objects_vector_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _objects_vector_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // objects_vector.roi.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _objects_vector_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _objects_vector_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // objects_vector.roi.height
    try {
        const matlab::data::TypedArray<uint32_t> _objects_vector_roiheight_arr = arr[0]["height"];
        val.height = _objects_vector_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // objects_vector.roi.width
    try {
        const matlab::data::TypedArray<uint32_t> _objects_vector_roiwidth_arr = arr[0]["width"];
        val.width = _objects_vector_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // objects_vector.roi.do_rectify
    try {
        const matlab::data::TypedArray<bool> _objects_vector_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _objects_vector_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::ObjectsInMasks>& msg, const matlab::data::StructArray arr) {
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
        //objects_vector
        const matlab::data::StructArray objects_vector_arr = arr[0]["objects_vector"];
        for (auto _objects_vectorarr : objects_vector_arr) {
        	object_msgs::msg::ObjectInMask _val;
        	copy_from_arr_objects_vector(_val,_objects_vectorarr);
        	msg->objects_vector.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'objects_vector' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'objects_vector' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::ObjectsInMasks::_header_type& val) {
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
  MDArray_T get_arr_objects_vector(MDFactory_T& factory, object_msgs::msg::ObjectsInMasks::_objects_vector_type& val) {
    auto _objects_vectoroutArray = factory.createStructArray({1,val.size()},{"object_name","probability","roi","mask_array"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // objects_vector.object_name
    	_objects_vectoroutArray[idx]["object_name"] = factory.createCharArray(val[idx].object_name);
    // objects_vector.probability
    	_objects_vectoroutArray[idx]["probability"] = factory.createScalar(val[idx].probability);
    // objects_vector.roi
    _objects_vectoroutArray[idx]["roi"] = get_arr_objects_vector_roi(factory, val[idx].roi);
    // objects_vector.mask_array
    	_objects_vectoroutArray[idx]["mask_array"] = factory.createArray<object_msgs::msg::ObjectInMask::_mask_array_type::iterator, float>({1,val[idx].mask_array.size()},val[idx].mask_array.begin(), val[idx].mask_array.end());
    }
    return _objects_vectoroutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_vector_roi(MDFactory_T& factory, object_msgs::msg::ObjectInMask::_roi_type& val) {
    auto _objects_vector_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // objects_vector.roi.x_offset
    _objects_vector_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // objects_vector.roi.y_offset
    _objects_vector_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // objects_vector.roi.height
    _objects_vector_roioutArray[0]["height"] = factory.createScalar(val.height);
    // objects_vector.roi.width
    _objects_vector_roioutArray[0]["width"] = factory.createScalar(val.width);
    // objects_vector.roi.do_rectify
    _objects_vector_roioutArray[0]["do_rectify"] = factory.createScalar(val.do_rectify);
    return _objects_vector_roioutArray;
  }
  //----------------------------------------------------------------------------
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::ObjectsInMasks>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","objects_vector"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // objects_vector
    outArray[0]["objects_vector"] = get_arr_objects_vector(factory, msg->objects_vector);
    return outArray;
  }
} //namespace ObjectsInMasks
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER