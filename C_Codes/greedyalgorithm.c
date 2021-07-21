/*
 * greedyalgorithm.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 *
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAXSIZE 32


void greedy (int);
int basis[MAXSIZE+1];

int main(int argc, char **argv)
{


if(argc!=2)
{
	
    printf("\nImproper Input. Usage [./executable][POSITIVE INT]\n");
    exit(0);

}




/*
	for(int j=0 ; j <= MAXSIZE ; ++j) //Basis is power of 2
  {
    basis[j] = pow (2.0,j);
  }
*/	
	
for(int j=0 ; j <= MAXSIZE ; ++j) //Basis is the fibonacci series
  {
    basis[0] = 1;
    basis[1] = 2;
   
	if (j > 1)		
	{
		basis[j] = basis[j-1] + basis[j-2];
	}
  
 }
	
	float n = atoi(argv[1]);
	greedy (n);
	
	
	return 0;
}


void greedy (int n)
{
	for (int i=0 ; i < MAXSIZE ; ++i)
	{
		if (n == basis[i]) {printf("%d\n",n);}
		else
			{
				if ((n > basis[i]) & (n < basis[i+1]))
				{
				  printf("%d\n",basis[i]);
				  greedy (n - basis[i]);
				}  
			}	
	}
}	
