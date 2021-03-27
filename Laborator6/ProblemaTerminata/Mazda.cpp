#include "Mazda.h"
#include <stdlib.h>
Mazda::Mazda()
{
	this->consum = 6;
	this->viteza = 175;
	this->capacitate_rez = 60;
	this->nume = (char*)(malloc(6));
	strcpy(this->nume, "Mazda");
}
Mazda::~Mazda()
{
	printf("Am apelat destructor pt Mazda\n");
}
void Mazda::printTot()
{
	printf("Mazda: consum %d, viteza %d, capacitate rezervor %d %s\n", this->consum, this->viteza, this->capacitate_rez, this->nume);
}
float Mazda::modifica_timp(int x,float lng)
{
	int v = this->viteza;
	int c = this->consum;
	if (x == 0 or x == 2)
	{
		v -= 10;
		if (x == 2)
		{
			c += 3;
			v -= 15;
		}
	}
	//printf("%f %f %d %d\n", lng, this->capacitate_rez - c * (lng / 100), v, c);
	if (this->capacitate_rez - c * (lng / 100) < 0)
		return 0;
	else
	{
		return lng / v;
	}
}
