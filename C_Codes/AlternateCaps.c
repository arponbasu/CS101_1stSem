/*
 * AlternateCaps.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char * string;

unsigned int ascciToUint(char);
char UintToascci (unsigned int);
void AlternateCaps (string);


int main(int argc, char **argv)
{
	if (argc!=2)
			{
				printf("\nImproper Input. Usage [./executable][STRING]\n");
				exit(0);
			}
	else {
				string str = argv[1];
				AlternateCaps (str);
		 }
	
	printf("\n");
	return 0;
}

void AlternateCaps (string str)
{
	unsigned int strSize = strlen (str);
	int ascciToUintARRAY[strSize];
	for (int index = 0;index < strSize;index++)
  {
    ascciToUintARRAY[index] = ascciToUint(str[index]);
  }
	
	for (int index = 0;index < strSize;index++)

	{
		if (index%2 == 0)
		   {
				if (
						((0 <= ascciToUintARRAY[index]) & (ascciToUintARRAY[index] <= 96))    ||  
						((123 <= ascciToUintARRAY[index]) & (ascciToUintARRAY[index] <= 127))   
				   )  	{printf("%c",str[index]);}
		
				else    {printf("%c",UintToascci(ascciToUintARRAY[index]-32));}
	       }
	
	
	    else
	         {
	
	            if (
						((0 <= ascciToUintARRAY[index]) & (ascciToUintARRAY[index] <= 64))    ||  
						((91 <= ascciToUintARRAY[index]) & (ascciToUintARRAY[index] <= 127))   
				   )  	{printf("%c",str[index]);}
		
				else    {printf("%c",UintToascci(ascciToUintARRAY[index]+32));}
	
             
             }
	
	
	}
}

unsigned int ascciToUint(char ch)
{
	return (unsigned int)(ch);
}
char UintToascci (unsigned int num)
{
	return (char)(num);	
}


