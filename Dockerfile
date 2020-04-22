FROM whipcarte/matlab:r2020a_conda
# RUN sudo sh -c 'echo "deb [arch=amd64,arm64] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list'
# RUN sudo apt update

# RUN sudo apt-get install -y ros-dashing-ros2bag ros-dashing-rosbag2 ros-dashing-rosbag2-storage-default-plugins \
# ros-dashing-object-analytics-msgs

# RUN grep -F "export ROS_DOMAIN_ID" ~/.bashrc || echo "export ROS_DOMAIN_ID=32" >> ~/.bashrc

# WORKDIR /home/ubuntu
# COPY . SSM
# CMD ["bash"]

