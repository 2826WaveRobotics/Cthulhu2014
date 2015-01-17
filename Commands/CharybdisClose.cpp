#include "CharybdisClose.h"

CharybdisClose::CharybdisClose() {
	}
void CharybdisClose::Initialize() {
    Robot::claw->closeCharybdis();
    //Robot::ballCollector->setRollerOutput(0);
}
void CharybdisClose::Execute() {
	
}
bool CharybdisClose::IsFinished() {
	return true;
}
void CharybdisClose::End() {
	
}
void CharybdisClose::Interrupted() {
}
