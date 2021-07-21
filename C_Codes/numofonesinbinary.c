/*
Calculate the number of ones in the binary representation of a given number without using the compiler function already available within stdio.h to do the job.
Written By: Arpon Basu
Date: Oct 13 , 2020
*/

#include<stdio.h>
#include<math.h>

int Josephus (int);//The Josephus function.
int ones (int);//Calculates the number of ones in the binary representation of a given number by applying the Josephus function on it enough number of times so that the zeroes in its binary representation get eliminated.
int main()
{
int n;
n=1023;
printf("number of ones in the binary representation of a given number %d = %d\n",n,ones(n));
}
int ones (int n)//Uses the property given below to delete all the zeroes in the binary representation and finally take log to the base 2 to find number of ones. 
{
float k;
k = log2 (n+1);
    if (floor(k) == k) return k;  
    else return ones(Josephus (n));
}
int Josephus (int n) //Mathematical nature is such that a number "abc..yz" in binary is sent to "bc..yza".Applying this function on any number atmost the number of times of its number of digits in binary representation, all its zeroes eventually become the leading digit someday and consequently are erased.
{  
    if (n==1) return 1;  
    else if  (n%2 == 0) return 2*Josephus (0.5*n)-1;  
    else return 2*Josephus (0.5*(n-1))+1;
}
