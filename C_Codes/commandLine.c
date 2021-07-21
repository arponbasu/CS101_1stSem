/*
 * commandLine.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 *
 */


#include <stdio.h>
#include "mathutils.h"

int main(int argc, char **argv)
{
	/*printf("Number of Argumnents:%d\n",argc);
	
	
	printf("Printing Arguments\n");
	
	for(int index=0;index<argc;++index)
	{
		printf("Argument:%s\n",argv[index]);
	}
	
	printf("+++++++++++++++++++++++++++++++++++\n");*/
	
	int num=atoi(argv[1]);
	printf("%d: ",num);
	factor(num);
	
	return 0;
}

