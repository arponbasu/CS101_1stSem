/*
 * memory_experiment.c
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
#include<stdlib.h>
int main(int argc, char **argv)
{
	int dataCount=10000;
	
	
	
	
	for(int i=0;i<dataCount;++i)
	{
		long long int *ptr;
		if(dataCount<900)
		{
		    ptr = (long long int *)malloc(dataCount*sizeof(long long int ));
	    }
		   
		   
		    free(ptr);
	    
	    
	}
	
	printf("\n I am Alive after %d loop\n",dataCount);
	return 0;
}
