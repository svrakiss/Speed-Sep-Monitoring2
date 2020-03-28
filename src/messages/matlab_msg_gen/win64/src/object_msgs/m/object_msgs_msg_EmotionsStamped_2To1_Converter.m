function ros1msg = object_msgs_msg_EmotionsStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_EmotionsStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Emotions.Emotion = message.emotions.emotion{1};
ros1msg.Emotions.Roi.XOffset = message.emotions.roi.x_offset;
ros1msg.Emotions.Roi.YOffset = message.emotions.roi.y_offset;
ros1msg.Emotions.Roi.Height = message.emotions.roi.height;
ros1msg.Emotions.Roi.Width = message.emotions.roi.width;
ros1msg.Emotions.Roi.DoRectify = message.emotions.roi.do_rectify;
end