#include "Math.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return x + y;
}
int Math::Add(double x, double y, double z)
{
	return x + y + z;
}
int Math::Mul(int x, int y)
{
	return x*y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}
int Math::Add(int count, ...) // sums up a list of integers
{
	va_list vl;
	int s = 0;
	va_start(vl, count);
	for (int i = 0; i < count; ++i)
		s = s + va_arg(vl, int);
	va_end(vl);
	return s;
}
									 
									 
char* Math::Add(const char* x, const char* y)
{
	char* sir;
	int strlenX = strlen(x);
	int strlenY = strlen(y);
	if (strlenY == 0 or strlenX == 0)
		return nullptr;
	sir =(char *) malloc(strlenX + strlenY + 1);
	memset(sir, 0, strlenX + strlenY + 1);
	memcpy(sir, x, strlenX);
	memcpy(sir + strlenX, y, strlenY);

	return sir;
}
