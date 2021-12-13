#include <ros/ros.h>
#include "geometry_msgs/Twist.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "move_all");
    ros::NodeHandle n;
    ros::Publisher pub1 = n.advertise <geometry_msgs::Twist> ("/nexus1/cmd_vel/", 1000);
    ros::Publisher pub2 = n.advertise <geometry_msgs::Twist> ("/nexus2/cmd_vel/", 1000);
    ros::Publisher pub3 = n.advertise <geometry_msgs::Twist> ("/nexus3/cmd_vel/", 1000);
    ros::Publisher pub4 = n.advertise <geometry_msgs::Twist> ("/nexus4/cmd_vel/", 1000);
    ros::Publisher pub5 = n.advertise <geometry_msgs::Twist> ("/nexus5/cmd_vel/", 1000);
    ros::Publisher pub6 = n.advertise <geometry_msgs::Twist> ("/nexus6/cmd_vel/", 1000);
    ros::Publisher pub7 = n.advertise <geometry_msgs::Twist> ("/nexus7/cmd_vel/", 1000);
    ros::Publisher pub8 = n.advertise <geometry_msgs::Twist> ("/nexus8/cmd_vel/", 1000);
    ros::Publisher pub9 = n.advertise <geometry_msgs::Twist> ("/nexus9/cmd_vel/", 1000);
    ros::Publisher pub10 = n.advertise <geometry_msgs::Twist> ("/nexus10/cmd_vel/", 1000);
    ros::Publisher pub11 = n.advertise <geometry_msgs::Twist> ("/nexus11/cmd_vel/", 1000);
    ros::Publisher pub12 = n.advertise <geometry_msgs::Twist> ("/nexus12/cmd_vel/", 1000);
    ros::Publisher pub13 = n.advertise <geometry_msgs::Twist> ("/nexus13/cmd_vel/", 1000);
    ros::Publisher pub14 = n.advertise <geometry_msgs::Twist> ("/nexus14/cmd_vel/", 1000);
    ros::Publisher pub15 = n.advertise <geometry_msgs::Twist> ("/nexus15/cmd_vel/", 1000);
    ros::Publisher pub16 = n.advertise <geometry_msgs::Twist> ("/nexus16/cmd_vel/", 1000);
    ros::Publisher pub17 = n.advertise <geometry_msgs::Twist> ("/nexus17/cmd_vel/", 1000);
    ros::Publisher pub18 = n.advertise <geometry_msgs::Twist> ("/nexus18/cmd_vel/", 1000);
    ros::Publisher pub19 = n.advertise <geometry_msgs::Twist> ("/nexus19/cmd_vel/", 1000);
    ros::Publisher pub20 = n.advertise <geometry_msgs::Twist> ("/nexus20/cmd_vel/", 1000);
    
    ros::Rate loop_rate(10);
    geometry_msgs::Twist move_cmd;
    move_cmd.linear.x = 1.0;
    move_cmd.angular.z = 1.0;
    while (ros::ok()) {
        pub1.publish(move_cmd);
        pub2.publish(move_cmd);
        pub3.publish(move_cmd);
        pub4.publish(move_cmd);
        pub5.publish(move_cmd);
        pub6.publish(move_cmd);
        pub7.publish(move_cmd);
        pub8.publish(move_cmd);
        pub9.publish(move_cmd);
        pub10.publish(move_cmd);
        pub11.publish(move_cmd);
        pub12.publish(move_cmd);
        pub13.publish(move_cmd);
        pub14.publish(move_cmd);
        pub15.publish(move_cmd);
        pub16.publish(move_cmd);
        pub17.publish(move_cmd);
        pub18.publish(move_cmd);
        pub19.publish(move_cmd);
        pub20.publish(move_cmd);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
        
