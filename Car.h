#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include <iostream>
using namespace std;

class Car
{

private:
    Engine *engine;
    int speed;

public:
    Car(Engine *e)
    {
        engine = e;
        speed = 0;
    }

    void start()
    {

        speed = 0;

        engine->start();
    }

    void accelerate()
    {

        if (speed < 200)
        {

            speed += 20;

            engine->updateSpeed(speed);
        }
    }

    void brake()
    {

        if (speed > 0)
        {

            speed -= 20;

            engine->updateSpeed(speed);
        }
    }

    void stop()
    {

        while (speed > 0)
            brake();

        engine->stop();
    }

    void replaceEngine(Engine *newEngine)
    {
        engine = newEngine;
    }
};

#endif