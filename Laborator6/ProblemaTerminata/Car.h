#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
class Car
{
protected:
	int capacitate_rez;
	int viteza;
	int consum;
	
public:
	char* nume;
	virtual void printTot() = 0;
	virtual float modifica_timp(int x,float lng) = 0;
};

