#include "rclcpp/rclcpp.hpp"
#include "mcl/mcl_node.h"

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    
    // 名前空間を明示的に使用
    rclcpp::NodeOptions options;
    auto node = std::make_shared<mcl::MclNode>(options);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
