/*
 * binom.c
 *  Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 * 
 */


#include <stdio.h>

int binom (int,int);
int main()
{
	printf("C(%d,%d) = %d",-10,-15,binom(-10,-15));
	return 0;
}

int binom (int n,int r)
{
	if (r == 0 || r == n) return 1;
	else if (r > n) return 0;
	else if (n < 0) return 0;
	else
	{
	return binom (n-1,r-1) + binom (n-1,r);	
	}
}
