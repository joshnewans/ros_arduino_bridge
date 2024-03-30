#ifndef GLOBALS_H
#define GLOBALS_H

// Define motor direction states
enum MotorDirection {
  STOPPED,
  FORWARD,
  BACKWARD
};

// Initialize direction state variables for each motor
extern MotorDirection leftMotorDirection;
extern MotorDirection rightMotorDirection;


#endif
