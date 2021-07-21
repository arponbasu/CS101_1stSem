/*
 * ReverseString.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char * string;

void reverse (string);
int main(int argc, char **argv)
{
	
	
	
	if (argc!=2)
			{
				printf("\nImproper Input. Usage [./executable][STRING]\n");
				exit(0);
			}
	else {
				string str = argv[1];
				reverse (str);
		
		 }
	
		
	return 0;
}






void reverse (string str)
{
					int i;
					for (i = strlen(str)-1;i >= 0;i--)
						{
								printf("%c",str[i]);
						}
			
	printf("\n");
	
}


