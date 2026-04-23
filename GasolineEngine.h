#ifndef GAS_ENGINE_H
#define GAS_ENGINE_H

#include "Engine.h"
#include <iostream>
using namespace std;

class GasolineEngine : public Engine
{

private:
    int engineSpeed;

public:
    GasolineEngine()
    {
        engineSpeed = 0;
    }

    void start() override
    {
        engineSpeed = 0;
        cout << "Gas Engine Started\n";
    }

    void stop() override
    {
        engineSpeed = 0;
        cout << "Gas Engine Stopped\n";
    }

    void increase() override
    {
        engineSpeed++;
    }

    void decrease() override
    {
        if (engineSpeed > 0)
            engineSpeed--;
    }

    void updateSpeed(int speed) override
    {
        engineSpeed = speed;
        cout << "Gas adjusted to " << speed << endl;
    }
};

#endif