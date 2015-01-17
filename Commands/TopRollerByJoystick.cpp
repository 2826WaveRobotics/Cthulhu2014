// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "TopRollerByJoystick.h"
#include "../WaveConstants.h"
TopRollerByJoystick::TopRollerByJoystick() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::ballCollector);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	m_on = false;
}
// Called just before this Command runs the first time
void TopRollerByJoystick::Initialize() {
//	if(!m_on)
//	{
//		Robot::ballCollector->setRollerOutput(.3);
//		m_on = true;
//	}
//	else
//	{
//		Robot::ballCollector->setRollerOutput(0);
//		m_on = false;
//	}
	//std::cout << "Initializing 30%" << std::endl;
	Robot::ballCollector->setRollerOutput(1);
	
}
// Called repeatedly when this Command is scheduled to run
void TopRollerByJoystick::Execute() {
//    //float output = Robot::oi->getOperatorJoystick()->GetRawAxis(c_topRollerRun);
//    float output = (Robot::oi->getOperatorJoystick()->GetRawButton(3)? 0.3 : 0);
//    //float output = .25;
//    Robot::ballCollector->setRollerOutput(output);
	//std::cout << "Executing TopRoller" << std::endl;
}
// Make this return true when this Command no longer needs to run execute()
bool TopRollerByJoystick::IsFinished() {
	return false;
	//std::cout << "Is finished? (false)" << std::endl;
}
// Called once after isFinished returns true
void TopRollerByJoystick::End() {
	Robot::ballCollector->setRollerOutput(0);
	//std::cout << "Ending and setting 0%" << std::endl;
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TopRollerByJoystick::Interrupted() {
	End();
	//std::cout << "Interrupted: Ending" << std::endl;
}