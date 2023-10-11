# models
个人博客
mkdir -p catkin_ws_room/src
cd catkin_ws_room/src
catkin_make

src目录下创建功能包
catkin_create_pkg robot_room std_msgs rospy roscpp gazebo_ros gazebo_plugins
