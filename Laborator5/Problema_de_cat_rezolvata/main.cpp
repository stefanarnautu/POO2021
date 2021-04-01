#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Number.h"

using namespace std;

int main()
{
	Number n1("10110010", 2);
	Number n2("734", 8);
	Number n3("FF", 16);

    printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
	printf("n2 has %d digits and it is written in base %d\n", n2.GetDigitsCount(), n2.GetBase());
	printf("n3 has %d digits and it is written in base %d\n", n3.GetDigitsCount(), n3.GetBase());
	
	for (int tr = 0; tr < n1.GetDigitsCount(); tr++)
	{
		printf("n1[%d]=%c\n", tr, n1[tr]);
	}
   
	n1.Print();
	n2.Print();
	printf("----------Copy constructor && move constructor---------\n");
	Number ex3 = n1;
	Number ex4 = Number(n2);
	ex3.Print();
	ex4.Print();
	printf("----------------Move asignment operator----------------\n");
	n1 = Number(n2);
	n1.Print();
	
	Number a("10", 10);
	
	printf("a has %d digits and it is written in base %d\n", a.GetDigitsCount(), a.GetBase());
	a.Print();
	a = a - n3;
	printf("a has %d digits and it is written in base %d\n", a.GetDigitsCount(), a.GetBase());
	a.Print();

	a = a + n2;
	printf("a has %d digits and it is written in base %d\n", a.GetDigitsCount(), a.GetBase());
	a.Print();

	a = a + 10;
	printf("a has %d digits and it is written in base %d\n", a.GetDigitsCount(), a.GetBase());
	a.Print();
	
	a = a - 10;
	printf("a has %d digits and it is written in base %d\n", a.GetDigitsCount(), a.GetBase());
	a.Print();
	

	
	printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
	n1.SwitchBase(10);
	n1.Print();
	printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
	n1.SwitchBase(2);
	n1.Print();
	n1 = n1 + n2;
	printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
	n1.SwitchBase(10);
	n1.Print();
	printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
	



	if (n1 < n2) 
		printf("n2 is bigger than n1\n");
        else printf("n1 is bigger than n2\n");
	
	if (n1 > n2)
		printf("n1 is bigger than n2\n");
	else printf("n2 is bigger than n1\n");
	
	if (n3 > n2)
		printf("n3 is bigger than n2\n");
	else printf("n2 is bigger than n3\n");
	
	if (n3 >= n2)
		printf("n3 is bigger or equal than n2\n");
	else printf("n2 is bigger than n3\n");
	
	if (n3 <= n2)
		printf("n3 is lower or equal to n2\n");
	else printf("n3 is bigger than n2\n");
	
	if (n3 == n3)
		printf("n3 is equal to n3\n");
	else printf("n2 is not equal to n3\n");
	
	if (n3 == n2)
		printf("n3 is equal to n2\n");
	else printf("n2 is not equal to n3\n");
	
	
	
	if (n1 < 10)
		printf("10 is bigger than n1\n");
	else printf("n1 is bigger than 10\n");

	if (n1 > 10)
		printf("n1 is bigger than 10\n");
	else printf("10 is bigger than n1\n");

	if (n3 > 100)
		printf("n3 is bigger than 100\n");
	else printf("100 is bigger than n3\n");

	if (n3 >= 400)
		printf("n3 is bigger or equal than 400\n");
	else printf("400 is bigger than n3\n");

	if (n3 <= 400)
		printf("n3 is lower or equal to 400\n");
	else printf("n3 is bigger than 400\n");

	if (n3 == 254)
		printf("n3 is equal to 254\n");
	else printf("n3 is not equal to 254\n");

	if (n3 == 255)
		printf("n3 is equal to 255\n");
	else printf("n3 is not equal to 255\n");
	
	
	
	/*Number n4 = 12345; // n4 will be in base 10
	n1 = 255; // n1 will be 11111111 (value 255 from base 10 in base 2)
	n4 += n1;
	n4.Print();
	n4 = "13579"; // n4 mentains its base (10) and will be 13579
	n4.Print();
	--n4; // the first digit from n4 will be remove ==> n4 becomes 3579
	n4.Print();
	n4--; // the last digit from n4 will be remove ==> n4 becomes 357
	n4.Print();
	*/
	system("pause");
	return 0;
}