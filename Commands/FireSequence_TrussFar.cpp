#include "FireSequence_TrussFar.h"
#include "../WaveConstants.h"
#include "../Commands/ClawOpen.h"
#include "../Commands/FangOpen.h"
#include "../Commands/WinchPin.h"
#include "../Commands/WaveWait.h"
#include "../Commands/AutoWinch.h"
#include "../Commands/TuskClose.h"
#include "../Commands/CharybdisClose.h"

FireSequence_TrussFar::FireSequence_TrussFar() {

		AddSequential(new ClawOpen()); // makes all the rollers open at once
		AddSequential(new TuskClose());
		AddSequential(new FangOpen());
		AddSequential(new WinchPin(c_releasePin)); // release the firing pin
		AddSequential(new WaveWait(0.15)); // wait for firing to occur before resetting pin
		AddSequential(new WinchPin(c_setPin)); // reset the firing pin
		AddSequential(new CharybdisClose());
		AddSequential(new AutoWinch()); // pull the winch back again and prepare to fire again

}
