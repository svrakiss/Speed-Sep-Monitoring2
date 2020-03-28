function ros2msg = object_msgs_msg_PerfValue_1To2_Converter(message,ros2msg)
%object_msgs_msg_PerfValue_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.average = message.Average;
ros2msg.min = message.Min;
ros2msg.max = message.Max;
ros2msg.std_dev = message.StdDev;
ros2msg.window = message.Window;
end