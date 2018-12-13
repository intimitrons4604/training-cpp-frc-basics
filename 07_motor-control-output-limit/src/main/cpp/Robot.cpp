#include "Robot.h"

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
    // Note that the typedef at the top of the file saves us from having to type out the fully qualified JoystickHand
    double rightStickY = xboxController.GetY(JoystickHand::kRightHand);

    // TODO Add code to spin the motor forward or backwards at a speed
    // linearly proportional to how far the right stick is pushed forward
    // or backwards along the y axis (rightStickY), but limit the maximum
    // motor power in both directions to 60%
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
