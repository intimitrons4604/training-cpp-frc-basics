#include "Robot.h"

#include <iostream>

void Robot::RobotInit()
{
    SetPeriod(1);

    std::cout << "Robot::RobotInit() executed" << std::endl;
}

void Robot::RobotPeriodic()
{
    std::cout << "Robot::RobotPeriodic() executed" << std::endl;
}

void Robot::AutonomousInit()
{
    std::cout << "Robot::AutonomousInit() executed" << std::endl;
}

void Robot::AutonomousPeriodic()
{
    std::cout << "Robot::AutonomousPeriodic() executed" << std::endl;
}

void Robot::TeleopInit()
{
    std::cout << "Robot::TeleopInit() executed" << std::endl;
}

void Robot::TeleopPeriodic()
{
    std::cout << "Robot::TeleopPeriodic() executed" << std::endl;
}

void Robot::TestInit()
{
    std::cout << "Robot::TestInit() executed" << std::endl;
}

void Robot::TestPeriodic()
{
    std::cout << "Robot::TestPeriodic() executed" << std::endl;
}

void Robot::DisabledInit()
{
    std::cout << "Robot::DisabledInit() executed" << std::endl;
}

void Robot::DisabledPeriodic()
{
    std::cout << "Robot::DisabledPeriodic() executed" << std::endl;
}
