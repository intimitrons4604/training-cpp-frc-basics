# Digital Input and Boolean Logic
In this exercise, you will add a `DigitalInput` to the robot to check a limit switch. You will write code to spin the motor whenever the limit switch is not pressed in autonomus, and spin the motor in teleop when one or more buttons are pressed on the xbox controller and the limit switch is not pressed.

## Tips
The code you write will depend on how your limit switch is wired. You need to consider whether the switch is wired for NO or NC operation as well as the pull-up resistor on the roboRIO's DIO pin.
