#ifndef SETPOSITIONHOME_H
#define SETPOSITIONHOME_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetPositionHome: public Command {
public:
	SetPositionHome();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
