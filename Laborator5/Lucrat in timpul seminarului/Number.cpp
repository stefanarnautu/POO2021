#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <stdlib.h> 

Number::Number(const char* value, int base)
{
	this->valoare_tip_char = (char*)(malloc(strlen(value)));
	strcpy(this->valoare_tip_char,value);
	this->baza = base;
}

Number::Number(const Number& ex)
{
	this->valoare_tip_char = (char*)(malloc(strlen(ex.valoare_tip_char)));
	strcpy(this->valoare_tip_char,ex.valoare_tip_char);
	this->baza = ex.baza;
}

Number::Number(const Number&& ex)
{
	this->valoare_tip_char = (char*)(malloc(strlen(ex.valoare_tip_char)));
	strcpy(this->valoare_tip_char, ex.valoare_tip_char);
	this->baza = ex.baza;
}

int  Number::GetDigitsCount()
{
	return strlen(this->valoare_tip_char);
}

int  Number::GetBase()
{
	return this->baza;
}

void Number::Print()
{
	printf("%s\n", this->valoare_tip_char);
}

/*Number::~Number()
{   
    //Nu stiu exact de ce nu functioneaza (cred ca omit ceva, dar nu imi dau seama ce)
	delete[] valoare_tip_char;
}*/

int Number::operator[](int index)
{
	char s=this->valoare_tip_char[index];
	
	return s;
	
}

/*int operator+(Number nr, int valoare)
{
	char* nrr;
	strcpy(nrr,nr.valoare_tip_char);
	//transformare in baza 10
	lungime = strlen(nrr);
	while (lungime != 0)
	{
		int c;
		char cifra;
		cifra = nrr[lungime - 1];
		if (cifra == 'A')
		{
			c = 10;
		}
		else if (cifra == 'B')
		{
			c = 11;
		}
		else if (cifra == 'C')
		{
			c = 12;
		}
		else if (cifra == 'D')
		{
			c = 13;
		}
		else if (cifra == 'E')
		{
			c = 14;
		}
		else if (cifra == 'F')
		{
			c = 15;
		}
		else c = atoi(cifra);

		printf("%d\n", c);
	}
}*/
Number& Number::operator=(const Number&& ex)
{
	this->valoare_tip_char = (char*)(realloc(this->valoare_tip_char,strlen(ex.valoare_tip_char)));
	strcpy(this->valoare_tip_char,ex.valoare_tip_char);
	return *this;
}