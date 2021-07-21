/*
 * MonteCarlo**.c
 */
#include <stdio.h>
#include "mathutils.h"
#include <stdlib.h>

#define ulimit  100000
#define llimit  1

int trialNum[]={10,100,1000,10000};

double prob (int ,int ,int);

int main(int argc, char **argv)
{
	
	
	for(int i=0;i<sizeof(trialNum)/sizeof(int);i++)
	{
			printf("Trial Count =%d ,probability = %lf\n",trialNum[i],prob(llimit,ulimit,trialNum[i]));

		
	}
	
	
	return 0;
}

double prob (int a,int b,int itrCnt)
{
	
int count = 0;	
	
	for (int i = 0; i < itrCnt; i++)
	{
			if (gcd(a + rand()%(b-a+1),a + rand()%(b-a+1)) == 1)
			{
					count++;
			}
	}
return ((double)count/(double)itrCnt);
}












