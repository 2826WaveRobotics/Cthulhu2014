#ifndef WaveConstants_H
#define WaveConstants_H

enum{
	SHOOTERCOMMAND_ONEPOINT = 1,
	SHOOTERCOMMAND_TRUSSCLOSE,
	SHOOTERCOMMAND_TRUSSFAR,
	SHOOTERCOMMAND_LINE,
	SHOOTERCOMMAND_TRUSS45, // not used anymore
	SHOOTERCOMMAND_TRUSS60 // not used anymore
};


const double c_autoModeFireAtGoalAngle_Left = 45.0;
const double c_autoModeFireAtGoalAngle_Right = 135.0;

const bool c_setPin = false;
const bool c_releasePin = true;


const uint32_t c_triggerAxis = 3; //Left = 0 to 1, Right = -1 to 0

//Driver Joystick
const uint32_t c_tankDriveLeft = 2;
const uint32_t c_tankDriveRight = 5;
const uint32_t c_arcadeDriveLeft = 2;
const uint32_t c_arcadeDriveRight = 4;

//Operator Joystick
const uint32_t c_turretRotate = 1;
const uint32_t c_armPitchElevate = 5;
const uint32_t c_topRollerRun = 3;

//Operator Joystick

//Arm Angles
/*
const float c_armGroundPosition = 0.0; // 0
const float c_armShootPosition = 37.0; // 40 // line fire position
const float c_armClosePosition = 39; //36.5; // 45 // 35 
const float c_armUpPosition = 34.3;//38.0; // Changed by Connor 3/6 too lazy to write new command // 38
const float c_armOnePointPosition = 64;
const double c_setpointPitchTolerance = .01; //0.02; // Volts
*/

//Turret Range Angles, in Degrees
const float c_turretAngleMax = 200.0; 
const float c_turretAngleMin = 0.0;
const float c_pitchAngleMax = 95.0; 
const float c_pitchAngleMin = 0.0;

//Turret Angles
/*
const float c_turretCenterPosition = 90.0;
const float c_turretLeftPosition = 0.0;
const float c_turretRightPosition = 180.0;
*/


//namespace SensorOffsets
//{
//    //Plus or minus from 2.5V. ex. If 180degress on the robot is 2.4V, g_ArmVoltageDifference = -0.1
//    static double g_ArmVoltageDifference = 0.0;
//    //Plus or minus from 2.5V. ex. If 180degress on the robot is 2.4V, g_TurretVoltageDifference = -0.1
//    static double g_TurretVoltageDifference = 0.0;
//}


#endif //WaveConstants_H
