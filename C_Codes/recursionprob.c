/*
Calculates the terms of a very calculation intensive recurrence (Knuth 3.28).
This file is created by Arpon Basu.
Date:-13/10/20
*/
#include<stdio.h>
#include<math.h>
#include <time.h>
#define MAX_SIZE 100

int valbuff[MAX_SIZE];//Greatly reduces calculation time by creating an array to store preceding terms of the sequence so that time is not wasted in calculating, say a1 n times each for the calculation from a1 to an.
int f(int);//Defines the recursion.
int main()
{
int n;
int F;
int i;
char buff[100];
for(i=0;i<=100;++i)
	{

    time_t now = time (0);
    strftime (buff, 100, "%Y-%m-%d %H:%M:%S.000", localtime (&now));
valbuff[i]=f(i);
printf("f(%d) = %d \t %s\n",i,valbuff[i], buff);  
	}
}
int f (int n)  
{  
    if (n==0)  
    {  
        return 1;  
    }  
    else ;
    {
        return f(n-1)+floor(sqrt(f(n-1)))     ; 
    }

} 














 
