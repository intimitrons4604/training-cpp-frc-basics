#pragma once

#include <frc/TimedRobot.h>

class Robot : public frc::TimedRobot
{
public:
  void RobotInit() override;

  void RobotPeriodic() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;

  void DisabledInit() override;
  void DisabledPeriodic() override;

private:
  // TODO Replace this line by adding a motor controller to the robot
};
