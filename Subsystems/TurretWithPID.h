// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef TURRETWITHPID_H
#define TURRETWITHPID_H
#include "Commands/PIDSubsystem.h"
#include "WPILib.h"
/**
 *
 *
 * @author ExampleAuthor
 */
//
// This class controls the lateral (slew) rotation of the Intake Arm.
// There is an angle sensor and PID system to set the angle of the turret.
//
class TurretWithPID: public PIDSubsystem {
 public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	AnalogChannel* turretAngleSensor;
	AnalogChannel* turretAngleSensorInverted;
	SpeedController* turretMotor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    TurretWithPID();
    double ReturnPIDInput();
    void UsePIDOutput(double output);
    void InitDefaultCommand();
    double getPIDOutput();
    void setAbsoluteAngle(double angle);
    double convertAngleToVolts(double angle, bool inverted); // inverted goes from 4.5 to .5
    double convertVoltsToAngle(double volts, bool inverted);
    void setTurretMotorOutput(double output);
    
    
    double getCurrentAngle();
    bool isAngleValid();
 private:
    double m_requestedAngle;
    double m_actualAngle;
    bool   m_angleInputValid;
};
#endif
