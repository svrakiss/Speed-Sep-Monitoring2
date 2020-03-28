// Copyright 2019 The MathWorks, Inc.
// Publisher for object_analytics_msgs/ObjectInBox3D
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4244)
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
#include <utility>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp"
#include "MATLABPublisherInterface.hpp"
#include "visibility_control.h"
#include "object_analytics_msgs/msg/object_in_box3_d.hpp"
namespace object_analytics_msgs {
namespace matlabhelper {
namespace ObjectInBox3D {
  void copy_from_arr(std::unique_ptr<object_analytics_msgs::msg::ObjectInBox3D>& msg, const matlab::data::StructArray arr);
} //namespace ObjectInBox3D
} //namespace matlabhelper
} //namespace object_analytics_msgs
class OBJECT_ANALYTICS_MSGS_EXPORT object_analytics_msgs_msg_ObjectInBox3D_publisher : public MATLABPublisherInterface {
    rclcpp::Publisher<object_analytics_msgs::msg::ObjectInBox3D>::SharedPtr mPub;
  public:
    RCLCPP_SMART_PTR_DEFINITIONS(object_analytics_msgs_msg_ObjectInBox3D_publisher)
    object_analytics_msgs_msg_ObjectInBox3D_publisher()
        : MATLABPublisherInterface() {
    }
    virtual ~object_analytics_msgs_msg_ObjectInBox3D_publisher() {
    }
    virtual intptr_t createPublisher(const std::string& topic_name,
                                     const rmw_qos_profile_t& qos_profile,
                                     rclcpp::Node::SharedPtr theNode) {
        // Create a subscription to the topic which can be matched with one or more compatible ROS
        // publishers.
        // Note that not all publishers on the same topic with the same type will be compatible:
        // they must have compatible Quality of Service policies.
        rclcpp::QoSInitialization qos_init = rclcpp::QoSInitialization::from_rmw(qos_profile);
        rclcpp::QoS qos(qos_init);
        mPub = theNode->create_publisher<object_analytics_msgs::msg::ObjectInBox3D>(topic_name, qos);
        return reinterpret_cast<intptr_t>(mPub.get());
    }
    virtual bool publish(const matlab::data::StructArray arr) {
        auto msg = std::make_unique<object_analytics_msgs::msg::ObjectInBox3D>();
        object_analytics_msgs::matlabhelper::ObjectInBox3D::copy_from_arr(msg, arr);
        mPub->publish(std::move(msg));
        return true;
    }
    virtual const rmw_gid_t& get_gid() const {
        return mPub->get_gid();
    }
};
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(object_analytics_msgs_msg_ObjectInBox3D_publisher, MATLABPublisherInterface)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
