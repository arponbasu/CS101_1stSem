/*
 * pointer_learning.c
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


void printString(char *,int );


int main(int argc, char *argv[])
{
	//printf("\n Arg Count=%d",argc);
	//printf("\n Argument=%s",argv[1]);
	
	int p1=10;
	int * p2 ;
	int arr[3]={9,34,24};
	
	printf("Value of P1=%d\n",p1);
	printf("Address of Variable p1= %p\n",&p1);
	printf("Address of Variable p2=%p\n",p2);
	
	p2=&p1;
	printf("Address of Variable p2=%p\n",p2);
	printf("Value of Variable p2=%d\n",*p2);
	printf("Next Pointer Address of p2=%p\n",p2++);
	
	p2=arr;
	printf("Address of array[0]=%p\n",arr);
	printf("Address of Variable p2=%p\n",p2);
	printf("Value of Variable p2=%d\n",*p2);
	printf("Next Pointer Address of p2=%p\n",p2++);
	printf("Next Pointer Address value of p2=%d\n",*(p2++));
	
	char * name = "ArponArpon BASu Basu";
	
	printString(name,5);
	printString(name+4,3);
	
	return 0;
}

void printString(char  * str,int num)
{
	char arr[100];
	for(int i=0;i<num;i++)
	{
		arr[i]=*(str+i);
	}
	arr[num]='\0';
	printf("%s\n",arr);
	
}

