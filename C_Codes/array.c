/*
The program below prints the prime factorization of a number by first running a loop to find its divisors, using the primechecker function to choose the primes among them, then arranging those primes into an array, then running another loop to find the multiplicity of those primes and finally writing a function to print each prime the number of times of its multiplicity.
Written By: Arpon Basu
Date: Oct 13 , 2020
*/
#include<stdio.h>
#include "totientfunc.c" //Private library containing the definition of the primechecker function.

#define MAX_SIZE 100

int primeArray[MAX_SIZE];//Defines the array of prime divisors of n and fills in the rest of the positions with -1 to ensure accountability in case some other array position (of some other program) is accidentally overwritten.
int primeCounter=0;//Another check that exactly the number of primes desired are the ones stored in the array.Also provides a boundary condition while looping.
int multi (int,int);//Evaluates multiplicity of a prime in the factorisation of n.
void div (int);//Finds out all the prime divisors of n.
void primulti (int,int);//Prints the first integer the number of times of the second integer.

int main()
{

int p;

//Initializing primeArray with -1
  for(int j=0;j<MAX_SIZE;++j)
  {
    primeArray[j]=-1;
  }


int  n=1008;
div (n);
p=primeCounter;
int i;
for(i=0;i<p;++i)
    {
      primulti (primeArray[i],multi(n,primeArray[i]));
    }
}

/*Finds out all the prime divisors of n by running a for loop.
The primecounter is also defined here.*/

void div (int n)
{
   int i;
   for(i=1;i<=n;++i)
    {
      if (n%i==0 && primechecker (i) == 1) // i is a factor of n AND i is prime
       {
         primeArray[primeCounter]=i; // inserting newly found prime in array
         primeCounter++;             // Increasing the counter.
       }
    }
}

int multi (int n, int k) //Evaluates multiplicity of a prime in the factorisation of n by running a for loop that in every iteration reduces the circulant by a factor of k.
{
   int j=1;
   int count=0;

   for(;;)  // Implementing an infinite loop.
    {
      if (n%k == 0 )
       {
         count++;
         n=n/k;
       }
       else
       {
          return count;
       }
    }

}
void primulti (int a,int b) //Prints the first integer the number of times of the second integer.
{
    for(int j=1;j<=b;++j)
    {
      printf("%d\n",a);
    }
}
