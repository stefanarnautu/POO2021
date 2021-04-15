#include "studenti.h"
#include <string>
void studenti::setnotaeng(float nota)
{
	this->notaeng = nota;
}
void studenti::setnotamate(float nota)
{
	this->notamate = nota;
}
void studenti::setnotaist(float nota)
{
	this->notaist = nota;
}
void studenti::setmedie(float nota1, float nota2, float nota3)
{
	medie = (nota1 + nota2 + nota3) / 3;
}

float studenti::getnotaeng()
{
	return this->notaeng;
}
float studenti::getnotamate()
{
	return this->notamate;
}
float studenti::getnotaist()
{
	return this->notaist;
}
float studenti::getmedie()
{
	return this->medie;
}
void studenti::setnume(char* nume)
{
	strcpy_s(this->nume, 20, nume);
}
char* studenti::getnume()
{
	return this->nume;
}
studenti::studenti()
{
	strcpy_s(this->nume,20,"");
	this->medie = 0;
	this->notaeng = 0;
	this->notaist = 0;
	this->notamate = 0;
}
