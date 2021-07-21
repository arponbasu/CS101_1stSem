/*
 * MonteCarlo.c
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mathutils.h"

bool squarefree (long int);
double prob (long unsigned int,long unsigned int);

int main(int argc, char **argv)
{
	//printf("%d\n",squarefree());
	printf("%lf\n",prob(1,1000));
	return 0;
}

bool squarefree (long int n)
{
	
	bool retval = true;
	
	for (long int i = 1;i <= n;i++)
	{
			if(n%i == 0)
			{
				if(primechecker(i) == 1)
				{
					if(n%(i*i) == 0) {retval = false;}
					break;
				}
			}
	}
	
	
	return retval;
	
	
	
}



double prob (long unsigned int a,long unsigned int b)
{
	long int count = 0;
	long int samplesize = 100;
	for (long int i = 1; i <= samplesize; i++)
	{
		
		if(squarefree(a + rand()%(b-a+1)) == 1) {count++;}
	
	}

	return (count)/(samplesize);

}







