#include "SetLightsFire.h"
#include <math.h>
#include "../WaveConstants.h"

SetLightsFire::SetLightsFire() {
	Requires(Robot::lights);
}
void SetLightsFire::Initialize() {
	Robot::lights->SetLightsFire();
	Robot::lights->SetPermissible(false);
}
void SetLightsFire::Execute() {

}
bool SetLightsFire::IsFinished() {
	return true;
}
void SetLightsFire::End() {

}
void SetLightsFire::Interrupted() {
	End();
}
