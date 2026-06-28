#include <iostream>
#include "SprinklerZone.h"
#include "Hardware/SimulatedHardware.h"

int main() {
    SimulatedHardware hardware;

    SprinklerZone frontYard(0, "Front Yard", 3, &hardware);
    SprinklerZone backYard(1, "Back Yard", 4, &hardware);
    SprinklerZone garden(2, "Garden", 2, &hardware);

    std::cout << "Starting sprinkler system...\n\n";

    frontYard.run();
    backYard.run();
    garden.run();

    std::cout << "\nSprinkler schedule complete.\n";

    return 0;
}