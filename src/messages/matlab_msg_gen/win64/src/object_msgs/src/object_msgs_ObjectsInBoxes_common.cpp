// Copyright 2019 The MathWorks, Inc.
// Common copy functions for object_msgs/ObjectsInBoxes
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
#include "object_msgs/msg/objects_in_boxes.hpp"
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
namespace ObjectsInBoxes {
  void copy_from_arr_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_image(sensor_msgs::msg::Image& val, const matlab::data::StructArray& arr);
  void copy_from_arr_image_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr);
  void copy_from_arr_image_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_vector(object_msgs::msg::ObjectInBox& val, const matlab::data::Struct& arr);
  void copy_from_arr_objects_vector_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr);
  void copy_from_arr_objects_vector_roi(sensor_msgs::msg::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::ObjectsInBoxes::_header_type& val);
  MDArray_T get_arr_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_image(MDFactory_T& factory, object_msgs::msg::ObjectsInBoxes::_image_type& val);
  MDArray_T get_arr_image_header(MDFactory_T& factory, sensor_msgs::msg::Image::_header_type& val);
  MDArray_T get_arr_image_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val);
  MDArray_T get_arr_objects_vector(MDFactory_T& factory, object_msgs::msg::ObjectsInBoxes::_objects_vector_type& val);
  MDArray_T get_arr_objects_vector_object(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_object_type& val);
  MDArray_T get_arr_objects_vector_roi(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_roi_type& val);
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
  void copy_from_arr_image(sensor_msgs::msg::Image& val, const matlab::data::StructArray& arr) {
    // image.header
    try {
        const matlab::data::StructArray _imageheader_arr = arr[0]["header"];
        copy_from_arr_image_header(val.header,_imageheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // image.height
    try {
        const matlab::data::TypedArray<uint32_t> _imageheight_arr = arr[0]["height"];
        val.height = _imageheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // image.width
    try {
        const matlab::data::TypedArray<uint32_t> _imagewidth_arr = arr[0]["width"];
        val.width = _imagewidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // image.encoding
    try {
        const matlab::data::CharArray _imageencoding_arr = arr[0]["encoding"];
        val.encoding = _imageencoding_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'encoding' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'encoding' is wrong type; expected a string.");
    }
    // image.is_bigendian
    try {
        const matlab::data::TypedArray<uint8_t> _imageis_bigendian_arr = arr[0]["is_bigendian"];
        val.is_bigendian = _imageis_bigendian_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_bigendian' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'is_bigendian' is wrong type; expected a uint8.");
    }
    // image.step
    try {
        const matlab::data::TypedArray<uint32_t> _imagestep_arr = arr[0]["step"];
        val.step = _imagestep_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'step' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'step' is wrong type; expected a uint32.");
    }
    // image.data
    try {
        const matlab::data::TypedArray<uint8_t> _imagedata_arr = arr[0]["data"];
        size_t nelem = _imagedata_arr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	val.data.push_back(_imagedata_arr[idx]);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'data' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_image_header(std_msgs::msg::Header& val, const matlab::data::StructArray& arr) {
    // image.header.stamp
    try {
        const matlab::data::StructArray _image_headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_image_header_stamp(val.stamp,_image_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // image.header.frame_id
    try {
        const matlab::data::CharArray _image_headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _image_headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_image_header_stamp(builtin_interfaces::msg::Time& val, const matlab::data::StructArray& arr) {
    // image.header.stamp.sec
    try {
        const matlab::data::TypedArray<int32_t> _image_header_stampsec_arr = arr[0]["sec"];
        val.sec = _image_header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a int32.");
    }
    // image.header.stamp.nanosec
    try {
        const matlab::data::TypedArray<uint32_t> _image_header_stampnanosec_arr = arr[0]["nanosec"];
        val.nanosec = _image_header_stampnanosec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nanosec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nanosec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_vector(object_msgs::msg::ObjectInBox& val, const matlab::data::Struct& arr) {
    // objects_vector.object
    try {
        const matlab::data::StructArray _objects_vectorobject_arr = arr["object"];
        copy_from_arr_objects_vector_object(val.object,_objects_vectorobject_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object' is wrong type; expected a struct.");
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
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_objects_vector_object(object_msgs::msg::Object& val, const matlab::data::StructArray& arr) {
    // objects_vector.object.object_name
    try {
        const matlab::data::CharArray _objects_vector_objectobject_name_arr = arr[0]["object_name"];
        val.object_name = _objects_vector_objectobject_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object_name' is wrong type; expected a string.");
    }
    // objects_vector.object.probability
    try {
        const matlab::data::TypedArray<float> _objects_vector_objectprobability_arr = arr[0]["probability"];
        val.probability = _objects_vector_objectprobability_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'probability' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'probability' is wrong type; expected a single.");
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
  OBJECT_MSGS_EXPORT void copy_from_arr(std::unique_ptr<object_msgs::msg::ObjectsInBoxes>& msg, const matlab::data::StructArray arr) {
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
        //image
        const matlab::data::StructArray image_arr = arr[0]["image"];
        copy_from_arr_image(msg->image,image_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'image' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'image' is wrong type; expected a struct.");
    }
    try {
        //objects_vector
        const matlab::data::StructArray objects_vector_arr = arr[0]["objects_vector"];
        for (auto _objects_vectorarr : objects_vector_arr) {
        	object_msgs::msg::ObjectInBox _val;
        	copy_from_arr_objects_vector(_val,_objects_vectorarr);
        	msg->objects_vector.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'objects_vector' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'objects_vector' is wrong type; expected a struct.");
    }
    try {
        //inference_time_ms
        const matlab::data::TypedArray<float> inference_time_ms_arr = arr[0]["inference_time_ms"];
        msg->inference_time_ms = inference_time_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'inference_time_ms' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'inference_time_ms' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_header(MDFactory_T& factory, object_msgs::msg::ObjectsInBoxes::_header_type& val) {
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
  MDArray_T get_arr_image(MDFactory_T& factory, object_msgs::msg::ObjectsInBoxes::_image_type& val) {
    auto _imageoutArray = factory.createStructArray({1,1},{"header","height","width","encoding","is_bigendian","step","data"});
    // image.header
    _imageoutArray[0]["header"] = get_arr_image_header(factory, val.header);
    // image.height
    _imageoutArray[0]["height"] = factory.createScalar(val.height);
    // image.width
    _imageoutArray[0]["width"] = factory.createScalar(val.width);
    // image.encoding
    _imageoutArray[0]["encoding"] = factory.createCharArray(val.encoding);
    // image.is_bigendian
    _imageoutArray[0]["is_bigendian"] = factory.createScalar(val.is_bigendian);
    // image.step
    _imageoutArray[0]["step"] = factory.createScalar(val.step);
    // image.data
    _imageoutArray[0]["data"] = factory.createArray<sensor_msgs::msg::Image::_data_type::iterator, uint8_t>({1, val.data.size()}, val.data.begin(), val.data.end());
    return _imageoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_image_header(MDFactory_T& factory, sensor_msgs::msg::Image::_header_type& val) {
    auto _image_headeroutArray = factory.createStructArray({1,1},{"stamp","frame_id"});
    // image.header.stamp
    _image_headeroutArray[0]["stamp"] = get_arr_image_header_stamp(factory, val.stamp);
    // image.header.frame_id
    _image_headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return _image_headeroutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_image_header_stamp(MDFactory_T& factory, std_msgs::msg::Header::_stamp_type& val) {
    auto _image_header_stampoutArray = factory.createStructArray({1,1},{"sec","nanosec"});
    // image.header.stamp.sec
    _image_header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // image.header.stamp.nanosec
    _image_header_stampoutArray[0]["nanosec"] = factory.createScalar(val.nanosec);
    return _image_header_stampoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_vector(MDFactory_T& factory, object_msgs::msg::ObjectsInBoxes::_objects_vector_type& val) {
    auto _objects_vectoroutArray = factory.createStructArray({1,val.size()},{"object","roi"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // objects_vector.object
    _objects_vectoroutArray[idx]["object"] = get_arr_objects_vector_object(factory, val[idx].object);
    // objects_vector.roi
    _objects_vectoroutArray[idx]["roi"] = get_arr_objects_vector_roi(factory, val[idx].roi);
    }
    return _objects_vectoroutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_vector_object(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_object_type& val) {
    auto _objects_vector_objectoutArray = factory.createStructArray({1,1},{"object_name","probability"});
    // objects_vector.object.object_name
    _objects_vector_objectoutArray[0]["object_name"] = factory.createCharArray(val.object_name);
    // objects_vector.object.probability
    _objects_vector_objectoutArray[0]["probability"] = factory.createScalar(val.probability);
    return _objects_vector_objectoutArray;
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_objects_vector_roi(MDFactory_T& factory, object_msgs::msg::ObjectInBox::_roi_type& val) {
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
  OBJECT_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::ObjectsInBoxes>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","image","objects_vector","inference_time_ms"});
    // header
    outArray[0]["header"] = get_arr_header(factory, msg->header);
    // image
    outArray[0]["image"] = get_arr_image(factory, msg->image);
    // objects_vector
    outArray[0]["objects_vector"] = get_arr_objects_vector(factory, msg->objects_vector);
    // inference_time_ms
    outArray[0]["inference_time_ms"] = factory.createScalar(msg->inference_time_ms);
    return outArray;
  }
} //namespace ObjectsInBoxes
} //namespace matlabhelper
} //namespace object_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER