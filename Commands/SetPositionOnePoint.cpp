#include "SetPositionOnePoint.h"
#include <math.h>
#include "../WaveConstants.h"
namespace
{
const double c_timoutSeconds = 1.5; //PID stops after this time
const double c_positionArm = 65; //degrees
const double c_setpointPitchTolerance = 0.02; // volts
const double c_positionTurret = 90; //degrees
const double c_setpointTurretTolerance = 0.02; // volts
}
SetPositionOnePoint::SetPositionOnePoint() {
	Requires(Robot::armPitchWithPID);
	Requires(Robot::shooter);
	//Requires(Robot::turretWithPID);
}
void SetPositionOnePoint::Initialize() {
	//Robot::turretWithPID->setAbsoluteAngle(c_positionTurret);
	Robot::armPitchWithPID->setAbsoluteAngle(c_positionArm);
	SetTimeout(c_timoutSeconds);
	Robot::shooter->SetFireCommand(SHOOTERCOMMAND_ONEPOINT); // change shootercommand
}
void SetPositionOnePoint::Execute() {

}
bool SetPositionOnePoint::IsFinished() {
	bool withinArmError = (fabs(Robot::armPitchWithPID->ReturnPIDInput() - Robot::armPitchWithPID->convertAngleToVolts(c_positionArm, false)) < c_setpointTurretTolerance);
	//bool withinTurretError = (fabs(Robot::turretWithPID->ReturnPIDInput() - Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)) < c_setpointTurretTolerance);
	if((/*withinTurretError && */withinArmError) || IsTimedOut())
	{
		Robot::ballCollector->setRollerOutput(0);
		return true;
	}
	else
	{
		return false;
	}
}
void SetPositionOnePoint::End() {

}
void SetPositionOnePoint::Interrupted() {
	End();
}
