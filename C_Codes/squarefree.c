/*
 * squarefree.c
 */


#include <stdio.h>
#include <stdbool.h>
#include "mathutils.h"
#define MAXSIZE 2000
#define SEARCHLIMIT 17389

int ArrayOfPrimes[MAXSIZE];
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
}




bool squarefree (int);

int main(int argc, char **argv)
{
	printf("%d\n",squarefree(2111));
	//printf("%d\n",primechecker(1));
	
	
	return 0;
}

bool squarefree (int n)
{
	
	bool retval = true;
	
	for (int i = 0;i < MAXSIZE;i++)
	{
			if (n%(ArrayOfPrimes[i]*ArrayOfPrimes[i]) == 0)
			{
				retval = false;
				break;
			}
			
			else if (n%(ArrayOfPrimes[i]*ArrayOfPrimes[i]) == n)
			{
					
			}
	}
	
	
	return retval;
}










