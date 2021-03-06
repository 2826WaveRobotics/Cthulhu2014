// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "TurretByJoystick.h"
#include "../WaveConstants.h"
#include <math.h>
TurretByJoystick::TurretByJoystick() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::turretWithPID);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void TurretByJoystick::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void TurretByJoystick::Execute() {
	
	double joystickOutput = Robot::oi->getOperatorJoystick()->GetRawAxis(c_turretRotate);
	double output;
	if(fabs(joystickOutput) < 0.2)
	{
		joystickOutput = 0;
	}
	//Robot::turretWithPID->turretMotor->Set(joystickOutput);
	//double joystickOutput = Robot::oi->getTestJoystick()->GetRawAxis(c_turretRotate);
	double voltageInput = Robot::turretWithPID->turretAngleSensor->GetVoltage();
    double invertVolts = Robot::turretWithPID->turretAngleSensorInverted->GetVoltage();
	double angleInput = Robot::turretWithPID->convertVoltsToAngle(voltageInput, false);
			
    //std::cout << "Turret: " << joystickOutput << "\t Volts: " << voltageInput << "\t InvertVolts: " << invertVolts << "\t Angle: " << angleInput << std::endl;
	
//	if(angleInput > c_turretAngleMax){
//		output = .25;
//	}
//	else if(angleInput < c_turretAngleMin){
//		output = -.25;
//	}
//	else{
	output = joystickOutput;
	output = output / 1;
//	}
	
	Robot::turretWithPID->setTurretMotorOutput(output);
	
}
// Make this return true when this Command no longer needs to run execute()
bool TurretByJoystick::IsFinished() {
	return false;
}
// Called once after isFinished returns true
void TurretByJoystick::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurretByJoystick::Interrupted() {
}
