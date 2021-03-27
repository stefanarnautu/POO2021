#include "Mercedes.h"
#include <stdlib.h>

Mercedes::Mercedes()
{
	this->consum = 7;
	this->viteza = 200;
	this->capacitate_rez = 70;
	this->nume = (char*)(malloc(9));
	strcpy(this->nume, "Mercedes");
}
Mercedes::~Mercedes()
{
	printf("Am apelat destructor pt Mercedes\n");
}
void Mercedes::printTot()
{
	printf("Mercedes: consum %d, viteza %d, capacitate rezervor %d %s\n", this->consum, this->viteza,this->capacitate_rez,this->nume);
}
float Mercedes::modifica_timp(int x,float lng)
{
	int v = this->viteza;
	int c = this->consum;
	if (x == 0 or x == 2)
	{
		v -= 15;
		if (x == 2)
		{
			c += 2;
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
