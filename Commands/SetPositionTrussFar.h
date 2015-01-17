#ifndef SETPOSITIONTRUSSFAR_H
#define SETPOSITIONTRUSSFAR_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class SetPositionTrussFar: public Command {
public:
	SetPositionTrussFar();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
