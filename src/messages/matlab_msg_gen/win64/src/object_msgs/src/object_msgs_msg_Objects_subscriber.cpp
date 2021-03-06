// Copyright 2019 The MathWorks, Inc.
// Subscriber for object_msgs/Objects
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
#endif
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp"
#include "MATLABSubscriberInterface.hpp"
#include "visibility_control.h"
#include "object_msgs/msg/objects.hpp"
namespace object_msgs {
namespace matlabhelper {
namespace Objects {
  MDArray_T get_arr(MDFactory_T& factory, const std::shared_ptr<object_msgs::msg::Objects>& msg);
} //namespace Objects
} //namespace matlabhelper
} //namespace object_msgs
class OBJECT_MSGS_EXPORT object_msgs_msg_Objects_subscriber : public MATLABSubscriberInterface {
    rclcpp::Subscription<object_msgs::msg::Objects>::SharedPtr mSub;
  public:
    object_msgs_msg_Objects_subscriber()
        : MATLABSubscriberInterface() {
    }
    virtual ~object_msgs_msg_Objects_subscriber() {
    }
    virtual intptr_t createSubscription(const std::string& topic_name,
                                        const rmw_qos_profile_t& qos_profile,
                                        rclcpp::Node::SharedPtr theNode,
                                        void* sd,
                                        SendDataToMATLABFunc_T sendDataToMATLABFunc,
                                        const bool incPubGid) {
        // Create a callback function for when messages are received.
        // Variations of this function also exist using, for example UniquePtr for zero-copy
        // transport.
        auto callback = [this, sd, sendDataToMATLABFunc, incPubGid](
                            const object_msgs::msg::Objects::SharedPtr msg,
                            const rmw_message_info_t& msgInfo) -> void {
            auto outArray = object_msgs::matlabhelper::Objects::get_arr(mFactory, msg);
            appendAndSendToMATLAB(sd, sendDataToMATLABFunc, outArray, incPubGid, msgInfo);
        };
        // Create a subscription to the topic which can be matched with one or more compatible ROS
        // publishers.
        // Note that not all publishers on the same topic with the same type will be compatible:
        // they must have compatible Quality of Service policies.
        // Note: ignore_local_publications is not supported in FastRTPS
        rclcpp::QoSInitialization qos_init = rclcpp::QoSInitialization::from_rmw(qos_profile);
        rclcpp::QoS qos(qos_init);
        mSub = theNode->create_subscription<object_msgs::msg::Objects>(topic_name, qos, callback);
        return true;
    }
};
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(object_msgs_msg_Objects_subscriber, MATLABSubscriberInterface)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif
