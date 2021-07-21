/*
Evaluates the Levi-Civita symbol.
Written By: Arpon Basu
Date: Oct 19 , 2020
*/
#include<stdio.h>


int epsilon (int,int,int);

int sgn (float);

int main()
{
	printf("epsilon(%d,%d,%d)",1,2,3);
}

int epsilon (int a[1],int a[2],int a[3])
{
int i;
int j;
int product;
for (i=1;i<4;i++)
    for (j=1;j<4;j++)
        {
            product = 1;
            if(i<j) product *= sgn (a[j] - a[i]);
        }
return product;
}



int sgn (float x)
{
if (x > 0) return 1;
else if (x < 0) return -1;
else return 0;
}
