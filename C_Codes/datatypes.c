/*
 * datatypes.c
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
#include <stdbool.h>
#define MAXSIZE 128

typedef unsigned int pint;

int count;
void myfunc();

int main(int argc, char **argv)
{
	int inum;
	float fnum;
	double dnum;
	char ch;
	unsigned int array[MAXSIZE];
	short snum;
	
	long int linum;
	long long int llinum;
	
	long double ldnum;
	
	bool bnum; // need stdbool.h
	
	enum {zero=0,one,two};
	enum {exitsuccess=0,exiterror};
	enum {x1=1,x2,x3,x4=84,x5,x6};
	
	pint x=9;
	//printf("My Positive integer=%u",x);
	myfunc();
	myfunc();
	
	return exitsuccess;
}


void myfunc()
{
	static int count =0;
	count++;
	printf("%d\n",count);
	
	
}

