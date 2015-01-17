


#ifndef CHARYBDISCLOSE_H
#define CHARYBDISCLOSE_H


#include "Commands/Subsystem.h"
#include "../Robot.h"


class CharybdisClose: public Command {
public:
	CharybdisClose();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
