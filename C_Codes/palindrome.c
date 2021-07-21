/*
 * palindrome.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef char * string;

bool isPalindrome (string);


int main(int argc, char **argv)
{
	
	string str;
	
	if (argc!=2)
			{
				printf("\nImproper Input. Usage [./executable][STRING]\n");
				exit(0);
			}
	else {
		
		str = argv[1];
			
			if ( isPalindrome(str) ) {
				
				  
				  printf("The given string is a palindrome");
				
				}
		    else 
		    {
				
				  printf("The given string is NOT a palindrome");
				
			}
		
		}
	
	printf("\n");	
	return 0;
}




bool isPalindrome (string str)
{
	unsigned int strSize = strlen (str);
	
	bool retval = true;
	
	for (int index = 0;index < strSize;index++) /* looping over the received string */
	{
		
		       /* Checking for non equality in complementary position */
				
				if (str[index] != str[strSize-1-index]) 
				{
					/* Non equality in complementary position */
					retval = false;
					break;
				}
	
	
	}	
	
	
	return retval;
	
}
	
	
	














