#include <iostream>
#include "SimulatedHardware.h"

void SimulatedHardware::setValve(int zone, bool on)
{
    std::cout << "Zone " << zone << (on ? " ON" : " OFF") << std::endl;
}

bool SimulatedHardware::isRaining()
{
    return false;
}