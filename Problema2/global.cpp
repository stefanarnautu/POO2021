#include "global.h"
#include <string.h>
#include <stdio.h>

int cmp_nume(studenti* std1, studenti* std2)
{
	return strcmp(std1->getnume(), std2->getnume());
}
int cmp_note_medie(studenti* std1, studenti* std2)
{
	float a1 = std1->getnotaeng();
	float a2 = std1->getnotamate();
	float a3 = std1->getnotaist();
	float b1 = std2->getnotaeng();
	float b2 = std2->getnotamate();
	float b3 = std2->getnotaist();
	if (std1->getmedie() > std2->getmedie())
		return 2;
	else if (std1->getmedie() < std2->getmedie())
		return -2;

	if (a3 > b3)
		return 1;
	else if (a3 < b3)
		return -1;
	else if(a1!=b1)
	       {
		    if (a1 > b1)
			return 1;
		    else return -1;
	       }
	      else if (a2 != b2)
	             {
		            if (a2 > b2)
			        return 1;
		            else return -1;
	              }
		  else if (a3 != b3)
	{
		if (a3 > b3)
			return 1;
		else return -1;
	
}
	return 0;
}