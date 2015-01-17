#include "Fire.h"
#include "FireSequence_Line.h"
#include "FireSequence_TrussClose.h"
#include "FireSequence_TrussFar.h"
#include "FireSequence_OnePoint.h"
Fire::Fire() {
	Requires(Robot::shooter);
	Requires(Robot::claw);
	m_fireCommand_line = new FireSequence_Line();
	m_fireCommand_trussFar = new FireSequence_TrussFar();
	m_fireCommand_trussClose = new FireSequence_TrussClose();
	m_fireCommand_onePoint = new FireSequence_OnePoint();
}
void Fire::Initialize() {
	int fireCommand = Robot::shooter->GetFireCommand();
	std::cout << "Calling Fire->Start()...Shooter Command: " << fireCommand << std::endl;
	switch(fireCommand)
	{
	case SHOOTERCOMMAND_LINE:
		m_fireCommand_line->Start();
		break;

	case SHOOTERCOMMAND_TRUSSFAR:
		m_fireCommand_trussFar->Start();
		break;

	case SHOOTERCOMMAND_TRUSSCLOSE:
	default:
		m_fireCommand_trussClose->Start();
		break;


	case SHOOTERCOMMAND_ONEPOINT:
		m_fireCommand_onePoint->Start();
		break;

	}
}
void Fire::Execute() {

}
bool Fire::IsFinished() {
	return true;
}
void Fire::End() {
	//	delete m_fireCommand;
	//	m_fireCommand = NULL;
}
void Fire::Interrupted() {
}
