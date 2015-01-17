#include "SetLightsPermissibleTrue.h"
#include <math.h>
#include "../WaveConstants.h"

SetLightsPermissibleTrue::SetLightsPermissibleTrue() {
	Requires(Robot::lights);
}
void SetLightsPermissibleTrue::Initialize() {
	Robot::lights->SetPermissible(true);
}
void SetLightsPermissibleTrue::Execute() {

}
bool SetLightsPermissibleTrue::IsFinished() {
	return true;
}
void SetLightsPermissibleTrue::End() {

}
void SetLightsPermissibleTrue::Interrupted() {
	End();
}
