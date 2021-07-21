/*
 * SingleCharacterSplicing.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SPACE 32


typedef char * string;


string splice (string,char);
void delete (string,char);





int main(int argc, char **argv)
{
	
	if (argc != 3)
			{
				printf("\nImproper Input. Usage [./executable][STRING][CHARACTER]\n");
				exit(0);
			}
	else {
				string str = argv[1];
				char ch = argv[2][0];
				printf("Received char : %c\n",ch);
				//printf("%s\n",splice(str,ch));
				
				delete(str,ch);
		 }
	
	printf("\n");
	
	
	return 0;
}

string splice (string str, char ch)  
{
	for(int index = 0; index < strlen(str);++index)
	{
		unsigned int num = str[index];
		if(num == (unsigned int)(ch)) 
		{
			str[index] = SPACE;
		}
	}
	return str;
}

void delete (string str, char ch)  
{
	unsigned int strSize = strlen(str);
	char aux[strSize];
	for (int i = 0; i < strSize;i++)
	{
			aux[i] = '\0';
	}
	int counter = 0;
	for(int INDEX = 0; INDEX < strSize; ++INDEX)
	{
		
	  if(str[INDEX] != ch)
		{
		   aux[counter] = str[INDEX];
		   counter++;
		} 
		
		/* ##########how to make a naive mistake ####################
		 if (str[INDEX] != (unsigned int)(ch)) counter++ ;
		aux[counter] = str[INDEX]; */
	}
	
	printf("Old String [%s]\nNew String[%s]\n",str,aux); 
	
}
