/*
 * ListOfPrimes.c
 */


#include <stdio.h>
#include "mathutils.h"


#define MAXSIZE 2000
#define SEARCHLIMIT 17389

int ArrayOfPrimes[MAXSIZE];

int main(int argc, char **argv)
{
	int index = 0;
	for (int i = 2; i <= SEARCHLIMIT; i++)
	{
			if (primechecker(i) == 1) 
			{
				ArrayOfPrimes[index] = i;
     			index++ ;
			}
	}
	
	
	
	
	
	
	printf("The hundredth prime is = %d\n",ArrayOfPrimes[1999]);
	
	
	
	
	
	return 0;
}





