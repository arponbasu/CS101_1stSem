/*
Calculate the number of ones in the binary representation of a given number using a compiler function.
Written By: Arpon Basu
Date: Oct 13 , 2020
*/
#include<stdio.h>
int main()
{
int n;
n=12;
printf("Number of ones in binary representation of %d = %d\n",n,__builtin_popcount (n));
}

