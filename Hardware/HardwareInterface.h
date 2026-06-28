// HardwareInterface.h

#pragma once

class HardwareInterface {
public:
    virtual void setValve(int zone, bool on) = 0;
    virtual bool isRaining() = 0;

    virtual ~HardwareInterface() {}
};