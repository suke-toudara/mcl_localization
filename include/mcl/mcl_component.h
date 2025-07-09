#ifndef __MCL_H__
#define __MCL_H__

#include <rclcpp/rclcpp.hpp>
# include <sensor_msgs/msg/laser_scan.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/OccupancyGrid.hpp>

namespace mcl
{
class MclNode
{
    private:
        rclcpp::Node::SharedPtr node_;
        rclcpp::Publisher<geometry_msgs::msg::PoseArray>::SharedPtr pub_particles_;
        rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
        rclcpp::Subscription<nav_msgs::msg::OccupancyGrid>::SharedPtr map_sub_;
        rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr initial_pose_sub_;
}    
} // namespace mcl

