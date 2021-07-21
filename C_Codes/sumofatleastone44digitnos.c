/*
Calculate sum of all four digit numbers having atleast one digit which is 4.
Written By: Arpon Basu
Date: Oct 13 , 2020
* 
* 
* Problem :   Calculates the sum of all four digit numbers having 
*             atleast one digit which is 4 by using a for and if loop 
*             and implementing OR within it.
* 
*/
#include<stdio.h>



int u (int);//Evaluates the unit digit of a number.
int d (int);//Evaluates the tens digit of a number.
int h (int);//Evaluates the hundreds digit of a number.
int t (int);//Evaluates the thousands digit of a number.

int digit_at_position(int num,int pos);




int sum (int);

int main()
{
int k=7;

printf("Reduction Method ====> Sum for %d = %d\n",k,sum(k));


}

int sum (int k)
{

int i,startNum=1000,endNum=9999;

int sum = 0;


	for(i=startNum;i<=endNum;++i)
		{ 
			if (u(i) == k || d(i) == k || h(i) == k || t(i) == k) {sum = sum + i ;}
			/*if ( digit_at_position(i,0) == k || 
			     digit_at_position(i,1) == k || 
			     digit_at_position(i,2) == k || 
			     digit_at_position(i,3) == k ) 
			    {
					sum = sum + i ;
				}*/
			
		}   

return sum;
}


int u (int n)//Evaluates the unit digit of a number by exploiting the mod function.
{
return (n%10);
}


int d (int n)//Evaluates the tens digit of a number by exploiting the mod function.
{
return ((n%100-n%10)/10);
}


int h (int n)//Evaluates the hundreds digit of a number by exploiting the mod function.
{
return ((n%1000-n%100)/100);
}


int t (int n)//Evaluates the thousands digit of a number by exploiting the mod function.
{
return ((n%10000-n%1000)/1000);
}


/*
int digit_at_position(int num,int pos)
{
	int retval;
	
	if(pos==0) retval=num%10;
	
	retval=(num%pow(10,pos)-num%pow(10,pos-1))/pow(10,pos-1);
	return retval;
}


*/































