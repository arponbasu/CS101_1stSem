/*
 * checkbrackets.c
 */


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


typedef char * string;


bool ISbracbal (string);



int main(int argc, char **argv)
{
	if (argc != 2)
			{
				printf("\nImproper Input. Usage [./executable][STRING]\n");
				exit(0);
			}
	else 
			{
				string str = argv[1];
				
				if (ISbracbal(str)) {printf("The brackets are balanced");}
				else {printf("The brackets are NOT balanced");}
			}
	
	printf("\n");
	return 0;
}


bool ISbracbal (string str)
{
	int count = 0;
	
	bool retval = true;
	
	for (int i = 0; i < strlen (str); i++)
	{
	
		if (*(str + i) == '{') {count++;}
		else if (*(str + i) == '}') {count--;}
		
		
		
		if (count < 0) 
		{
			retval = false;
			break;
		}
	
	}
	
	if (count > 0)
	{
		retval = false;
	}

	return retval;
}



