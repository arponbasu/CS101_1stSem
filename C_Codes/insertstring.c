/*
 * insertstring.c
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef char * string;

void insert (string,string,int);

int main(int argc, char **argv)
{
	if (argc != 4)
			{
				printf("\nImproper Input. Usage [./executable][STRING][STRING][WHOLE NUMBER]\n");
				exit(0);
			}

	else if (atof(*(argv + 3)) < 0 || floor(atof(*(argv + 3))) != atof(*(argv + 3)))
	
			{
				printf("\nImproper Input. Usage [./executable][STRING][STRING][WHOLE NUMBER]\n");
				exit(0);
			}
	
	else 	{
				string sup = *(argv + 1);
				string sub = *(argv + 2);
				int index = atoi(*(argv + 3));
				
				insert (sup,sub,index);
				
			}
	
	printf("\n");
	return 0;
}


void insert (string sup,string sub,int index)
{
	unsigned int supSize = strlen (sup);
	unsigned int subSize = strlen (sub);
	
	if (index >= supSize)
	{
		printf("%s",sup);
	}
	
	else
	{
		
		for(int i = 0; i < index; i++)
		{
			printf("%c",*(sup + i));
		}
		
		for(int i = 0; i < subSize; i++)
		{
			printf("%c",*(sub + i));
		}
		
		for(int i = index; i < supSize; i++)
		{
			printf("%c",*(sup + i));
		}
		
		
	}
	
}
