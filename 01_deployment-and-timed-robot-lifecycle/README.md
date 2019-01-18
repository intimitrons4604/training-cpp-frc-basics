# Robot Code Deployment and TimedRobot Lifecycle

TODO: Update needed

This exercise covers deploying code and the lifecycle functions of the TimedRobot. No code changes are required for this exercise.

## Code Structure
The robot code is stored in two primary directories - `src/main/cpp` and `src/main/include`. The first contains source files (e.g. `.cpp`, `.cc`. `.cxx`, `.c++` files) and the second contains header files (e.g. `.h`, `.hpp`, `.xx`, `.h++` files). The header files are included into the source files. For example, both `Main.cpp` and `Robot.cpp` include `Robot.h` at the top of the source file.

In `Robot.h`, note that `Robot` is a `frc::TimedRobot`. There are several public function declarations in `Robot` that override the implementation in `TimedRobot`. `Robot.cpp` contains all the code for these overridden functions. Each one prints out a message with the name of the function when it executes. These messages can be seen in the Driver Station or RioLog within Visual Studio Code.

`Robot::Robot()` is a special function called the constructor. Note that the constructor is calling the TimedRobot constructor, `frc::TimedRobot()`. This call is not inside the braces like the code for the other functions in `Robot.cpp`, but is included as part of the constructor's initializer list (Note only constructors have initializer lists and not all functions). The call to the `TimedRobot` constructor sets the robot's period to one second. This is to make it easier to see the messages printed out. By default, a `TimedRobot` has a period of 0.02 seconds, meaning the periodic functions are called every 0.02 seconds (or at a rate of 50 Hz).

The program starts inside `Main.cpp`. The code inside the `main()` function performs all necessary setup of the RoboRIO and then starts running the code in the `Robot` class.

Deploy the code and watch for when the various messages are printed. Make sure you try each mode (Disabled, Autonomous, Teleop, Test) and go between different combinations of them to see what messages are printed.

## Deploying Code
To build and deploy the code, open the Command Palette (`Ctrl + Shift + P` or `F1`) and execute `WPILib: Deploy Robot Code`.
