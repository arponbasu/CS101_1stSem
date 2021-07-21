/*
 * Sqrt.c
 */


#include <stdio.h>
#include <stdlib.h>


int guess (double);
double squareroot (double);
double mod (double);

int main(int argc, char **argv)
{
	
	if (argc != 2)
			{
				printf("\nImproper Input. Usage [./executable][x >= 0]\n");
				exit(0);
			}
	else {
				double x = atof(argv[1]);
				printf("%lf",squareroot(x));
		 }
	
	printf("\n");
	
	return 0;

}

int guess (double x)
{
		int i = 0;
		int retval = 1;
		if (x >= 1)
		{
			while (i*i < x)
			{
				i++;
				if (i*i <= x && (i+1)*(i+1) > x) retval = i;	
			}	
		}

		return retval;
}

double squareroot (double x)
{
   double ite = (double)(guess(x));
   double epsilon = 0.000001;
   while (mod(ite*ite - x) >= epsilon)
    {
      ite = (ite + (x/ite))/2;
    }   
return ite;
}


double mod (double y)
{
	double retval = y;
	if (y < 0) retval = -retval;	
	return retval;
}
