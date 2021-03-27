#pragma once
#include "Car.h"
class Mazda :
    public Car
{
public:
    Mazda();
    ~Mazda();
   
    void printTot();
    float modifica_timp(int x,float lng);
};

