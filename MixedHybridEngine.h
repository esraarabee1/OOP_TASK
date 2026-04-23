#ifndef HYBRID_ENGINE_H
#define HYBRID_ENGINE_H

#include "Engine.h"
#include "GasolineEngine.h"
#include "ElectronicEngine.h"

class MixedHybridEngine : public Engine
{

private:
    GasolineEngine gasEngine;
    ElectronicEngine electricEngine;
    int currentSpeed = 0;

public:
    void start() override
    {
        electricEngine.start();
    }

    void stop() override
    {
        gasEngine.stop();
        electricEngine.stop();
    }

    void increase() override
    {
        updateSpeed(currentSpeed + 1);
    }

    void decrease() override
    {
        updateSpeed(currentSpeed - 1);
    }

    void updateSpeed(int speed) override
    {
        currentSpeed = speed;

        if (speed < 50)
        {
            electricEngine.updateSpeed(speed);
            cout << "Using Electric Engine\n";
        }
        else
        {
            gasEngine.updateSpeed(speed);
            cout << "Using Gasoline Engine\n";
        }
    }
};

#endif