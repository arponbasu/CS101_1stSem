/*
Calculates sum of numbers till 1 to n by various methods.
Written By: Arpon Basu
Date: Oct 13 , 2020
*/
#include<stdio.h>


int sum_via_recursion(int) ;//Calculates sum of numbers till 1 to n by recursive methods.

int sum_via_loop(int) ;//Calculates sum of numbers till 1 to n by for loop.

int main()
{

float numflt;

int num=10;

printf("Sum of first %d is =%d\n",num,sum_via_loop(num));

num=20;
printf("Sum of first %d is =%d\n",num,sum_via_loop(num));


num=200;
printf("Sum of first %d is =%d\n",num,sum_via_loop(num));
}
int sum_via_loop(int num) //Calculates sum of numbers till 1 to n by for loop.
{
   int i=0;
   int sum=0;
   for(i=1;i<=num;++i)
   {
      sum=sum+i;
 
   }   
return sum;

}
/*

int sum_via_recursion(int n) //Calculates sum of numbers till 1 to n by recursive methods.
 
{  
    if (n==1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n+sum_via_recursion(n-1);  
    }  
}  */
