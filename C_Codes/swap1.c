/*
 * swap1.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <stdlib.h>

void swap (double,double);

int main(int argc, char **argv)
{
	double a,b;
	
	
	if (argc != 3)
	{
		printf("The function demands exactly two real numbers\n");
		exit (0);
	}
	else
	{
		a = atof(argv[1]);
		b = atof(argv[2]);
		swap (a,b);
	}
	
	
	return 0;
}




void swap (double a,double b)
{
	double c;
	c = a;
	a = b;
	b = c;
	printf("Value after swapping, a = %lf, b = %lf\n",a,b);
}



