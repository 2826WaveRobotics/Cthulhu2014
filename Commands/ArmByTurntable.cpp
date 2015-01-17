#include "ArmByTurntable.h"
#include <math.h>

ArmByTurntable::ArmByTurntable() {
	Requires(Robot::armPitchWithPID);
}
void ArmByTurntable::Initialize() {
	
}
void ArmByTurntable::Execute() {

	double volts = Robot::oi->getArduino2()->GetRawAxis(3);
	double angle;

	if((volts < .33) && (volts > -.99)) 
	{
		angle = (volts*volts*volts*volts*-63.346) - (volts*volts*volts*155.05) - (volts*volts*143.7) - (239.56*volts) + 27.764;

		angle += 15;
		angle /= 215;
		angle *= 95; // good god i hope this works
		
		if(angle < 0)
		{
			angle = 0;
		}
		else if(angle > 95) 
		{
			angle = 95;
		}	

	}
	else
	{
		angle = 45 ;
	}
	std::cout << "Arm angle: " << angle << std::endl;

	Robot::armPitchWithPID->setAbsoluteAngle(angle);

}
bool ArmByTurntable::IsFinished() {
	return false;
}
void ArmByTurntable::End() {

}
void ArmByTurntable::Interrupted() {
}
