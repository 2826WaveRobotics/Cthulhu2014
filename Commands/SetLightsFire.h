#ifndef SETLIGHTSFIRE_H
#define SETLIGHTSFIRE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetLightsFire: public Command {
public:
	SetLightsFire();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
