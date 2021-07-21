/*
 * RandomNumber.c
 */


#include <stdio.h>
#include <stdlib.h>


void ran (unsigned int,unsigned int);
void DieRoll ();
void CoinToss ();
void dran (double,double);

int main(int argc, char **argv)
{
	
	unsigned int num = 5;
	srand(num);
	//ran(5,87);
	//DieRoll();
	//CoinToss();
	//double x = 1.0;
	//printf("%lf\n",x);
	dran (1.1,1.2);
	return 0;
}


void ran (unsigned int a,unsigned int b)
{
	for (int i = 1; i <= 100; i++)
	{
	printf("Random Number = %d\n",a + rand()%(b-a+1));	
	}
}



void DieRoll ()
{
	ran (1,6);
}

void CoinToss ()
{
	
	for (int i = 1; i <= 100; i++)
	{
		if (rand()%2 == 0) {printf("H\n");}
		else {printf("T\n");}
	}




}



void dran (double x,double y)
{
	int a = 1000000*x;
	int b = 1000000*y;
	for (int i = 1; i <= 100; i++)
	{
	printf("Random Number = %lf\n",(a + rand()%(b-a+1))*0.000001);	
	}
	
}
