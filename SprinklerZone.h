#pragma once

#include <string>
#include "Hardware/HardwareInterface.h"

class SprinklerZone {
private:
    int zoneNumber;
    std::string name;
    int durationMinutes;
    HardwareInterface* hardware;

public:
    SprinklerZone(int zoneNumber, std::string name, int durationMinutes, HardwareInterface* hardware);

    void run();
};