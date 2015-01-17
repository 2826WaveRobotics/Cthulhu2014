#include "OI.h"

#include "SmartDashboard/SmartDashboard.h"
#include "Commands/ArmPitchByJoystick.h"
#include "Commands/AutoMode_1_FireDriveToZone.h"
#include "Commands/AutoMode_DoubleBallFront_DriveForward.h"
#include "Commands/AutoWinch.h"
#include "Commands/Auto_DriveStraight.h"
#include "Commands/Auto_DriveTurn.h"
#include "Commands/Auto_Turret.h"
#include "Commands/Autonomous_Command.h"
#include "Commands/CharybdisClose.h"
#include "Commands/CharybdisOpen.h"
#include "Commands/ClawClose.h"
#include "Commands/ClawOpen.h"
#include "Commands/CollectBall.h" // 
#include "Commands/DashboardUpdateCommand.h"
#include "Commands/DepositBall.h"
#include "Commands/DriveByJoystick.h"
#include "Commands/DriveShiftHigh.h"
#include "Commands/DriveShiftLow.h"
#include "Commands/DriveStraightByTime.h"
#include "Commands/FangClose.h"
#include "Commands/FangOpen.h"
#include "Commands/FindTarget.h"
#include "Commands/Fire.h"
#include "Commands/FireSequence.h"
#include "Commands/RunCollector.h"
#include "Commands/SetPositionCarry.h"
#include "Commands/SetPositionCloseFire.h"
#include "Commands/SetPositionFire.h"
#include "Commands/SetPositionGround.h"
#include "Commands/SetSpecificAngle.h"
#include "Commands/ToggleCharybdis.h"
#include "Commands/ToggleClaw.h"
#include "Commands/ToggleFang.h"
#include "Commands/ToggleDriveGear.h"
#include "Commands/ToggleTopRoller.h"
#include "Commands/ToggleTusk.h"
#include "Commands/ToggleWinchPin.h"
#include "Commands/Truss.h"
#include "Commands/TrussShotSequence.h"
#include "Commands/TurretByJoystick.h"
#include "Commands/TurretByTurntable.h"
#include "Commands/TurretLoadLeft.h"
#include "Commands/TurretLoadRight.h"
#include "Commands/TuskClose.h"
#include "Commands/TuskOpen.h"
#include "Commands/WatchForBall.h"
#include "Commands/WatchForGroundBall.h"
#include "Commands/WaveWait.h"
#include "Commands/WinchByJoystick.h"
#include "Commands/WinchPin.h"
#include "Commands/SetPositionOnePoint.h"
#include "Commands/SetTrussPosition45.h"
#include "Commands/SetTrussPosition60.h"
#include "Commands/CenterTurret.h"
#include "Commands/SetPositionTrussFar.h"
#include "Commands/SetPositionTrussClose.h"
#include "Commands/SetPositionLine.h"
#include "Commands/SetPositionHome.h"
#include "Commands/AutoCatch.h"
#include "Commands/CatchPosition.h"
#include "Commands/KillPID.h"
#include "Commands/FeedMore.h"

OI::OI() {

	driverJoystick = new Joystick(1);
	operatorJoystick = new Joystick(2);
	arduino1 = new Joystick(3);
	arduino2 = new Joystick(4);

	operator_Xbox_RJoy = new JoystickButton(operatorJoystick, 10); // pincer control GOOOD
	operator_Xbox_RJoy->WhenPressed(new ToggleClaw());
	operator_Xbox_LJoy = new JoystickButton(operatorJoystick, 9); // pincer control GOOOD
	operator_Xbox_LJoy->WhenPressed(new CenterTurret());
	operator_Xbox_Start = new JoystickButton(operatorJoystick, 8); // all close GOOD
	operator_Xbox_Start->WhenPressed(new CharybdisClose());
	operator_Xbox_Select = new JoystickButton(operatorJoystick, 7); // manual winch GOOD
	operator_Xbox_Select->WhileHeld(new WinchByJoystick());
	operator_Xbox_Y = new JoystickButton(operatorJoystick, 4); // arm preset 65
	operator_Xbox_Y->WhenPressed(new SetPositionFire());
	operator_Xbox_X = new JoystickButton(operatorJoystick, 3); // ground GOOD
	operator_Xbox_X->WhenPressed(new SetPositionGround());
	operator_Xbox_B = new JoystickButton(operatorJoystick, 2); // 39(ish) angle
	operator_Xbox_B->WhenPressed(new SetPositionCloseFire());
	operator_Xbox_A = new JoystickButton(operatorJoystick, 1);
	operator_Xbox_A->WhenPressed(new SetPositionCarry());
	operator_Xbox_RightBumper = new JoystickButton(operatorJoystick, 6);
	operator_Xbox_RightBumper->WhenPressed(new RunCollector());
	operator_Xbox_LeftBumper = new JoystickButton(operatorJoystick, 5);
	operator_Xbox_LeftBumper->WhenPressed(new DepositBall());
	//look for intake roller in... bumpers

	//right trigger = long shot open and fire
	//left trigger = short shot / truss shot from before

	driver_Xbox_RB = new JoystickButton(driverJoystick, 6);
	driver_Xbox_RB->WhenPressed(new SetPositionGround());
	driver_Xbox_LB = new JoystickButton(driverJoystick, 5);
	driver_Xbox_LB->WhileHeld(new DepositBall());
	driver_Xbox_X = new JoystickButton(driverJoystick, 3);
	driver_Xbox_X->WhenPressed(new TurretLoadLeft());
	driver_Xbox_B = new JoystickButton(driverJoystick, 2);
	driver_Xbox_B->WhenPressed(new TurretLoadRight());
	//drop down ball casters other trigger from shift

	arduino_1 = new JoystickButton(arduino1, 6);
	arduino_1->WhenPressed(new CharybdisOpen());
	arduino_2 = new JoystickButton(arduino1, 7);
	arduino_2->WhenPressed(new CharybdisClose());
	arduino_3 = new JoystickButton(arduino1, 8);
	arduino_3->WhenPressed(new RunCollector());
	arduino_4 = new JoystickButton(arduino1, 9);
	arduino_4->WhenPressed(new DepositBall());
	arduino_5 = new JoystickButton(arduino1, 5);
	arduino_5->WhenPressed(new KillPID());
	//	arduino_6 = new JoystickButton(arduino1, 4);
	//	arduino_6->WhenPressed(new AutoCatch());
	arduino_7 = new JoystickButton(arduino1, 3);
	arduino_7->WhenPressed(new ToggleFang());
	arduino_8 = new JoystickButton(arduino1, 2);
	arduino_8->WhenPressed(new CharybdisClose());
	arduino_9 = new JoystickButton(arduino2, 1);
	arduino_9->WhenPressed(new DepositBall());
	arduino_10 = new JoystickButton(arduino2, 3);
	arduino_10->WhenPressed(new FeedMore());
	arduino_11 = new JoystickButton(arduino2, 5);
	arduino_11->WhenPressed(new WinchByJoystick());
	arduino_12 = new JoystickButton(arduino2, 7);
	arduino_12->WhenPressed(new SetPositionGround());
	arduino_13 = new JoystickButton(arduino2, 2);
	arduino_13->WhenPressed(new ToggleTusk());
	arduino_14 = new JoystickButton(arduino2, 4);
	arduino_14->WhenPressed(new ToggleClaw());
	arduino_15 = new JoystickButton(arduino2, 6);
	arduino_15->WhenPressed(new ToggleFang());
	arduino_16 = new JoystickButton(arduino2, 8);
	arduino_16->WhileHeld(new RunCollector());
	arduino_fire = new JoystickButton(arduino1, 11);
	arduino_fire->WhenPressed(new Fire());

}
double OI::getOperatorTurnTable() {
	return DriverStation::GetInstance()->GetAnalogIn(1);
}
Joystick* OI::getOperatorJoystick() {
	return operatorJoystick;
}
Joystick* OI::getDriverJoystick() {
	return driverJoystick;
}
Joystick* OI::getArduino1() {
	return arduino1;
}
Joystick* OI::getArduino2() {
	return arduino2;
}
int OI::getMatrixNumber() {
	DriverStation *ds = DriverStation::GetInstance();
	bool row1 = ds->GetDigitalIn(5);
	bool row2 = ds->GetDigitalIn(6);
	bool row3 = ds->GetDigitalIn(7);
	bool row4 = ds->GetDigitalIn(8);
	bool column1 = ds->GetDigitalIn(9);
	bool column2 = ds->GetDigitalIn(10);
	bool column3 = ds->GetDigitalIn(11);
	bool column4 = ds->GetDigitalIn(12);
	if(/*row1 && */column1){
		//std::cout << "Button 1" << std::endl;
		return 1;
	}
	else if(/*row1 && */column2){
		//std::cout << "Button 2" << std::endl;
		return 2;
	}
	else if(row1 && column3){
		//std::cout << "Button 3" << std::endl;
		return 3;
	}
	else if(row1 && column4){
		//std::cout << "Button 4" << std::endl;
		return 4;
	}
	else if(row2 && column1){
		// std::cout << "Button 5" << std::endl;
		return 5;
	}
	else if(row2 && column2){
		//std::cout << "Button 6" << std::endl;
		return 6;
	}
	else if(row2 && column3){
		// std::cout << "Button 7" << std::endl;
		return 7;
	}
	else if(row2 && column4){
		// std::cout << "Button 8" << std::endl;
		return 8;
	}
	else if(row3 && column1){
		// std::cout << "Button 9" << std::endl;
		return 9;
	}
	else if(row3 && column2){
		//  std::cout << "Button 10" << std::endl;
		return 10;
	}
	else if(row3 && column3){
		//  std::cout << "Button 11" << std::endl;
		return 11;
	}
	else if(row3 && column4){
		// std::cout << "Button 12" << std::endl;
		return 12;
	}
	else if(row4 && column1){
		//  std::cout << "Button 13" << std::endl;
		return 13;
	}
	else if(row4 && column2){\
		// std::cout << "Button 14" << std::endl;
		return 14;
	}
	else if(row4 && column3){
		// std::cout << "Button 15" << std::endl;
		return 15;
	}
	else if(row4 && column4){
		//  std::cout << "Button 16" << std::endl;
		return 16;
	}
	else{
		return 0;
	}
}
int OI::getAutoMode(){
	//	int gray1 = arduino2->GetRawButton(5);
	//	int gray2 = arduino2->GetRawButton(6);
	//	int gray4 = arduino2->GetRawButton(7);
	//	int gray8 = arduino2->GetRawButton(8);
	//	int bin8 = gray8;
	//	int bin4 = (gray4 == bin8 ? 0 : 1);
	//	int bin2 = (gray2 == bin4 ? 0 : 1);
	//	int bin1 = (gray1 == bin2 ? 0 : 1);
	//    
	//    //std::cout << "Gray: " << gray8 << gray4 << gray2 << gray1 << " \t Binary: " << bin8 << bin4 << bin2 << bin1 << std::endl;
	//    
	//int autoMode = ((bin8 * 8) + (bin4 * 4) + (bin2 * 2) + (bin1 * 1));
	//    int autoMode = 0;
	//    int bin1 =arduino2->GetRawButton(6);
	//    int bin2 =arduino2->GetRawButton(7);
	//    int bin4 =arduino2->GetRawButton(8);
	//    int autoMode = ((bin4 * 4) + (bin2 * 2) + (bin1 * 1));
	if(arduino1->GetRawButton(12))
	{
		return 2;
	}
	else
	{
		return 1;
	}

}
void OI::debugArduino(){
	std::cout << (arduino1->GetRawButton(6)); //1
	std::cout << (arduino1->GetRawButton(7)); //1
	std::cout << (arduino1->GetRawButton(8)); //1
	std::cout << (arduino1->GetRawButton(9)); //1
	std::cout << (arduino1->GetRawButton(5)); //1
	std::cout << (arduino1->GetRawButton(4)); //1
	std::cout << (arduino1->GetRawButton(3)); //1
	std::cout << (arduino1->GetRawButton(2)); //1
	std::cout << (arduino2->GetRawButton(1)); //1
	std::cout << (arduino2->GetRawButton(3));//1
	std::cout << (arduino2->GetRawButton(5));//1
	std::cout << (arduino2->GetRawButton(7));//1
	//    std::cout << (arduino1->GetRawButton(13));
	//    std::cout << (arduino1->GetRawButton(33));
	std::cout << (arduino2->GetRawButton(2)); //2
	std::cout << (arduino2->GetRawButton(4)); //2
	std::cout << (arduino2->GetRawButton(6)); //2
	std::cout << (arduino2->GetRawButton(8)); //2
	std::cout << (arduino1->GetRawButton(11)); //2
	std::cout << (arduino1->GetRawButton(12)); //2

	//	std::cout << (arduino2->GetRawButton(7)); //2
	//	std::cout << (arduino2->GetRawButton(8)); //2
	//	std::cout << (arduino2->GetRawButton(9)); //2
	//	std::cout << (arduino2->GetRawButton(10)); //2
	//	std::cout << (arduino2->GetRawButton(11)); //2
	//	std::cout << (arduino2->GetRawButton(12)); //2
	//    std::cout << (arduino1->GetRawButton(46));
	std::cout << "\t" << getAutoMode() << "\t";
	//	std::cout << arduino1->GetRawAxis(1);
	//	std::cout << arduino1->GetRawAxis(2);
	//	std::cout << arduino1->GetRawAxis(3);
	//	std::cout << arduino1->GetRawAxis(4);
	//	std::cout << arduino2->GetRawAxis(1);
	//	std::cout << arduino2->GetRawAxis(2);
	std::cout << arduino2->GetRawAxis(3);
	//	std::cout << arduino2->GetRawAxis(4);
	std::cout << "\t" << 180-(((arduino2->GetRawAxis(3)+.85)/.95)*180);
	std::cout << endl;
}
