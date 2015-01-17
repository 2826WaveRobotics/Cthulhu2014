#ifndef CENTERTURRET_H
#define CENTERTURRET_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../WaveConstants.h"

class CenterTurret: public Command {
public:
	CenterTurret();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
