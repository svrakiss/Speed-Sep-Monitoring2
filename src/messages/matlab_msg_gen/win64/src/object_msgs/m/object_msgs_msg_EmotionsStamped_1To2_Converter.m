function ros2msg = object_msgs_msg_EmotionsStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_EmotionsStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.emotions.emotion = message.Emotions.Emotion;
ros2msg.emotions.roi.x_offset = message.Emotions.Roi.XOffset;
ros2msg.emotions.roi.y_offset = message.Emotions.Roi.YOffset;
ros2msg.emotions.roi.height = message.Emotions.Roi.Height;
ros2msg.emotions.roi.width = message.Emotions.Roi.Width;
ros2msg.emotions.roi.do_rectify = message.Emotions.Roi.DoRectify;
end