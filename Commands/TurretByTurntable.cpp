#include "TurretByTurntable.h"
#include <math.h>

TurretByTurntable::TurretByTurntable() {
	Requires(Robot::turretWithPID);
}
void TurretByTurntable::Initialize() {
	m_counter = 0;
}
void TurretByTurntable::Execute() {

	double volts = Robot::oi->getArduino2()->GetRawAxis(3);
	double angle;
	double offset = 12;

	if((volts < .33) && (volts > -.99)) 
	{
		angle = (volts*volts*volts*volts*-63.346) - (volts*volts*volts*155.05) - (volts*volts*143.7) - (239.56*volts) + 27.764;

		if(angle < -15)
		{
			angle = -15;
		}
		else if(angle > 200) 
		{
			angle = 200;
		}	

	}
	else
	{
		angle = 100 ;
	}
	angle -= offset;
	//std::cout << "Volts: " << volts << "\t\t" << "Turntable angle: " << angle << std::endl;

	Robot::turretWithPID->setAbsoluteAngle(angle);

}
bool TurretByTurntable::IsFinished() {
	return false;
}
void TurretByTurntable::End() {

}
void TurretByTurntable::Interrupted() {
}
