#pragma once

#include "HardwareInterface.h"

class SimulatedHardware : public HardwareInterface {
public:
    void setValve(int zone, bool on) override;
    bool isRaining() override;
};
