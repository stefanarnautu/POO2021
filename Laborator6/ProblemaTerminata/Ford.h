#pragma once
#include "Car.h"
class Ford :
    public Car
{
public:
    Ford();
    ~Ford();
  
    void printTot();
    float modifica_timp(int x,float lng);
};

