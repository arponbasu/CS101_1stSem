/*
Evaluates the signum function.
Written By: Arpon Basu
Date: Oct 19 , 2020
*/
#include<stdio.h>
int sgn (float);
int main()
{
float x;
x=1.2;
printf("sgn (%f) = %d\n",x,sgn(x));
}
int sgn (float x)
{
if (x > 0) return 1;
else if (x < 0) return -1;
else return 0;
}
