#include "Clasaex1.h"
#include <string.h>
#include <stdio.h>

void Clasaex1::Init()
{
	this->count = 0;
}

bool Clasaex1::Add(int x)
{
	if (x < 10)
	{
		numbers[this->count] = x;
		count++;
	}
	return 0;
}
void Clasaex1::Sort()
{
	int aux;
	for(int i=0;i<count-1;i++)
		for(int j=i;j<count;j++)
			if (numbers[i] > numbers[j])
			{

			}
}
