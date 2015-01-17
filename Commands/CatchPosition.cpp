
#include "CatchPosition.h"
#include <math.h>
CatchPosition::CatchPosition() {
	Requires(Robot::claw);
	Requires(Robot::ballCollector);
	Requires(Robot::armPitchWithPID);
	

}

void CatchPosition::Initialize() {
	SetTimeout(5);
	Robot::armPitchWithPID->setAbsoluteAngle(90);
	Robot::claw->openClaw();
	Robot::claw->closeFang();
	Robot::claw->closeTusk();
	Robot::ballCollector->setRollerOutput(1);


}
void CatchPosition::Execute() {

}
bool CatchPosition::IsFinished() {
	float c_setpointTurretTolerance=0.02;

	bool withinArmError = (fabs(Robot::armPitchWithPID->ReturnPIDInput() - Robot::armPitchWithPID->convertAngleToVolts(90, false)) < c_setpointTurretTolerance);
	//bool withinTurretError = (fabs(Robot::turretWithPID->ReturnPIDInput() - Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)) < c_setpointTurretTolerance);
	if((/*withinTurretError && */withinArmError) || IsTimedOut())
	{
		return true;
	}
	else
	{
		return false;
	}
}
void CatchPosition::End() {
	

}
void CatchPosition::Interrupted() {
	End();
}
