#include "FireSequence_OnePoint.h"
#include "../WaveConstants.h"
#include "../Commands/ClawOpen.h"
#include "../Commands/ClawClose.h"
#include "../Commands/FangOpen.h"
#include "../Commands/FangClose.h"
#include "../Commands/WinchPin.h"
#include "../Commands/WaveWait.h"
#include "../Commands/AutoWinch.h"
#include "../Commands/TuskClose.h"
#include "../Commands/CharybdisClose.h"
#include "../Commands/SetLightsFire.h"
#include "../Commands/SetLightsPermissibleTrue.h"

FireSequence_OnePoint::FireSequence_OnePoint() {

		AddSequential(new SetLightsFire()); // lights in fire mode
		AddSequential(new ClawClose()); // makes all the rollers open at once
		AddSequential(new TuskClose());
		AddSequential(new FangClose());
		AddSequential(new WinchPin(c_releasePin)); // release the firing pin
		AddSequential(new WaveWait(0.15)); // wait for firing to occur before resetting pin
		AddSequential(new WinchPin(c_setPin)); // reset the firing pin
		AddSequential(new CharybdisClose());
		AddSequential(new AutoWinch()); // pull the winch back again and prepare to fire again
		AddSequential(new SetLightsPermissibleTrue()); // can change the lights in Robot.cpp again

}
