#include "SetPositionGround.h"
#include <math.h>
#include "WaveWait.h"
#include "../WaveConstants.h"
namespace
{
const double c_timoutSeconds = 3.0; //PID stops after this time
//Arm Pitch Parameters
const double c_positionArm = 0; //degrees
const double c_setpointPitchTolerance = 0.02; // volts
const double c_turretCenterPosition = 90;
}
SetPositionGround::SetPositionGround() {
	Requires(Robot::armPitchWithPID);
	Requires(Robot::claw);
	Requires(Robot::ballCollector);
}
// Called just before this Command runs the first time
void SetPositionGround::Initialize() {
	Wait(.3);
	Robot::armPitchWithPID->setAbsoluteAngle(c_positionArm);
	SetTimeout(c_timoutSeconds);
	m_alreadyHaveBall = false;
	m_runOnce = false;
}
void SetPositionGround::Execute() {
	double c_setpointPitchTolerance = 0.02;
	bool withinArmError = (fabs(Robot::armPitchWithPID->ReturnPIDInput() - Robot::armPitchWithPID->convertAngleToVolts(c_positionArm, false)) < c_setpointPitchTolerance);
	if((withinArmError || IsTimedOut() || m_runOnce))
	{
		if(m_runOnce == false)
		{
			m_runOnce = true;
			Robot::armPitchWithPID->Disable();
			// Robot::turretWithPID->Disable();
			Robot::claw->closeFang();
			Robot::claw->openClaw();
			Robot::claw->openTusk();
			Robot::ballCollector->setRollerOutput(1);
		}
		bool ballIsThere = Robot::ballCollector->isGroundBallSensorTripped();
		if(ballIsThere && !m_alreadyHaveBall){
			m_alreadyHaveBall = true;
			Robot::claw->closeCharybdis();
			Robot::ballCollector->setRollerOutput(0);
		}
	}
}
bool SetPositionGround::IsFinished() {

	double c_setpointPitchTolerance = 0.02;
	bool withinArmError = (fabs(Robot::armPitchWithPID->ReturnPIDInput() - Robot::armPitchWithPID->convertAngleToVolts(c_positionArm, false)) < c_setpointPitchTolerance);
	if((withinArmError || IsTimedOut()))
	{
		return true;
	}

}
void SetPositionGround::End() {
	//Stop trying to set the position once we've reached it.
	Robot::armPitchWithPID->Disable();
	//Robot::turretWithPID->Disable();
}
void SetPositionGround::Interrupted() {
	End();
}
