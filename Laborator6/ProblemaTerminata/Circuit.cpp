#include "Circuit.h"
#include <iostream>
#include <stdlib.h>

Circuit::Circuit()
{
	this->nr_maxim_masini = 100;
	this->vreme = 0;
	this->lungime = 0;
	this->currentCar = 0;
	this->masini = (Car**)(malloc(this->nr_maxim_masini * sizeof(Car*)));

}
Circuit::~Circuit()
{
	delete[]this->masini;
}
void Circuit::SetLungime(int x)
{
	this->lungime = x;
}
void Circuit::SetVreme(int x)
{
	this->vreme = x;
}
void Circuit::AddCar(Car* masina)
{
	if (this->currentCar < this->nr_maxim_masini)
	{
		this->masini[this->currentCar] = masina;
		this->currentCar++;
	}
	else printf("Nu s-a putut adauga\n");
}
void Circuit::printff()
{
	printf("Vremea este %d iar lungimea este %d\n", this->vreme, this->lungime);
}
void Circuit::afiseazaTot()
{
	for (int i = 0; i < this->currentCar; i++)
		this->masini[i]->printTot();
}
void Circuit::Race()
{
	float aux=0;
	char* p;
	p = (char*)(malloc(10));
	int i = 0,j=0;
	for (i = 0; i < this->currentCar; i++)
	{
		this->pozitii_finale[i] = (float)this->masini[i]->modifica_timp(this->vreme, (float)this->lungime);
	}

	for (i = 0; i < this->currentCar; i++)
		strcpy(this->topul[i] ,this->masini[i]->nume);

	for (i = 0; i < this->currentCar - 1; i++)
		for(j = i ;j< this->currentCar; j++)
			if (this->pozitii_finale[i] > this->pozitii_finale[j])
			{
				aux = this->pozitii_finale[i];
				this->pozitii_finale[i] = this->pozitii_finale[j];
				this->pozitii_finale[j] = aux;
				strcpy(p, this->topul[i]);
				strcpy(this->topul[i], this->topul[j]);
				strcpy(this->topul[j], p);
			}
}
void Circuit::ShowFinalRanks()
{
	int j = 1;
	for (int i = 0; i < this->currentCar; i++)
		if (this->pozitii_finale[i] > 0)
		{
			printf("%d)Autovehiculul %s a terminat cursa in %.1f ore.\n",j , this->topul[i], this->pozitii_finale[i]);
			j++;
		}
	printf("\n");
}
void Circuit::ShowWhoDidNotFinis()
{
	int j = 1;
	for (int i = 0; i < this->currentCar; i++)
		if (this->pozitii_finale[i] == 0)
		{
			printf("%d)Autovehiculul %s nu a terminat cursa.\n", j, this->topul[i], this->pozitii_finale[i]);
			j++;
		}
	printf("\n");
}