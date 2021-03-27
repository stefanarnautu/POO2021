#pragma once
#include "Car.h"
class Mercedes :
    public Car
{
public:
    Mercedes();
    ~Mercedes();
    
    void printTot();
    float modifica_timp(int x,float lng);
};

