#include <ros/ros.h>
#include "geometry_msgs/Twist.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "move_1");
    ros::NodeHandle n;
    ros::Publisher pub1 = n.advertise <geometry_msgs::Twist> ("/cmd_vel/", 1000);
    
    ros::Rate loop_rate(10);
    geometry_msgs::Twist move_cmd;
    move_cmd.linear.x = 1.0;
    move_cmd.linear.z = 1.0;
    move_cmd.angular.z = 1.0;
    while (ros::ok()) {
        pub1.publish(move_cmd);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
        
