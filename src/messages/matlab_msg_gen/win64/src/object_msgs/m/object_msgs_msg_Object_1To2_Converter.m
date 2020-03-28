function ros2msg = object_msgs_msg_Object_1To2_Converter(message,ros2msg)
%object_msgs_msg_Object_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.object_name = message.ObjectName;
ros2msg.probability = message.Probability;
end