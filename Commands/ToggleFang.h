#ifndef TOGGLEFANG_H
#define TOGGLEFANG_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ToggleFang: public Command {
public:
	ToggleFang();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
