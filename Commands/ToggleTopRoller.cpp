// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ToggleTopRoller.h"
ToggleTopRoller::ToggleTopRoller() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::ballCollector);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	//m_on = false;
}
// Called just before this Command runs the first time
void ToggleTopRoller::Initialize() {
	//float output = (Robot::ballCollector->ballCollectMotor->Get() > 0.1 ? 0 : 0.3);
	//Robot::ballCollector->setRollerOutput(output);
}
// Called repeatedly when this Command is scheduled to run
void ToggleTopRoller::Execute() {
	
}
// Make this return true when this Command no longer needs to run execute()
bool ToggleTopRoller::IsFinished() {
	return true;
}
// Called once after isFinished returns true
void ToggleTopRoller::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleTopRoller::Interrupted() {
}