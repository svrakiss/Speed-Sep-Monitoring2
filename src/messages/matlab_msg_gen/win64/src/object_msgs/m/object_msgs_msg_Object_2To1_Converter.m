function ros1msg = object_msgs_msg_Object_2To1_Converter(message,ros1msg)
%object_msgs_msg_Object_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.ObjectName = message.object_name{1};
ros1msg.Probability = message.probability;
end