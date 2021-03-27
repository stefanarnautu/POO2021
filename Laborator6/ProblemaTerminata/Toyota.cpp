#include "Toyota.h"
#include <stdlib.h>
Toyota::Toyota()
{
	this->consum = 6;
	this->viteza = 180;
	this->capacitate_rez = 50;
	this->nume = (char*)(malloc(7));
	strcpy(this->nume, "Toyota");
}
Toyota::~Toyota()
{
	printf("Am apelat destructor pt Toyota\n");
}
void Toyota::printTot()
{
	printf("Toyota: consum %d, viteza %d, capacitate rezervor %d %s\n", this->consum, this->viteza, this->capacitate_rez, this->nume);
}
float Toyota::modifica_timp(int x,float lng)
{
	int v = this->viteza;
	int c = this->consum;
	if (x == 0 or x == 2)
	{
		v -= 20;
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
