#include "ToggleFang.h"
ToggleFang::ToggleFang() {
}
void ToggleFang::Initialize() {
    /*if(Robot::claw->isFangOpen())
    {
        Robot::claw->closeFang();
    }
    else
    {
        Robot::claw->openFang();
    }*/
    
    Robot::ballCollector->setRollerOutput(0);
    
}
void ToggleFang::Execute() {
    
}
bool ToggleFang::IsFinished() {
    return true;
}
void ToggleFang::End() {
    
}
void ToggleFang::Interrupted() {
}
