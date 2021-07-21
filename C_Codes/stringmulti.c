/*
 * stringmulti.c
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef char * string;

void strmulti (string,int);

int main(int argc, char **argv)
{
	if (argc != 3)
			{
				printf("\nImproper Input. Usage [./executable][STRING][NATURAL NUMBER]\n");
				exit(0);
			}

	else if (atof(*(argv + 2)) <= 0 || floor(atof(*(argv + 2))) != atof(*(argv + 2)))
	
			{
				printf("\nImproper Input. Usage [./executable][STRING][NATURAL NUMBER]\n");
				exit(0);
			}
	
	else 	{
				string str = *(argv + 1);
				int multi = atoi(*(argv + 2));
				
				strmulti (str,multi);
			}
	
	printf("\n");
	return 0;
}

void strmulti (string str, int multi)
{
	for (int i = 0; i < multi; i++)
	{
			printf("%s",str);
	}
}
