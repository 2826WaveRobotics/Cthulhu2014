#include "AutoMode_1_FireDriveToZone.h"
#include "DriveStraightByTime.h"
#include "../WaveConstants.h"
#include "WaveWait.h"
#include "FindTarget.h"
#include "SetPositionFire.h"
#include "SetPositionCloseFire.h"
#include "Fire.h"
#include "SetSpecificAngle.h"

#include "../Commands/ClawOpen.h"
#include "../Commands/FangOpen.h"
#include "../Commands/WinchPin.h"
#include "../Commands/WaveWait.h"
#include "../Commands/AutoWinch.h"
#include "../Commands/TuskClose.h"

AutoMode_1_FireDriveToZone::AutoMode_1_FireDriveToZone() {

}

AutoMode_1_FireDriveToZone::AutoMode_1_FireDriveToZone(bool facingLeftTarget)
{
	double volts = Robot::oi->getArduino2()->GetRawAxis(3);
	double angle = (volts*volts*volts*volts*-63.346) - (volts*volts*volts*155.05) - (volts*volts*143.7) - (239.56*volts) + 27.764;
	angle += 15;
	angle /= 215;
	angle *= 95; // good god i hope this works
	if(angle < 0)
		angle = 0;
	else if(angle > 95) 
		angle = 95;
	else
		angle = 45 ;

	//AddSequential(new SetSpecificAngle(angle));
	AddSequential(new SetSpecificAngle(30.0)); //35

	//Fire

	AddParallel(new DriveStraightByTime(0.6, 1.0));

	AddSequential(new ClawOpen());
	AddSequential(new WaveWait(0.2));
	AddSequential(new TuskClose());
	AddSequential(new FangOpen());
	AddSequential(new WinchPin(c_releasePin)); // release the firing pin
	AddSequential(new WaveWait(0.15)); // wait for firing to occur before resetting pin
	AddSequential(new WinchPin(c_setPin)); // reset the firing pin
	AddSequential(new AutoWinch()); // pull the winch back again and prepare to fire again
	AddSequential(new DriveStraightByTime(.75, -1.0));


}
