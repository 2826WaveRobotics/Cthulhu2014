#ifndef SETTRUSSPOSITION60_H
#define SETTRUSSPOSITION60_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetTrussPosition60: public Command {
public:
	SetTrussPosition60();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
