#include <iostream>
#include <string.h>
#include "Sort.h"
#include <stdio.h>

using namespace std;

int main()
{   

	
	Sort a1(5, 5, 10);
	a1.BubbleSort();
	a1.Print();
	a1.GetElementFromIndex(2);
	printf("Nr de elemente este %d.\n", a1.GetElementsCount());
	
   
	int v[5] = { 6,4,3,4,5 };
	Sort a2(v, 5);
	a2.InsertSort();
	a2.Print();
	a2.GetElementFromIndex(4);
	printf("Nr de elemente este %d.\n", a2.GetElementsCount());
	
    
	Sort a3(6, 3, 5, 2, 7, 1, 9);
	a3.InsertSort();
	a3.Print();
	a3.GetElementFromIndex(4);
	printf("Nr de elemente este %d.\n", a3.GetElementsCount());
	
	
	char c[] = "1,3,6,8,7,5,3,9";
	Sort a4(c);
	a4.InsertSort();
	a4.Print();
	a4.GetElementFromIndex(4);
	printf("Nr de elemente este %d.\n", a4.GetElementsCount());

	
	Sort a5;
	a5.BubbleSort();
	a5.Print();
	printf("%d\n",a5.GetElementsCount());
	a5.GetElementFromIndex(4);
	

	system("pause");
	return 0;
}