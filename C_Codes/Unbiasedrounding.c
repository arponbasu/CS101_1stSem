/*


This file is created by Arpon Basu.
Date:-


*/





#include<stdio.h>
#include<math.h>

int main()
{

float x;
int c;
float c1=0.5,c2=0.5,c3=0.25,c4=0.5,c5=0.25;

printf("Enter a number =");
scanf("%f",&x);
	c=ceil(x+c1)-ceil(c2*x+c3)+floor(c4*x+c5);

printf("Unbiased rounding of %f comes out to be %d\n",x,c);



return 0;
}
