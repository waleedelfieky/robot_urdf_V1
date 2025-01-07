#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>

using namespace std::chrono_literals;

class VelocityPublisher : public rclcpp::Node
{
public:
  VelocityPublisher() : Node("velocity_publisher")
  {
    // Create a publisher for the /cmd_vel topic with message type Twist
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    
    // Create a timer to publish a message at a fixed interval (1 second)
    timer_ = this->create_wall_timer(
      1s, std::bind(&VelocityPublisher::publish_velocity, this));
  }

private:
  void publish_velocity()
  {
    // Create a Twist message
    auto message = geometry_msgs::msg::Twist();
    
    // Set linear and angular velocities
    message.linear.x = 1.0;  // Move forward at 1 m/s
    message.angular.z = 1.0; // Rotate with 1 rad/s around z-axis

    // Publish the message to /cmd_vel
    RCLCPP_INFO(this->get_logger(), "Publishing: Linear X: '%f', Angular Z: '%f'",
                message.linear.x, message.angular.z);
    publisher_->publish(message);
  }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  // Initialize ROS 2 and create the node
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<VelocityPublisher>());
  rclcpp::shutdown();
  return 0;
}
