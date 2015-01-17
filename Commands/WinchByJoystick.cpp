#include "WinchByJoystick.h"
#include "../WaveConstants.h"
WinchByJoystick::WinchByJoystick() {
	Requires(Robot::shooter);
}
void WinchByJoystick::Initialize() {
	//	std::cout << "Initializing 100% MANUALLY" << std::endl;
	if(Robot::shooter->brandingIronSensor->Get())
	{
		Robot::shooter->SetMotorOutput(-1); // -1
	}
}
void WinchByJoystick::Execute() {
}
bool WinchByJoystick::IsFinished() {
	bool isBrandingBack = !Robot::shooter->brandingIronSensor->Get();
	if(Robot::oi->getArduino2()->GetRawButton(5) == false ||  isBrandingBack) // pressed
	{
		return true;
	}
	else
	{
		return false;
	}
}
// Called once after isFinished returns true
void WinchByJoystick::End() {
	Robot::shooter->SetMotorOutput(0); // stop
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WinchByJoystick::Interrupted() {
	End();
}
