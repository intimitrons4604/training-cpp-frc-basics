#include "Robot.h"

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
    /*
     * TODO Add code to spin the motor here
     *   - if the A button is pressed, spin the motor forwards
     * 
     * 
     *   - if the B button is pressed, spin the motor backwards
     *   - if neither A or B is pressed, stop the motor
     *   - BONUS: What happens if you push the A and B buttons at the same time?
     *     Is this the behaviour you intended?
   
   
     */




    if (xbox.GetAButton())
    {
        // if true
        motor.Set(0.5);

    }

    if (xbox.GetBButton())
    {

        motor.Set(-0.5);
    }

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
