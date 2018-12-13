#include "Robot.h"

#include <cmath>

typedef frc::GenericHID::JoystickHand JoystickHand;

void Robot::RobotInit()
{
    // Intentionally empty
}

void Robot::RobotPeriodic()
{
    // Intentionally empty
}

void Robot::AutonomousInit()
{
    // Intentionally empty
}

void Robot::AutonomousPeriodic()
{
    // Intentionally empty
}

void Robot::TeleopInit()
{
    // Intentionally empty
}

void Robot::TeleopPeriodic()
{
    double leftStickY = xboxController.GetY(JoystickHand::kLeftHand);
    double rightStickY = xboxController.GetY(JoystickHand::kRightHand);

    // TODO Add code to call limitMotorPower() and spin the motors so that the leftMotor
    // uses the left joystick and the rightMotor uses the right joystick, with the
    // left motor's power limited to 35% and the right motor's power limited to 80%
}

void Robot::TestInit()
{
    // Intentionally empty
}

void Robot::TestPeriodic()
{
    // Intentionally empty
}

void Robot::DisabledInit()
{
    // Intentionally empty
}

void Robot::DisabledPeriodic()
{
    // Intentionally empty
}

// TODO Implement Robot::limitMotorPower() here
