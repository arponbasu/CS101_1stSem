/*
 * complextesting.c
 */


#include <stdio.h>
#include "complexutils.h"
int main(int argc, char **argv)
{
	/*
	complexrect z1=CartesianInput(4,3);
	printf("Real Part of z1=%lf\n",realPart(z1));
	printf("Imaginary Part of z1=%lf\n",imaginaryPart(z1));
	
	
	complexpolar z2=PolarInput(1,30);
	printf("Real Part of z2=%lf\n",PolarRealPart(z2));
	printf("Imaginary Part of z2=%lf\n",PolarImaginaryPart(z2));
	
	printf("Argument of z2=%lf\n",Polarargument(z2));

	
	
	complexrect z1 = exponentiation(CartesianInput(-1,0),CartesianInput(0.5,0));
	printf("Real Part of z1=%lf\n",realPart(z1));
	printf("Imaginary Part of z1=%lf\n",imaginaryPart(z1));
	
	
	complexrect z1 = NaturalLogarithm(CartesianInput(-1,0));
	printf("Real Part of z1=%lf\n",realPart(z1));
	printf("Imaginary Part of z1=%lf\n",imaginaryPart(z1));
	*/
	
	complexrect z1 = Solvesine(CartesianInput(3,4));
	printf("Real Part of z1=%lf\n",realPart(z1));
	printf("Imaginary Part of z1=%lf\n",imaginaryPart(z1));
	
	return 0;
}

