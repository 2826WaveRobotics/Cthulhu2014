#include "Auto_ShootDrive.h"

#include "DriveStraightByTime.h"
#include "../WaveConstants.h"
#include "WaveWait.h"
#include "Fire.h"
#include "SetSpecificAngle.h"
#include "SetPositionGround.h"
#include "ClawOpen.h"
#include "FangOpen.h"
#include "WinchPin.h"
#include "WaveWait.h"
#include "AutoWinch.h"
#include "TuskClose.h"
#include "TuskOpen.h"
#include "FangClose.h"
#include "KillPID.h"


Auto_ShootDrive::Auto_ShootDrive() {
	AddParallel(new KillPID()); // ghost turret problem
	
	AddSequential(new SetSpecificAngle(33)); // 36 original // 38
		AddSequential(new WaveWait(0.25));

		//Fire
		AddSequential(new ClawOpen());
		AddSequential(new TuskClose());
		AddSequential(new FangOpen());

		AddSequential(new WaveWait(.1));

		AddSequential(new WinchPin(c_releasePin)); // release the firing pin
		AddSequential(new WaveWait(.15));
		AddSequential(new WinchPin(c_setPin)); // reset the firing pin
		AddSequential(new AutoWinch()); // pull the winch back again and prepare to fire again

		//Pick up second Ball
		AddSequential(new TuskOpen());
		AddSequential(new FangClose());

		AddSequential(new DriveStraightByTime(1.0, 0.70));
		
}
		
