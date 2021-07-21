/*
Various implementations of getting a program to print the number of even or odd numbers in a given range.
This file is created by Arpon Basu.
Date:-13/10/20
*/
#include<stdio.h>

void p (int,int,int);//Prints an AP with given starting term, common difference and an upper limit. 
void e (int);//Prints even numbers by exploiting the mod function.
void pe (int,int);//Prints even numbers as a special case of the p function.
void po (int,int);//Prints odd numbers as a special case of the p function.
float flt;

int main()
{

flt=2.45;
printf("Printing from main %f\n",flt);
//p(10,20,3);
//e(50);
//pe (11,20);
po (12,20);
return 0;
}
void p (int start,int end, int gap) //Prints an AP with given starting term, common difference and an upper limit.Further warns the user if start happens to be greater than the end.
{
float flt;
printf("Printing from func p %f\n",flt);
   if (start>=end)  
    { 
        printf("Please give a starting number lesser than or equal to the ending number\n"); 
        return;
    } 
    int i;
    for(i=start;i<=end;i=i+gap)
    {
      printf("%d\n",i);
    }   
}
void e (int num) //Prints even numbers by exploiting the mod function.
{
   int i;
   for(i=0;i<=num;i=i+2)
   {
      printf("%d\n",i);
   }   
}
void pe (int start,int end)//Prints even numbers as a special case of the p function.Further if the input start happens to be odd then automatically presumes the actual start to be one greater than the inputted one. 
{
if (start%2 == 0)  
    {  
         p(start,end,2);  
    }  
    else
    {
        p(start+1,end,2);  
    }
}
void po (int start,int end)//Prints odd numbers as a special case of the p function.Further if the input start happens to be even then automatically presumes the actual start to be one greater than the inputted one.
{
if (start%2 == 1)  
    {  
         p(start,end,2);  
    }  
    else
    {
        p(start+1,end,2);  
    }
}
















































