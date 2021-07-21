/*
 * NumberOfDigitsInString.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char * string;

unsigned int ascciToUint(char);
int numofd (string);
int digitCount(string str);


int main(int argc, char **argv)
{
	if (argc!=2)
			{
				printf("\nImproper Input. Usage [./executable][STRING]\n");
				exit(0);
			}
	else {
				string str = argv[1];
				//printf("Number of digits in the given string is = %d",numofd (str));
				printf("Number of digits in the given string is = %d",digitCount (str));
		 }
	
	printf("\n");
	return 0;
}

int numofd (string str)
{
	unsigned int strSize = strlen (str);
	unsigned int ascciToUintARRAY[strSize];
	
	for (int index = 0;index < strSize;index++)
	{
		ascciToUintARRAY[index] = ascciToUint(str[index]);
	}
	int count=0;
	for (int index = 0;index < strSize;index++)

	{
		if (((48 <= ascciToUintARRAY[index]) & (ascciToUintARRAY[index] <= 57)))    {count = count + 1;}
		
		
	}
		return count;

}

unsigned int ascciToUint(char ch)
{
	return (unsigned int)(ch);
}


int digitCount(string str)
{
	int retval=0;
	
	for(int index=0;index<strlen(str);++index)
	{
		unsigned int num=str[index];
		if(num >=48 && num <=57) retval++;
	}
	
	return retval;
}


