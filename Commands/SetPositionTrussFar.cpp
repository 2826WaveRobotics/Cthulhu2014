#include "SetPositionTrussFar.h"
#include <math.h>
#include "../WaveConstants.h"
namespace
{
const double c_timoutSeconds = 1.5; //PID stops after this time
const double c_positionArm = 39; //degrees
const double c_setpointPitchTolerance = 0.02; // volts
//const double c_positionTurret = 90; //degrees
const double c_setpointTurretTolerance = 0.02; // volts
}
SetPositionTrussFar::SetPositionTrussFar() {
	Requires(Robot::armPitchWithPID);
	Requires(Robot::shooter);
	//Requires(Robot::turretWithPID);
}
void SetPositionTrussFar::Initialize() {
	//Robot::turretWithPID->setAbsoluteAngle(c_positionTurret);
	Robot::armPitchWithPID->setAbsoluteAngle(c_positionArm);
	SetTimeout(c_timoutSeconds);
	Robot::shooter->SetFireCommand(SHOOTERCOMMAND_TRUSSFAR); // change shootercommand
}
void SetPositionTrussFar::Execute() {

}
bool SetPositionTrussFar::IsFinished() {
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
void SetPositionTrussFar::End() {

}
void SetPositionTrussFar::Interrupted() {
	End();
}
