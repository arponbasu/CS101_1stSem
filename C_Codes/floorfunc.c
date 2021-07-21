/*
Calculates the fractional part of a number using only the stdio.h library, in two different implementations. 
Written By: Arpon Basu
Date: Oct 13 , 2020
*/


#include<stdio.h>


double frac (double);//Uses the while loop to calculate.
int frac1 (double);//Uses a compiler ubiquity to calculate.

int main()
{

double f;
/*printf("Enter x \n");  
	scanf("%lf",&f);*/
       		printf("Floor of %lf is = %d\n",0.45,frac1 (0.45));  
                printf("Floor of %lf is = %d\n",-0.45,frac1 (-0.45));  


}

double frac (double x) 
{
if(x>=1)
{
  while(x>=0)
   {
     x=x-1;
     if(x<1) return x;
   }
}
else if (0<=x)
{
return x;
}
else
{
  while(x<1)
   {
  
       x=x+1;
     
       if(x>=0) return x;
   }
}

}


int frac1 (double x) 
{
if(x>=0)
{
  return ((int)x);
}
else{

//printf("%d\n",(int)x -1);
return (((int)x)-1);
}

}


