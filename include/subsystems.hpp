#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor intake(19);

inline pros::Controller controller(pros::E_CONTROLLER_MASTER);
inline ez::Piston tilter('H');
inline ez::Piston spike('D');
inline ez::Piston intakelift('C');
inline ez::Piston dinomech('E');
inline pros::Vision colorsorter(3);
inline pros::Rotation rotator(4);
inline pros::Motor lift (-17);
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');