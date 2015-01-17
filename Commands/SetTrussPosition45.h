#ifndef SETTRUSSPOSITION45_H
#define SETTRUSSPOSITION45_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetTrussPosition45: public Command {
public:
	SetTrussPosition45();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
