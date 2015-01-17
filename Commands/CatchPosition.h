

#ifndef CatchPosition_H
#define CatchPosition_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class CatchPosition: public Command {
public:
	CatchPosition();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
