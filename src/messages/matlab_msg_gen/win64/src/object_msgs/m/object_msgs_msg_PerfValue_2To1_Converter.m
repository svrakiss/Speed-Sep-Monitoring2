function ros1msg = object_msgs_msg_PerfValue_2To1_Converter(message,ros1msg)
%object_msgs_msg_PerfValue_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Average = message.average;
ros1msg.Min = message.min;
ros1msg.Max = message.max;
ros1msg.StdDev = message.std_dev;
ros1msg.Window = message.window;
end