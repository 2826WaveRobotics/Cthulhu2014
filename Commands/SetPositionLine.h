#ifndef SETPOSITIONLINE_H
#define SETPOSITIONLINE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetPositionLine: public Command {
public:
	SetPositionLine();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
