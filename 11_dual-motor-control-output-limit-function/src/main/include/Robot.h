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
  /**
   * Limit motor power to a symmetric limit.
   * 
   * @param power The requested motor power (-1 <= power <= 1)
   * @param limit The power limit for forwards and backwards movement (0 <= limit <= 1)
   * @return The requested power, limited to limit
   */
  double limitMotorPower(double power, double limit);

  frc::Talon leftMotor{0};
  frc::Talon rightMotor{1};
  frc::XboxController xboxController{0};
};
