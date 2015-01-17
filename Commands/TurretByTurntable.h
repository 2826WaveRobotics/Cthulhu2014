#ifndef TURRETBYTURNTABLE_H
#define TURRETBYTURNTABLE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TurretByTurntable: public Command {
public:
	TurretByTurntable();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
private:
	int m_counter;
};

#endif
