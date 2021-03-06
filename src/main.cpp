#include "ros/ros.h"

#include <string.h>

#include "joy_to_bebop/joy_to_bebop.h"

int main(int argc, char **argv) {
  ROS_INFO("Ps3 joystick to bebop drone topics converter started");

  ros::init(argc, argv, "joy_to_bebop");

  roman::bebop::JoyToBebop joyToBebop;

  ros::spin();

  return 0;
}
