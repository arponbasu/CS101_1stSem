/*
 * PrintingPattern.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char * string;

void printcharacter (char,int,int,int);
void printZ (int);

int main(int argc, char **argv)
{
	printZ(10);
	return 0;
}


void printZ (int n)
{
	printcharacter('@',n,0,0);
	for (int j = 1; j <= n-2; j++)
		{
			printcharacter('@',1,n-j-1,0);
		}
	printcharacter('@',n,0,0);
}








void printcharacter (char ch, int pcount, int spacecount, int gap)
{
		for(int j = 0; j < spacecount; ++j)
			{
				printf(" ");
			}
		
		
		for(int j = 0; j < pcount; ++j)
			{
				printf("%c",ch);
				for(int j = 0; j < gap; ++j)
					{
						printf(" ");
					}
			
			}
	
	
			printf("\n");
}
