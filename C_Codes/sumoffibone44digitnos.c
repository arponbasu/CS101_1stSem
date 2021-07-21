/*
Calculate sum of all four digit numbers having middle two digit number as Fibonacci Number
Written By: Arpon Basu
Date: Oct 13 , 2020
*/


#include<stdio.h>
#include <stdbool.h> // This is required for bool usage
#define twoDigFibCnt 5


int mid (int);
int sum ();
int sum_with_cond(int,int);// arg1:start number in integer , arg2=end number in integer, check arg1<=arg2 , arg1 and arg2 both four digit
bool  array_contains(int);// arg1:an integer

int twoDigitFib[twoDigFibCnt]={13,21,34,55,89};


int main()
{
printf("Using Sum: Sum is = %d\n",sum());
printf("Using sum_with_cond: Sum is = %d\n",sum_with_cond(1000,9999));
}

int sum ()
{
int i;
int sum = 0;
for(i=1000;i<=9999;++i)
   { 
     
    /* int temp=mid (i);
    if (temp == 13 || 
        temp == 21 || 
         temp == 34 || 
         temp == 55 || 
         temp == 89) 
         {
           sum = sum + i ;
         } */

    



    switch(mid (i))
      {
         case 13:
         case 21:
         case 34:
         case 55:
         case 89:
        
            sum = sum + i ;
               
         default: 
            break;

      }
   }   
return sum;
}



int sum_with_cond(int sNum,int eNum)
{
    if(sNum>eNum)
    {
      return -1;
    }

    int sum = 0;

    for(int i=sNum;i<=eNum;++i)
    { 
      
      if(array_contains(mid (i))) sum = sum + i ;

    }   

    return sum;
}





int mid (int n)
{
	return ((n%1000-n%10)/10);
}


bool  array_contains(int num)
{

   for(int i=0;i<twoDigFibCnt;++i) //sizeof(twoDigitFib)
    { 
        if(twoDigitFib[i]==num)  return true;
    } 

return false;
}





































