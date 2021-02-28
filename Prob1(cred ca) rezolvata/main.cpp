#include "Clasaex1.h"
#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	Clasaex1 a;
	int nr,c=0;
	a.Init();
	while (c < 5)
	{
		c++;
		cin >> nr;
		a.Add(nr);	
	}
	a.Sort();
	a.Print();

	system("pause");
	return 0;
}