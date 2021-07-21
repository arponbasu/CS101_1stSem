/*
 * learning.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <string.h>
typedef char * string;

unsigned int ascciToUint(char);
char UintToascci (unsigned int);



int main(int argc, char **argv)
{
	char ch='t';
	string  str="tiger";
	string  str2;
	unsigned int pos=7;
	
	
	
	printf("Charcter is :%c\n",ch);
	printf("String is :%s\n",str);
	printf("Given unsigned int = %u\n",pos);
	
	
	
	printf("\n Length of string [%s] is %lu",str,strlen(str));
	
	// Copying the string 
	
	//strcpy(str2,str);
	
    str2=str;
    printf("\n string str2 is [%s]",str2);
    
    
    printf("\nEnd Character of the string = [%c]",str[strlen(str)-1] );
    
    string  str3="Arpon Basu";
     printf("\n string str3 is [%s]\n",str3);
    
   int index=0;
    while(index!=strlen(str3))
    {
		printf("%c\t",str3[index]);
		index++;
		
	}

    printf("\nNumeric Value of Space is =%u\n",str3[5]);
    
    
    
    char str4[]="Hello";
    char str5[]={'w','o','r','l','d','\0'};
    //string str6=strcat(str4,str5);
	printf("\nConcatenation of string [%s] and [%s] \n",str4,str5);
	
	printf("Unsigned integer value of character %c is %u\n",'y',ascciToUint('y'));
	printf("Alphabet of character %u is %c\n",121,UintToascci(121));
    
	return 0;
}


unsigned int ascciToUint(char ch)
{
	
	return (unsigned int)(ch);
}




char UintToascci (unsigned int num)
{
	
	return (char)(num);
	
}


