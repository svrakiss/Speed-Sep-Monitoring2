FROM whipcarte/matlab:r2020a_conda
# RUN sudo sh -c 'echo "deb [arch=amd64,arm64] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list'
# RUN sudo apt update

# RUN sudo apt-get install -y ros-dashing-ros2bag ros-dashing-rosbag2 ros-dashing-rosbag2-storage-default-plugins \
# ros-dashing-object-analytics-msgs

# RUN grep -F "export ROS_DOMAIN_ID" ~/.bashrc || echo "export ROS_DOMAIN_ID=32" >> ~/.bashrc
RUN apt-get update -y && apt-get install --no-install-recommends -y -q curl python build-essential git ca-certificates
RUN mkdir /nodejs && curl https://nodejs.org/dist/v14.0.0/node-v14.0.0-linux-x64.tar.xz | tar xvzf - -C /nodejs --strip-components=1

ENV PATH $PATH:/nodejs/bin 
# WORKDIR /home/ubuntu
COPY . /home/matlab/SSM
# CMD ["bash"]

