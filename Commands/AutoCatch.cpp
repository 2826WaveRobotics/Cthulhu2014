
#include "AutoCatch.h"
AutoCatch::AutoCatch() {
	Requires(Robot::claw);
	Requires(Robot::ballCollector);
}

void AutoCatch::Initialize() {
	std::cout << "Initializing AutoCatch" << std::endl;
	SetTimeout(15);
	Robot::claw->openClaw();
	Robot::claw->openFang();
	Robot::claw->closeTusk();
	Robot::ballCollector->setRollerOutput(1);
}
void AutoCatch::Execute() {

}
bool AutoCatch::IsFinished() {
	bool seeBall=Robot::ballCollector->catchBallSensor->Get();
	if(IsTimedOut() || seeBall)
	{
		std::cout << "Finishing AutoCatch" << std::endl;
		Robot::claw->closeClaw();
		Robot::claw->closeFang();
		Robot::claw->closeTusk();
		Robot::ballCollector->setRollerOutput(0);
		return true;
	}
	else
	{
		return false;
	}
}
void AutoCatch::End() {




}
void AutoCatch::Interrupted() {
}
