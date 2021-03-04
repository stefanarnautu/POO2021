#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Math.h"

using namespace std;

int main()
{
	int a=2, b=4, c=7;
	double e = 4.6, f = 5.2,m=6.1;
	Math ob;
	printf("Suma 2+4=%d\n", ob.Add(a, b));
	printf("Suma 2+4+7=%d\n", ob.Add(a, b, c));
	printf("Suma 4.6+5.2=%d\n", ob.Add(e, f));
	printf("Suma 4.6+5.2+6.1=%d\n", ob.Add(e, f, m));
	printf("Inm. 2*4=%d\n", ob.Mul(a, b));
	printf("Inm. 2*4*7=%d\n", ob.Mul(a, b, c));
	printf("Inm. 4.6*5.2=%d\n", ob.Mul(e, f));
	printf("Inm. 4.6*5.2*6.1=%d\n", ob.Mul(e, f, m));
	printf("Adunarea multipla este %d\n", ob.Add(4,1,2,3,4));
	printf("Sirurile concatenate: %s\n", ob.Add("Ana","Mult"));

	system("pause");
	return 0; 
}