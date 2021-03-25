#pragma once
#include "Car.h"
#include <stdlib.h>

class Circuit
{
    Car** masini;
    int nr_maxim_masini;
    int vreme;
    int lungime;

public:
    Circuit();
   ~Circuit();
    void SetLungime(int x);
    void SetVreme(int x);
    /*void AddCar(Car* masina);
   /* int Race();
    void ShowFinalRanks(); 
    void ShowWhoDidNotFinis();
    */
};

