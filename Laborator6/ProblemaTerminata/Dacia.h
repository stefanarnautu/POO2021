#pragma once
#include "Car.h"
class Dacia :
    public Car
{
   public:
    Dacia();
    ~Dacia();

    void printTot();
    float modifica_timp(int x,float lng);
};

