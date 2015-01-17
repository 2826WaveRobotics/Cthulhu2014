#include "SetTrussPosition60.h"
#include <math.h>
namespace
{
    const double c_timoutSeconds = 1.5; //PID stops after this time
    //Arm Pitch Parameters
    const double c_positionArm = 37; //degrees
    //const double c_setpointPitchTolerance = 0.02; // volts
    
    //Turret Parameters
    const double c_positionTurret = 90; //degrees
    const double c_setpointTurretTolerance = 0.02; // volts
    
}
SetTrussPosition60::SetTrussPosition60() {
	Requires(Robot::armPitchWithPID);
	Requires(Robot::turretWithPID);
}
// Called just before this Command runs the first time
void SetTrussPosition60::Initialize() {
	//Robot::turretWithPID->setAbsoluteAngle(c_positionTurret); // Mar.1 Jim requests no move turret, March 3 Jim requests only turret movement
	Robot::armPitchWithPID->setAbsoluteAngle(60);
	SetTimeout(c_timoutSeconds);
	Robot::shooter->SetFireCommand(SHOOTERCOMMAND_TRUSS60);
}
// Called repeatedly when this Command is scheduled to run
void SetTrussPosition60::Execute() {
	
}
// Make this return true when this Command no longer needs to run execute()
bool SetTrussPosition60::IsFinished() {
    bool withinArmError = (fabs(Robot::armPitchWithPID->ReturnPIDInput() - Robot::armPitchWithPID->convertAngleToVolts(c_positionArm, false)) < c_setpointTurretTolerance);
   // bool withinTurretError = (fabs(Robot::turretWithPID->ReturnPIDInput() - Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)) < c_setpointTurretTolerance);
	if((/*withinTurretError &&*/ withinArmError) || IsTimedOut())
	{
	  //  std::cout << "SetTrussPosition60: Within Err: " << Robot::turretWithPID->ReturnPIDInput() << ", " << Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)
	      //      << ", " << fabs(Robot::turretWithPID->ReturnPIDInput() - Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)) << std::endl;
        return true;
	}
	else
	{
	    return false;
	}
}
// Called once after isFinished returns true
void SetTrussPosition60::End() {
	
}
void SetTrussPosition60::Interrupted() {
    End();
}
