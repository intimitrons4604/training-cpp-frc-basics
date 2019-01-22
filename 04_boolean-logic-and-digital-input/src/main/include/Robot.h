#pragma once

#include <frc/Talon.h>
#include <frc/TimedRobot.h>
#include <frc/XboxController.h>

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
  frc::Talon motor{0};
  frc::XboxController xboxController{0};
  // TODO Replace this line by adding a DigitalInput to the robot
};
