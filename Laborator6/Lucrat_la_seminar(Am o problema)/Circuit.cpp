#include "Circuit.h"
#include <iostream>

Circuit::Circuit()
{
	this->nr_maxim_masini = 100;
	this->vreme = 0;
	this->lungime = 0;
	this->masini = (Car**)(malloc(this->nr_maxim_masini * sizeof(Car*)));
}
Circuit::~Circuit()
{

}