function ros1msg = object_msgs_msg_PersonsStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_PersonsStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Faces.Object.ObjectName = message.faces.object.object_name{1};
ros1msg.Faces.Object.Probability = message.faces.object.probability;
ros1msg.Faces.Roi.XOffset = message.faces.roi.x_offset;
ros1msg.Faces.Roi.YOffset = message.faces.roi.y_offset;
ros1msg.Faces.Roi.Height = message.faces.roi.height;
ros1msg.Faces.Roi.Width = message.faces.roi.width;
ros1msg.Faces.Roi.DoRectify = message.faces.roi.do_rectify;
ros1msg.Emotions.Emotion = message.emotions.emotion{1};
ros1msg.Emotions.Roi.XOffset = message.emotions.roi.x_offset;
ros1msg.Emotions.Roi.YOffset = message.emotions.roi.y_offset;
ros1msg.Emotions.Roi.Height = message.emotions.roi.height;
ros1msg.Emotions.Roi.Width = message.emotions.roi.width;
ros1msg.Emotions.Roi.DoRectify = message.emotions.roi.do_rectify;
ros1msg.Agegenders.Age = message.agegenders.age;
ros1msg.Agegenders.Gender = message.agegenders.gender{1};
ros1msg.Agegenders.GenderConfidence = message.agegenders.gender_confidence;
ros1msg.Agegenders.Roi.XOffset = message.agegenders.roi.x_offset;
ros1msg.Agegenders.Roi.YOffset = message.agegenders.roi.y_offset;
ros1msg.Agegenders.Roi.Height = message.agegenders.roi.height;
ros1msg.Agegenders.Roi.Width = message.agegenders.roi.width;
ros1msg.Agegenders.Roi.DoRectify = message.agegenders.roi.do_rectify;
ros1msg.Headposes.Yaw = message.headposes.yaw;
ros1msg.Headposes.Pitch = message.headposes.pitch;
ros1msg.Headposes.Roll = message.headposes.roll;
ros1msg.Headposes.Roi.XOffset = message.headposes.roi.x_offset;
ros1msg.Headposes.Roi.YOffset = message.headposes.roi.y_offset;
ros1msg.Headposes.Roi.Height = message.headposes.roi.height;
ros1msg.Headposes.Roi.Width = message.headposes.roi.width;
ros1msg.Headposes.Roi.DoRectify = message.headposes.roi.do_rectify;
end