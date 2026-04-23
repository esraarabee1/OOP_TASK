#ifndef FACTORY_H
#define FACTORY_H

#include "Car.h"
#include "GasolineEngine.h"
#include "ElectronicEngine.h"
#include "MixedHybridEngine.h"

class CarFactory
{

public:
    static Car createCar(string type)
    {

        if (type == "gas")
            return Car(new GasolineEngine());

        if (type == "electric")
            return Car(new ElectronicEngine());

        return Car(new MixedHybridEngine());
    }
};

#endif