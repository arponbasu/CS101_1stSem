/*
The program below evaluates the definite integral of any function b/w two given limits using the Riemann-Stieltjes representation of a definite integral as the limit of an infinite sum, the limiting sum being approximated by taking the infinite variable to be a million.  
Written By: Arpon Basu
Date: Oct 13 , 2020
*/
#include <stdio.h>
#include <math.h>
double f (double);
double inte (double,double);
int main ()
{
double a;
a = 0.0;
double b;
b = 1.0;
printf("Integration of the given function from %lf to %lf = %lf\n",a,b,inte(a,b));
}
double f (double x)
{
return log(x);
}
double inte (double a, double b)
{
long N;
N = 1000000;
double h = (b-a)/N;
int i;
float sum = 0;
for(i=0; i<N; i++)
	{
		sum = sum + h*f(a + h*i) ;
	}
return sum;
}

