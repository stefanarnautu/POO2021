#pragma once
#include "Car.h"
#include <stdlib.h>

class Circuit
{
    Car** masini;
    int nr_maxim_masini;
    int vreme;
    int lungime;
    int currentCar;
    float pozitii_finale[100];
    char topul[100][10];

public:
    Circuit();
   ~Circuit();
    void SetLungime(int x);
    void SetVreme(int x);
    void AddCar(Car* masina);
    void Race();
    void ShowFinalRanks(); 
    void ShowWhoDidNotFinis();
    void afiseazaTot();
    void printff();
};

