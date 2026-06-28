#include "SprinklerZone.h"
#include <iostream>
#include <thread>
#include <chrono>

SprinklerZone::SprinklerZone(int zoneNumber, std::string name, int durationMinutes, HardwareInterface* hardware)
    : zoneNumber(zoneNumber), name(name), durationMinutes(durationMinutes), hardware(hardware) {}

void SprinklerZone::run() {
    std::cout << "Starting " << name << std::endl;

    hardware->setValve(zoneNumber, true);

    std::this_thread::sleep_for(std::chrono::seconds(durationMinutes));

    hardware->setValve(zoneNumber, false);

    std::cout << "Finished " << name << std::endl;
}