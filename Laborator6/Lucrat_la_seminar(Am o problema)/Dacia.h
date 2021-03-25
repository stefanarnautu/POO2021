#pragma once
#include "Car.h"
class Dacia :
    public Car
{
    int viteza;
    float consum;
   public:
    Dacia();
    ~Dacia();
    void printTot();
};

