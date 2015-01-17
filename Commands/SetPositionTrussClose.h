#ifndef SETPOSITIONTRUSSCLOSE_H
#define SETPOSITIONTRUSSCLOSE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetPositionTrussClose: public Command {
public:
	SetPositionTrussClose();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
