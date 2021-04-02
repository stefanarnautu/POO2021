#pragma once
#include <stdio.h>
#include <stdlib.h>

template<typename T>
T sortt(T a, T b)
{
	return a > b;
}

template <class T>
class Temp
{
	T* vect;
	int index;

public:
	Temp()
	{
		this->vect = (T*)(malloc(10*sizeof(T)));
		this->index = 0;
	}
	void push(T x)
	{
		vect[index] = x;
		this->index++;
	}
	T pop()
	{
		return this->vect[index - 1];
	}
	void deletee(int pozitia)
	{
		if (pozitia < this->index)
		{
			for (int i = pozitia; i < this->index; i++)
				this->vect[i] = this->vect[i + 1];
			this->index--;
		}
		else printf("Pozitia nu exista\n");
	}
	void insert(int pozitia,T valoare)
	{
		if (pozitia < this->index)
		{
			for (int i = index - 1; i >= pozitia; i--)
				this->vect[i + 1] = this->vect[i];
			this->vect[pozitia] = valoare;
			this->index++;
		}
		else printf("Pozitie prea mare pt insert\n");
	}
	int decizie(T(*callback)(T,T))
	{
		if (callback != nullptr)
		{
			for (int i = 0; i < this->index - 1; i++)
				for (int j = i; j < this->index; j++)
					if (callback(this->vect[i], this->vect[j]) == 1)
					{
						int aux = this->vect[i];
						this->vect[i] = this->vect[j];
						this->vect[j] = aux;
					}
		}
		else return 0;
	}
	T* get(int pozitie)
	{
		return &(this->vect[pozitie]);
	}
	T getvaloare(int pozitie)
	{
		return this->vect[pozitie];
	}
	T set(int pozitia,T valoare)
	{
		return this->vect[pozitia] = valoare;
	}
	int count()
	{
		return this->index;
	}

	void afiseazatotvectorul()
	{
		for (int i = 0; i < this->index; i++)
			printf("%d ", this->vect[i]);
		printf("\n");
	}

};

