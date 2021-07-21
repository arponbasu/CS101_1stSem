/*
 * boundfunc.c
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 *
 */


#include <stdio.h>
#include <stdlib.h>

#define nl \n

float bound (float,float,float);

int main(int argc, char **argv)
{
	float min = atof(argv[1]);
	float val = atof(argv[2]);
	float max = atof(argv[3]);
			
			
		printf("%f: ",bound (min,val,max));
	
	
	
	return 0;
}

float bound (float min,float val,float max)
{
			if (val <= min) {return min;}
			else if (max <= val) {return max;}
			else {return val;}
}	
