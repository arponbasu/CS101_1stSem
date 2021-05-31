/*
 * SubsetStringMulti.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char * string;

int MULTIsubset (string,string);

int main(int argc, char **argv)
{
	
	if (argc != 3)
			{
				printf("\nImproper Input. Usage [./executable][STRING][STRING]\n");
				exit(0);
			}
	else {
				string sup = argv[1];
				string sub = argv[2];
				printf("%d",MULTIsubset (sup,sub));
		 }
	
	printf("\n");
	return 0;
}

int MULTIsubset (string sup,string sub)
{
	unsigned int supSize = strlen (sup);
	unsigned int subSize = strlen (sub);
	
	int count = 0;
	
	char truncate[subSize+1];
	
	for(int ind = 0;ind < subSize+1 ;++ind)
	{
		truncate[ind] = '\0';
	}
		if (supSize < subSize) 
			{
				count = 0;
			}
		else
			{
				for (int index = 0; index <= supSize - subSize; index ++)
				{
					for(int j = 0;j < subSize ;++j)
						{
							truncate[j] = sup[j + index];
						}	

							if (strcmp(truncate,sub) == 0)
							{
								count++;
							}	
				}
	}   
	return count;
}
