#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Temp.h"

using namespace std;

float operator"" _Kelvin(unsigned long long int x)
{
	float z = x;
	z = z - 273.15;
	return z;
}
float operator"" _Fahrenheit(unsigned long long int x)
{
	float y = x;
	y = (y - 32) / 1.8;
	return y;
}

int main()
{
	float a = 300_Kelvin;
	float b = 120_Fahrenheit;
	printf("%.2f\n", a);
	printf("%.2f\n", b);
   
	Temp<int> first;

	first.push(10);
	first.push(15);
	first.push(75);
	first.push(4);
	first.push(9);
	first.push(20);
	printf("%d\n", first.pop());
	first.deletee(5);
	printf("%d\n", first.pop());
	first.insert(4, 1);
	first.deletee(5);
	printf("%d\n", first.pop());
	
	
	system("pause");
	return 0;
}