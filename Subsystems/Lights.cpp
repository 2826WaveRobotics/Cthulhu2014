#include "Lights.h"
#include "../Robotmap.h"
#include "../Commands/CollectBall.h"
namespace
{
bool on = true;
bool off = false;
}
Lights::Lights() : Subsystem("Lights") {
	m_light1 = RobotMap::lightsLight1;
	m_light2 = RobotMap::lightsLight2;
	m_light4 = RobotMap::lightsLight4;
	m_light8 = RobotMap::lightsLight8;
}

void Lights::InitDefaultCommand() {
	m_light1->Set(false);
	m_light2->Set(true);
	m_light4->Set(true);
}
void Lights::SetLightsReadyForFire() {
	m_light1->Set(true);
	m_light2->Set(true);
	m_light4->Set(false);
}
void Lights::SetLightsFire() {
	m_light1->Set(true);
	m_light2->Set(false);
	m_light4->Set(false);
}
void Lights::SetLightsDisable() {
	m_light1->Set(true);
	m_light2->Set(true);
	m_light4->Set(true);
}
void Lights::SetLightsAutoMode() {
	m_light1->Set(false);
	m_light2->Set(true);
	m_light4->Set(true);
}
void Lights::SetLightsNoArmNoShoot() {
	m_light1->Set(true);
	m_light2->Set(false);
	m_light4->Set(true);
}
void Lights::SetLightsNoArm() {
	m_light1->Set(false);
	m_light2->Set(false);
	m_light4->Set(true);
}
void Lights::SetLightsTrussShot() {
	m_light1->Set(false);
	m_light2->Set(true);
	m_light4->Set(false);
}
void Lights::SetPermissible(bool permissible)
{
	m_canChangeLights = permissible;
}
bool Lights::GetPermissible()
{
	return m_canChangeLights;
}
void Lights::DebugLights()
{
	std::cout << "Lights (1,2,4): " << m_light1 << m_light2 << m_light4 << std::endl;
}
