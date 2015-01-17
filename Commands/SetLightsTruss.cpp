#include "SetLightsTruss.h"
#include <math.h>
#include "../WaveConstants.h"

SetLightsTruss::SetLightsTruss() {
	Requires(Robot::lights);
}
void SetLightsTruss::Initialize() {
	Robot::lights->SetLightsTrussShot();
	Robot::lights->SetPermissible(false);
}
void SetLightsTruss::Execute() {

}
bool SetLightsTruss::IsFinished() {
	return true;
}
void SetLightsTruss::End() {

}
void SetLightsTruss::Interrupted() {
	End();
}
