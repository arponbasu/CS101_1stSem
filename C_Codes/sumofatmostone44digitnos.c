/*
Calculates the sum of all four digit numbers having atmost one digit which is 4.
Written By: Arpon Basu
Date: Oct 13 , 2020
*/

#include<stdio.h>
int u (int);//Evaluates the unit digit of a number.
int d (int);//Evaluates the tens digit of a number.
int h (int);//Evaluates the hundreds digit of a number.
int t (int);//Evaluates the thousands digit of a number.
int sum (int);

int main()
{
int k;
k=7;
printf("Sum for %d = %d\n",k,sum(k));
}

int sum (int k)//Calculates the sum of all four digit numbers having atleast one digit which is 4 by using a for and if loop and implementing OR & AND within it.
{
int i;
int sum = 0;
for(i=1000;i<=9999;++i)
   { 
     if (u(i) != k && d(i) != k && h(i) != k && t(i) != k) {sum = sum + i ;}
     else if (u(i) == k && d(i) != k && h(i) != k && t(i) != k) {sum = sum + i ;}
     else if (u(i) != k && d(i) == k && h(i) != k && t(i) != k) {sum = sum + i ;}
     else if (u(i) != k && d(i) != k && h(i) == k && t(i) != k) {sum = sum + i ;}
     else if (u(i) != k && d(i) != k && h(i) != k && t(i) == k) {sum = sum + i ;}
     else {sum = sum ;}

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






































