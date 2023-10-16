
#include <ros/ros.h>  
#include <gazebo_msgs/ModelStates.h>  
#include <std_msgs/String.h>  
#include <robot_room/test.h>  

void modelStatesCallback(const gazebo_msgs::ModelStates::ConstPtr& msg)
{
    std::vector<std::string> model_names = msg->name;
    std::vector<geometry_msgs::Pose> model_poses = msg->pose;
    std::vector<geometry_msgs::Twist> model_twists = msg->twist;

    for (size_t i = 0; i < model_names.size(); ++i)
    {
        ROS_INFO("Model Name: %s", model_names[i].c_str());
        ROS_INFO("Model Pose: x=%.2f, y=%.2f, z=%.2f", model_poses[i].position.x, model_poses[i].position.y, model_poses[i].position.z);
        ROS_INFO("Model Twist: linear x=%.2f, y=%.2f, z=%.2f", model_twists[i].linear.x, model_twists[i].linear.y, model_twists[i].linear.z);
        ROS_INFO("Model Twist: angular x=%.2f, y=%.2f, z=%.2f", model_twists[i].angular.x, model_twists[i].angular.y, model_twists[i].angular.z);
    }
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "robot_sub");
    ros::NodeHandle nh;

    ros::Rate rate(1000);

    while (ros::ok()) {
        ros::spinOnce();  // 处理所有待处理的ROS消息
        // 在这里可以添加其他循环逻辑

    }

 
    return 0;
}


