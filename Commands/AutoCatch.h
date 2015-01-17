

#ifndef AUTOCATCH_H
#define AUTOCATCH_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoCatch: public Command {
public:
	AutoCatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
