#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>


using namespace std::chrono_literals;

class VelocityPublisher : public rclcpp::Node
{
public:
  VelocityPublisher() : Node("velocity_publisher")
  {

  }

private:
  void publish_velocity()
  {

  }

};



int main(int argc, char * argv[])
{
  return 0;
}
