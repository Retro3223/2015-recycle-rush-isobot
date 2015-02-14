#include "subsystems/arm.hpp"
#include <Commands/Subsystem.h>

namespace retrobotics {
namespace isobot {
namespace subsystems {
Arm::Arm()
    : Subsystem{"Arm"}, motor_{new Talon{3}} {

}

void Arm::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  //SetDefaultCommand(new MySpecialCommand());
}

void Arm::set(float value) {
  motor_->Set(value);
}

}// namespace subsystems
}  // namespace isobot
}  // namepsace retrobotics
