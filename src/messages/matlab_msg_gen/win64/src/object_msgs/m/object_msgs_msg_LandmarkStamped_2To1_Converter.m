function ros1msg = object_msgs_msg_LandmarkStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_LandmarkStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Landmarks.LandmarkPoints.X = message.landmarks.landmark_points.x;
ros1msg.Landmarks.LandmarkPoints.Y = message.landmarks.landmark_points.y;
ros1msg.Landmarks.LandmarkPoints.Z = message.landmarks.landmark_points.z;
ros1msg.Landmarks.Roi.XOffset = message.landmarks.roi.x_offset;
ros1msg.Landmarks.Roi.YOffset = message.landmarks.roi.y_offset;
ros1msg.Landmarks.Roi.Height = message.landmarks.roi.height;
ros1msg.Landmarks.Roi.Width = message.landmarks.roi.width;
ros1msg.Landmarks.Roi.DoRectify = message.landmarks.roi.do_rectify;
end