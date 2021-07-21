/*
 * NewtonRaphson.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 *
 */


#include <stdio.h>
#include <math.h>


double f (double);
double root (double,double);
double diff (double);

int main()
{
	double a = -1.0 , b = 2.0;
	printf("Root of the given function b/w %lf and %lf = %lf",a,b,root(a,b));
	return 0;
}




double root (double a,double b)
{
	int i;
	double l = (a+b)/2 ;
	for (i = 0;i < 10;i++)
	{
		l = l - f(l)/diff(l) ;
    }

	return l;

}


double f (double x)
{
	return pow(x,1.87) - sin(sin(x));
}

double diff (double x)
{
	double h=1e-6;
	return (f(x+ h)-f(x))/h;
}
