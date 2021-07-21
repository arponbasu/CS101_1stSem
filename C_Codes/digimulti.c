/*
 * digimulti.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 *   
 * 
 */


#include <stdio.h>
int u (int);//Evaluates the unit digit of a number.

int d (int);//Evaluates the tens digit of a number.

int h (int);//Evaluates the hundreds digit of a number.

int t (int);//Evaluates the thousands digit of a number.

int digimulti (int,int);

int eq (float);


int main()
{
	int k = 1, n = 1113;
	printf("Multiplicity of the %d in %d = %d\n",k,n,digimulti(k,n));
	return 0;
}




int digimulti (int k,int n)
{
	return eq (k - u(n)) + eq (k - d(n)) + eq (k - h(n)) + eq (k - t(n));
}

int eq (float x)
{
	int retval = 0;
	
	if (x == 0) retval = 1;
	
	return retval;
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
