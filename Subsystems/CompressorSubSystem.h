// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef COMPRESSORSUBSYSTEM_H
#define COMPRESSORSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class CompressorSubSystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Compressor* compressor;
	AnalogChannel* tankPressure;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	CompressorSubSystem();
	void InitDefaultCommand();
	
    void startCompressor();
    void stopCompressor();
    bool isEnabled();
    float getTankPSI();
};
#endif
