#include "TurretLoadRight.h"
#include <math.h>
namespace
{
    const double c_timoutSeconds = 1.5; //PID stops after this time
    
    //Turret Parameters
    const double c_positionTurret = 180; //degrees
    const double c_setpointTurretTolerance = 0.1; // volts
    
}
TurretLoadRight::TurretLoadRight() {
	Requires(Robot::turretWithPID);
}
// Called just before this Command runs the first time
void TurretLoadRight::Initialize() {
    Robot::turretWithPID->setAbsoluteAngle(c_positionTurret);
    SetTimeout(c_timoutSeconds);    
	
}
// Called repeatedly when this Command is scheduled to run
void TurretLoadRight::Execute() {
//    std::cout << "  Turret PID: Actual Volts: " << Robot::turretWithPID->turretAngleSensor->GetAverageVoltage() 
//            << ", Set Volts:" << Robot::turretWithPID->GetSetpoint() << ", Output: " << Robot::turretWithPID->getPIDOutput() << std::endl;
	
}
// Make this return true when this Command no longer needs to run execute()
bool TurretLoadRight::IsFinished() {
    bool withinTurretError = (fabs(Robot::turretWithPID->ReturnPIDInput() - Robot::turretWithPID->convertAngleToVolts(c_positionTurret, false)) < c_setpointTurretTolerance);
    bool jsMovement = (fabs(Robot::oi->getOperatorJoystick()->GetRawAxis(c_turretRotate)) > 0.5);
    
    if(withinTurretError || jsMovement || IsTimedOut())
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Called once after isFinished returns true
void TurretLoadRight::End() {
    //Stop trying to set the position once we've reached it.
//    std::cout << "     TurretLoadLeft::End() - Disabling Turret PID" << std::endl;
    Robot::turretWithPID->Disable();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurretLoadRight::Interrupted() {
    End();
}
