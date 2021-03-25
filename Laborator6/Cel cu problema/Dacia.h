#pragma once
#include "Car.h"
#include <stdlib.h>
class Dacia :
    public Car
{
    int viteza;
    int consum;
   public:
    Dacia();
    ~Dacia();
    void printTot();
};

