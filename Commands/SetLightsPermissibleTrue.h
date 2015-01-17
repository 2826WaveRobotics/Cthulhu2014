#ifndef SETLIGHTSPERMISSIBLETRUE_H
#define SETLIGHTSPERMISSIBLETRUE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetLightsPermissibleTrue: public Command {
public:
	SetLightsPermissibleTrue();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
