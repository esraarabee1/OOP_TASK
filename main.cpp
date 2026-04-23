#include "CarFactory.h"

int main()
{

    Car car = CarFactory::createCar("mixedEngine");

    car.start();

    car.accelerate();
    car.accelerate();
    car.accelerate();
    car.accelerate();
    car.accelerate();
    car.accelerate();

    car.stop();

    return 0;
}