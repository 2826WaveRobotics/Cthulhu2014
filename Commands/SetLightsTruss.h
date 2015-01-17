#ifndef SETLIGHTSTRUSS_H
#define SETLIGHTSTRUSS_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetLightsTruss: public Command {
public:
	SetLightsTruss();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
