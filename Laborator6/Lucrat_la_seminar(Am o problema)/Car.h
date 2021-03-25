#pragma once
#include <stdio.h>

class Car
{
protected:
	Car();
	~Car();
public:
	virtual void printTot() = 0;
};

