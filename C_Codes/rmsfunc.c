/*
*  The program below evaluates the rms value of any function b/w two given 
*  limits by integrating the square of the function (by first principles), 
*  dividing it by the difference of the limits and finally taking the square root.
Written By: Arpon Basu
Date: Oct 17 , 2020
*/


#include<stdio.h>
#include<math.h>


double f (double);


double rms (double,double);

//int myvar;


int main ()
{
	double a;
	a = 0.0;
	double b;
	b = 6.283185307;
		printf("RMS of given function b/w %lf to %lf = %lf\n",a,b,rms(a,b));
}



double f (double x)
{
return cos(x);
}



double rms (double a, double b)
{


long N = 1000000;

double h = (b-a)/N;


double  sum = 0;


	for(int i=0; i<N; i++)
	{
		sum = sum + h*pow(f(a + h*i),2) ;
	}
	
	
return sqrt(sum/(b-a));
}

