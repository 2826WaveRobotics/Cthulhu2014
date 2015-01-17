#include "FeedMore.h"
#include <math.h>
#include "../WaveConstants.h"
namespace
{
const double c_timoutSeconds = 1.5; //PID stops after this time
const double c_positionArm = 37; //degrees
const double c_setpointPitchTolerance = 0.02; // volts
const double c_setpointTurretTolerance = 0.02; // volts
}
FeedMore::FeedMore() {
	Requires(Robot::armPitchWithPID);
	Requires(Robot::ballCollector);
	Requires(Robot::claw);
}
void FeedMore::Initialize() {
	Robot::claw->openClaw();
	Robot::armPitchWithPID->setAbsoluteAngle(c_positionArm);
	SetTimeout(c_timoutSeconds);
}
void FeedMore::Execute() {

}
bool FeedMore::IsFinished() {
	bool withinArmError = (fabs(Robot::armPitchWithPID->ReturnPIDInput() - Robot::armPitchWithPID->convertAngleToVolts(c_positionArm, false)) < c_setpointTurretTolerance);
	//bool withinTurretError = (fabs(Robot::turretWithPID->ReturnPIDInput() - Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)) < c_setpointTurretTolerance);
	if((/*withinTurretError && */withinArmError) || IsTimedOut())
	{
		Robot::ballCollector->setRollerOutput(-1);
		return true;
	}
	else
	{
		return false;
	}
}
void FeedMore::End() {

}
void FeedMore::Interrupted() {
	End();
}
