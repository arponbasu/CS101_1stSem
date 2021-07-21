/*
Calculate sum of all four digit numbers not having any digit which is 4.
Written By: Arpon Basu
Date: Oct 13 , 2020
*/
#include<stdio.h>
#define OR ||
int u (int);//Evaluates the unit digit of a number.
int d (int);//Evaluates the tens digit of a number.
int h (int);//Evaluates the hundreds digit of a number.
int t (int);//Evaluates the thousands digit of a number.
int sum (int);
int excluded_sum(int exDig);
int main()
{
int k;
k=7;
printf("Sum for %d = %d\n",k,sum(k));
printf("Construction Method ====Sum for %d = %d\n",k,excluded_sum(k));
}

int sum (int k)//Calculates the sum of all four digit not having any digit which is 4 by using a for and if loop and implementing AND within it.
{
int i;
int sum = 0;
for(i=1000;i<=9999;++i)
   { 
     if (u(i) != k && d(i) != k && h(i) != k && t(i) != k) {sum = sum + i ;}
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


int excluded_sum(int exDig)
{
	
	int sum=0;
	for(int i=1;i<=9;++i)
	  {
		  for(int j=0;j<=9;++j)
		     {
				 for(int k=0;k<=9;++k)
		           {
	                for(int l=0;l<=9;++l)
		              {
						  if(i==exDig OR j==exDig OR k==exDig  OR l==exDig)
						  {
						  }
						  else
						  {
							  int number=(1000*i + 100*j + 10*k + l);
							  sum=sum + number;
							  printf("Number=%d Sum=%d\n",number,sum);
						  }
						  
					  }
				  }
			  }
		  }
	
return sum;
}





























