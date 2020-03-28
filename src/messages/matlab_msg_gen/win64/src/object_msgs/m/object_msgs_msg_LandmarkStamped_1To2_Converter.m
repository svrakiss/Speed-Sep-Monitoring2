function ros2msg = object_msgs_msg_LandmarkStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_LandmarkStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.landmarks.landmark_points.x = message.Landmarks.LandmarkPoints.X;
ros2msg.landmarks.landmark_points.y = message.Landmarks.LandmarkPoints.Y;
ros2msg.landmarks.landmark_points.z = message.Landmarks.LandmarkPoints.Z;
ros2msg.landmarks.roi.x_offset = message.Landmarks.Roi.XOffset;
ros2msg.landmarks.roi.y_offset = message.Landmarks.Roi.YOffset;
ros2msg.landmarks.roi.height = message.Landmarks.Roi.Height;
ros2msg.landmarks.roi.width = message.Landmarks.Roi.Width;
ros2msg.landmarks.roi.do_rectify = message.Landmarks.Roi.DoRectify;
end