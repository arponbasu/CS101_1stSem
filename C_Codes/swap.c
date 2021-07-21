/*
 * swap.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>

double a,b;
double c;
				


int main(int argc, char **argv)
{
				a = 2.0;
				b = 3.0;
				c = a;
				a = b;
				b = c;
	
	
/*	if (argc != 3)
			{
				printf("\nImproper Input. Usage [./executable][NUMBER][NUMBER]\n");
				exit(0);
			}
*/	
	
				printf("Value of swapped a is %lf\n",a);
				printf("Value of swapped b is %lf",b);
		 
	
	printf("\n");
	
	return 0;
}

