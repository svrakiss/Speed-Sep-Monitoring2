function ros2msg = object_msgs_msg_Landmark_1To2_Converter(message,ros2msg)
%object_msgs_msg_Landmark_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.landmark_points.x = message.LandmarkPoints.X;
ros2msg.landmark_points.y = message.LandmarkPoints.Y;
ros2msg.landmark_points.z = message.LandmarkPoints.Z;
ros2msg.roi.x_offset = message.Roi.XOffset;
ros2msg.roi.y_offset = message.Roi.YOffset;
ros2msg.roi.height = message.Roi.Height;
ros2msg.roi.width = message.Roi.Width;
ros2msg.roi.do_rectify = message.Roi.DoRectify;
end