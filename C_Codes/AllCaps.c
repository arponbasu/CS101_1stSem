/*
 * AllCaps.c
 *
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//// Type definitions
typedef char * string;

// Function Definitions
unsigned int ascciToUint(char);
char UintToascci (unsigned int);
void AllCaps (string);
string toUpper (string);

bool isDigit(char);


int main(int argc, char **argv)
{

	//printf("Checking isDigit Function for e : %d\n",isDigit('e')); // false
	//printf("Checking isDigit Function for 8 : %d\n",isDigit('8')); // true

	if (argc!=2)
			{
				printf("\nImproper Input. Usage [./executable][STRING]\n");
				exit(0);
			}
	else {
				string str = argv[1];
				AllCaps (str);
				printf("\n*****************\n");
				printf("%s\n",toUpper(str));
		 }

	printf("\n");
	return EXIT_SUCCESS;
}

void AllCaps (string str)
{
	unsigned int strSize = strlen (str);
	int ascciToUintARRAY[strSize];
	for (int index = 0;index < strSize;index++)
  {
    ascciToUintARRAY[index] = ascciToUint(str[index]);
  }



	for (int index = 0;index < strSize;index++)

	{
		if (
				((0 <= ascciToUintARRAY[index]) & (ascciToUintARRAY[index] <= 96))    ||
				((123 <= ascciToUintARRAY[index]) & (ascciToUintARRAY[index] <= 127))
		   )    {printf("%c",str[index]);}

		else    {printf("%c",UintToascci(ascciToUintARRAY[index]-32));}
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


bool isDigit(char ch) // Implemented by Arindam Basu on Oct 26 , 2020
{
	/* This function accepts a character, inspects it and returns  true if character
	 * is a digit , else returns false
	 */

	bool retval=false;
	unsigned int num=ch;
	if(num >=48 && num <=57)
	{
	   retval=true;
    }

    return retval;
}


string toUpper (string str)  // Implemented by Arindam Basu on Oct 26 , 2020
{
	for(int index=0;index<strlen(str);++index)
	{
		unsigned int num=str[index];
		if(num >='a' && num <='z')
		{
			str[index]=num-32;
		}
	}


	return str;
}
