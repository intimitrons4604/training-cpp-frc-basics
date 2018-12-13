#pragma once

#include <Talon.h>
#include <TimedRobot.h>
#include <XboxController.h>

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
  frc::Talon leftMotor{0};
  frc::Talon rightMotor{1};
  frc::XboxController xboxController{0};
};
