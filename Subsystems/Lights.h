#ifndef LIGHTS_H
#define LIGHTS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lights: public Subsystem {
private:
    DigitalOutput* m_light1;
    DigitalOutput* m_light2;
    DigitalOutput* m_light4;
    DigitalOutput* m_light8;
    
public:
		Lights();
	void InitDefaultCommand();
	void SetLightsReadyForFire();
    void SetLightsFire();
    void SetLightsDisable();
    void SetLightsAutoMode();
    void SetLightsNoArmNoShoot();
    void SetLightsNoArm();
    void SetLightsTrussShot();
    void SetPermissible(bool permissible);
    bool GetPermissible();
    void DebugLights();
    
private:
    bool m_canChangeLights;
};
#endif
