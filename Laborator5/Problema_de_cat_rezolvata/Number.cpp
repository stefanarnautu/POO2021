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

Number operator+(Number nr, int valoare)
{
	char* nrr;
	nrr = (char*)(malloc(strlen(nr.valoare_tip_char)));
	strcpy(nrr,nr.valoare_tip_char);
	int lungime = strlen(nrr);
	char cifra;
	cifra = (char)(malloc(1));
	int c = 0,numarul_in_b10=0,p=1;
	
	while (lungime != 0)
	{
		cifra=nrr[lungime - 1];

		if (cifra > 'a' and cifra < 'z')
			cifra = cifra - 32;
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
		else {
			c = cifra-48;
		     }
		numarul_in_b10 += p * c;
		p = p * nr.baza;
		lungime--;	
		
	}
	numarul_in_b10 += valoare;
	char* valoare_finala;
	valoare_finala = (char*)(malloc(p/nr.baza+1));	
	_itoa(numarul_in_b10,(char *)valoare_finala,10);
	strcpy(nr.valoare_tip_char, valoare_finala);
	nr.baza = 10;

	return nr;
}

Number operator-(Number nr, int valoare)
{
	char* nrr;
	nrr = (char*)(malloc(strlen(nr.valoare_tip_char)));
	strcpy(nrr, nr.valoare_tip_char);
	int lungime = strlen(nrr);
	char cifra;
	cifra = (char)(malloc(1));
	int c = 0, numarul_in_b10 = 0, p = 1;

	while (lungime != 0)
	{
	cifra = nrr[lungime - 1];
	if (cifra > 'a' and cifra < 'z')
		cifra = cifra - 32;
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
		else {
			c = cifra - 48;
		}

		numarul_in_b10 += p * c;
		p = p * nr.baza;
		lungime--;
	}

	numarul_in_b10 -= valoare;

	char* valoare_finala;
	valoare_finala = (char*)(malloc(p / nr.baza + 1));
	_itoa(numarul_in_b10, (char*)valoare_finala, 10);
	strcpy(nr.valoare_tip_char, valoare_finala);
	nr.baza = 10;

	return nr;
}

Number& Number::operator=(const Number&& ex)
{
	strcpy(this->valoare_tip_char,ex.valoare_tip_char);
	this->baza = ex.baza;
	return *this;
}

int trs_baza(char* valoare, int baza)
{
	//printf("%s valoarea, %d baza\n", valoare, baza);


	char* nrr;
	nrr = (char*)(malloc(strlen(valoare)));
	strcpy(nrr, valoare);
	int lungime = strlen(nrr);
	char cifra;
	cifra = (char)(malloc(1));
	int c = 0, numarul_in_b10 = 0, p = 1;

	while (lungime != 0)
	{
		cifra = nrr[lungime - 1];
		if (cifra > 'a' and cifra < 'z')
			cifra = cifra - 32;

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
		else {
			c = cifra - 48;
		}

		numarul_in_b10 += p * c;
		p = p * baza;
		lungime--;
	}


	return numarul_in_b10;
}

Number Number::operator+(Number ex)
{

	int a=trs_baza(this->valoare_tip_char, this->baza);
	int b=trs_baza(ex.valoare_tip_char, ex.baza);
	int baza_finala=0;
	if (this->baza > ex.baza)
		baza_finala = this->baza;
	else baza_finala = ex.baza;

	_itoa(a + b, this->valoare_tip_char, baza_finala);
	this->baza = baza_finala;
	return *this;
}

Number Number::operator-(Number ex)
{

	int a = trs_baza(this->valoare_tip_char, this->baza);
	int b = trs_baza(ex.valoare_tip_char, ex.baza);
	int baza_finala = 0;
	if (this->baza > ex.baza)
		baza_finala = this->baza;
	else baza_finala = ex.baza;
	
	int aux = 0;
	if(a<b)
	{
		aux = a;
		a = b;
		b = aux;
	}

	_itoa(a - b, this->valoare_tip_char, baza_finala);
	//printf("%s valoarea finala dupa adunarea celor doua\n", this->valoare_tip_char);
	this->baza = baza_finala;
	return *this;
}

void Number::SwitchBase(int newBase)
{
	int a = trs_baza(this->valoare_tip_char, this->baza);
	_itoa(a, this->valoare_tip_char,newBase);
	this->baza = newBase;
}

bool Number::operator<(Number ex)
{
	if (trs_baza(this->valoare_tip_char, this->baza) < trs_baza(ex.valoare_tip_char, ex.baza))
		return true;
	else return false;
}
bool Number::operator>(Number ex)
{
	if (trs_baza(this->valoare_tip_char, this->baza) > trs_baza(ex.valoare_tip_char, ex.baza))
		return true;
	else return false;
}
bool Number::operator<=(Number ex)
{
	if (trs_baza(this->valoare_tip_char, this->baza) <= trs_baza(ex.valoare_tip_char, ex.baza))
		return true;
	else return false;
}
bool Number::operator>=(Number ex)
{
	if (trs_baza(this->valoare_tip_char, this->baza) >= trs_baza(ex.valoare_tip_char, ex.baza))
		return true;
	else return false;
}
bool Number::operator==(Number ex)
{
	if (trs_baza(this->valoare_tip_char, this->baza) == trs_baza(ex.valoare_tip_char, ex.baza))
		return true;
	else return false;
}

bool Number::operator<(int numar)
{
	if (trs_baza(this->valoare_tip_char, this->baza) < numar)
		return true;
	else return false;
}
bool Number::operator>(int numar)
{
	if (trs_baza(this->valoare_tip_char, this->baza) > numar)
		return true;
	else return false;
}
bool Number::operator<=(int numar)
{
	if (trs_baza(this->valoare_tip_char, this->baza) <= numar)
		return true;
	else return false;
}
bool Number::operator>=(int numar)
{
	if (trs_baza(this->valoare_tip_char, this->baza) >= numar)
		return true;
	else return false;
}
bool Number::operator==(int numar)
{
	if (trs_baza(this->valoare_tip_char, this->baza) == numar)
		return true;
	else return false;
}
