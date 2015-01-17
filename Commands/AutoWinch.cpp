#include "AutoWinch.h"
AutoWinch::AutoWinch() {
	Requires(Robot::shooter);
}

void AutoWinch::Initialize() {

	bool sensorTripped = !Robot::shooter->brandingIronSensor->Get();
	std::cout << "AutoWinch: " << sensorTripped;

	if(sensorTripped == false){
		Robot::shooter->SetMotorOutput(-1); // .25
		SetTimeout(2.0);
		std::cout << "\t Auto Pulling Branding Iron" << std::endl;
	}
	else
	{
		std::cout << "Auto Winch: Doing nothing" << std::endl;

	}
}
void AutoWinch::Execute() {
	
}
bool AutoWinch::IsFinished() {
	bool isBrandingBack = !Robot::shooter->brandingIronSensor->Get();


	if(isBrandingBack || IsTimedOut()){ // sensor tripped or timed out
		return true; // back all the way
		std::cout << "Branding Iron is back all the way" << std::endl;
	}
	else{
		return false; // keep going
	}
}
void AutoWinch::End() {
	Robot::shooter->SetMotorOutput(0);
}
void AutoWinch::Interrupted() {
	End();
}
