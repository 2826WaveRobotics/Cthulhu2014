#ifndef SETPOSITIONONEPOINT_H
#define SETPOSITIONONEPOINT_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetPositionOnePoint: public Command {
public:
	SetPositionOnePoint();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
