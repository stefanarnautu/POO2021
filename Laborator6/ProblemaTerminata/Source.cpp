#include "Circuit.h"
#include "Weather.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mazda.h"
#include "Mercedes.h"
#include "Ford.h"
#include <iostream>

using namespace std;

int main()
{   
	Dacia dd;
	Toyota tt;
	Circuit c;
	
	c.SetLungime(500);
	c.SetVreme(vremea::snow);
	//c.printff();
	c.AddCar(&dd);
	c.AddCar(&tt);
	c.AddCar(new Mercedes());
	c.AddCar(new Ford());
	c.AddCar(new Mazda());
	//c.afiseazaTot();
	c.Race();
	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.
	c.ShowWhoDidNotFinis(); // it is possible that some cars don't have enough fuel to finish the circuit
	system("pause");
	return 0;
}