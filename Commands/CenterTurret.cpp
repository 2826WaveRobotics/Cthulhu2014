#include "CenterTurret.h"
#include <math.h>
namespace
{
const double c_timoutSeconds = 1.5; //PID stops after this time

//Turret Parameters
const double c_positionTurret = 90; // center? 
const double c_setpointTurretTolerance = 0.1; // volts

}
CenterTurret::CenterTurret() {
	Requires(Robot::turretWithPID);
}
void CenterTurret::Initialize() {
	Robot::turretWithPID->setAbsoluteAngle(c_positionTurret);
	SetTimeout(c_timoutSeconds);	
}
void CenterTurret::Execute() {

}
bool CenterTurret::IsFinished() {
	bool withinTurretError = (fabs(Robot::turretWithPID->ReturnPIDInput() - Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)) < c_setpointTurretTolerance);
	bool jsMovement = (fabs(Robot::oi->getOperatorJoystick()->GetRawAxis(c_turretRotate)) > 0.5);
	if(withinTurretError || jsMovement || IsTimedOut())
	{
		return true;
	}
	else
	{
		return false;
	}
}
// Called once after isFinished returns true
void CenterTurret::End() {
	Robot::turretWithPID->Disable();
}
void CenterTurret::Interrupted() {
	End();
}
