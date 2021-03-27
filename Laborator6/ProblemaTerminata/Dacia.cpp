#include "Dacia.h"
#include <stdlib.h>

Dacia::Dacia()
{
	this->consum = 5;
	this->viteza = 160;
	this->capacitate_rez = 40;
	this->nume = (char*)(malloc(6));
	strcpy(this->nume, "Dacia");
}
void Dacia::printTot()
{
	printf("Dacia: consum %d, viteza %d, capacitate rezervor %d %s\n", this->consum, this->viteza, this->capacitate_rez,this->nume);

}
Dacia::~Dacia()
{
	printf("Am apelat desctructor pt Dacia\n");
}
float Dacia::modifica_timp(int x,float lng)
{
	int v = this->viteza;
	int c = this->consum;
	if (x == 0 or x == 2)
	{
		v -= 20;
		if (x == 2)
		{
			c += 2;
			v -= 25;
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
