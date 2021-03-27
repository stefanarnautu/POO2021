#pragma once
#include "Car.h"
class Toyota :
    public Car
{
    public:
        Toyota();
        ~Toyota();
      
        void printTot();
        float modifica_timp(int x,float lng);
};

