/*
 * diff.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <math.h>

double f (double);
double diff (double);

int main()
{
	double x = 1.0;
	printf("Differentiation of the given function at x = %lf is equal to %0.4f",x,diff(x));
	return 0;
}

double f (double x)
{
return pow(x,10);
}

double diff (double x)
{
	return 1000000*(f(x+0.000001)-f(x));
}
