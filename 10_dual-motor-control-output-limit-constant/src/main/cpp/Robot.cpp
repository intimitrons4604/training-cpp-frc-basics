#include "Robot.h"

#include <cmath>

using JoystickHand = frc::GenericHID::JoystickHand;

// TODO Replace this line by adding a constant for the motor output power limit

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
    // TODO Replace the 60% power limit in this function with the constant you added
    // at the top of this file

    double leftStickY = xboxController.GetY(JoystickHand::kLeftHand);
    double rightStickY = xboxController.GetY(JoystickHand::kRightHand);

    double leftOutput = 0;
    double rightOuput = 0;

    if (std::abs(leftStickY) > 0.6)
    {
        leftOutput = std::copysign(0.6, leftStickY);
    }
    else
    {
        leftOutput = leftStickY;
    }

    if (std::abs(rightStickY) > 0.6)
    {
        rightOuput = std::copysign(0.6, rightStickY);
    }
    else
    {
        rightOuput = rightStickY;
    }

    leftMotor.Set(leftOutput);
    rightMotor.Set(rightOuput);
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
