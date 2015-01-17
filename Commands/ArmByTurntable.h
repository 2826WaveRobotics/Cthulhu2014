#ifndef ARMBYTURNTABLE_H
#define ARMBYTURNTABLE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class ArmByTurntable: public Command {
public:
	ArmByTurntable();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
private:
	int m_counter;
};

#endif
