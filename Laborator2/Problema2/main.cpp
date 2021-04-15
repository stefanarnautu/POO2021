#include <iostream>
#include <string.h>
#include <stdio.h>
#include "studenti.h"
#include "global.h"

using namespace std;

int main()
{
	studenti a,b;
	a.setnume((char*)"Maria");
	a.setnotaeng(8);
	a.setnotaist(4);
	a.setnotamate(6);
	a.setmedie(a.getnotaeng(), a.getnotaist(), a.getnotamate());
	printf("Media studentului %s este %.2f\n",a.getnume() ,a.getmedie());
	b.setnume((char*)"Maria");
	b.setnotaeng(9);
	b.setnotaist(5);
	b.setnotamate(4);
	b.setmedie(b.getnotaeng(), b.getnotaist(), b.getnotamate());
	printf("Media studentului %s este %.2f\n", b.getnume(), b.getmedie());

	printf("\n\nComparatie dupa nume:\n");
	if (cmp_nume(&a, &b) == 0)
		printf("  Cele doua nume sunt identice\n");
	else if(cmp_nume(&a, &b)==1)
		printf("  Primul nume este mai mare\n");
	    else printf("  Al doilea nume este mai mare\n");
	printf("\n\nComparatie dupa note (mai intai compara media, iar daca este egala compara notele):\n");
	if (cmp_note_medie(&a, &b) == 0)
		printf("  Cei doi studenti au media si notele egale.\n");
	else if (cmp_note_medie(&a, &b) == 2)
		printf("  Media primului elev este mai mare.\n");
	else if (cmp_note_medie(&a, &b) == -2)
		printf("  Media celui de-al doilea elev este mai mare.\n");
	else if (cmp_note_medie(&a, &b) == 1)
		printf("  Primul student are o nota mai mare.\n");
	else printf("  Al doilea student are o nota mai mare.\n");



	system("pause");
	return 0;
}