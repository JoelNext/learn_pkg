#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
 
void callback(const geometry_msgs::Twist &cmd_vel)
{
    ROS_INFO("Received a /cmd_vel message!");
    ROS_INFO("Linear Velocity: [%f,%f,%f]",
             cmd_vel.linear.x, cmd_vel.linear.y, cmd_vel.linear.z );
    ROS_INFO("Angular velocity:[%f,%f,%f]",
             cmd_vel.angular.x, cmd_vel.angular.y, cmd_vel.angular.z);
}
 
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "turtle_vel_rece_node");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/turtle1/cmd_vel", 10, callback);
    ros::spin();
    return 1;
}