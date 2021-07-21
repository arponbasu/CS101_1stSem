/*
 * rmsArrayImplementation.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * To be done
 */
#include <stdio.h>
#include <math.h>
#define MAXSIZE 1000000

double func[MAXSIZE];
double f (double);
double rms (double,double);
int main()
{
	double a = 0.0,b = 6.283185307;
    double h = (b-a)/(MAXSIZE);
	for(int j=0;j < MAXSIZE;++j)
	{
    
		func[j] = f(a + h*j);
	}
	
		printf("RMS of given function b/w %lf to %lf = %lf\n",a,b,rms(a,b));
	
	
	return 0;

}
	double f (double x)
	{
		return sin(x);
	}
	
	
	double rms (double a, double b)
		{
			double h = (b-a)/(MAXSIZE);
			double  sum = 0;
				for(int j=0;j < MAXSIZE;++j)
				{
					sum = sum + h*pow(func[j],2) ;
				}
			return sqrt(sum/(b-a));
		}


