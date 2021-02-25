#include "Clasaex1.h"
#include <string.h>
#include <stdio.h>
#include <iostream>

void Clasaex1::Init()
{
	count = 0;
}

bool Clasaex1::Add(int x)
{
	if (x < 10)
	{
		numbers[count] = x;
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
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}
void Clasaex1::Print()
{
	for(int i=0;i<count;i++)
	printf("%d ",numbers[i]);
	printf("\n");
}
