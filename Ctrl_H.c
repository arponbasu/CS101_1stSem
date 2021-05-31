/*
 * SubsetString.c
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * To be corrected
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef char * string;
bool verbose=false;

int ISsubset (string,string);
int min(int,int);
void subset (string ,string );

int main(int argc, char **argv)
{
	
	if (argc != 3)
			{
				printf("\nImproper Input. Usage [./executable][STRING][STRING]\n");
				exit(0);
			}
	else {
				string sup = argv[1];
				string sub = argv[2];
				if (ISsubset (sup,sub) == 1) 
{
		printf("The smaller string is contained within the larger string");
}				
				else
{
		printf("The smaller string is NOT contained within the larger string");
}
				
				
				
				//subset(sup,sub);
		 }
	
	printf("\n");
	return 0;
}


void subset (string sup,string sub)
{
	unsigned int supSize = strlen (sup);
	unsigned int subSize = strlen (sub);
	bool isContained=true;
		for (int index = 0; index < supSize; index ++)
		{
			if (sup[index] == sub[0])
			{
				for (int i = index; i < min(index + subSize, supSize); i++)
				{
					if (sup[i+1] != sub[i-index]) 
					{
						isContained=false;
						break;
					}
				   
			    }
			   //isContained=true;
			}
			
			
			
			
		}
	
	
	
	if(isContained)
			{
			  printf("The smaller string is contained within the larger string\n");
		    }
		    else
		    {
			  printf("The smaller string is NOT contained within the larger string\n");

			}
	
	
	
}

int min (int a, int b)
{
	int retval = a;
	if (a > b) {retval = b;}
	return retval;
}



int ISsubset (string sup,string sub)
{
	unsigned int supSize = strlen (sup);
	unsigned int subSize = strlen (sub);
	
	int retval=0;
	
	char truncate[subSize+1];
	
	
	
	for(int ind=0;ind<subSize+1;++ind)
	{
		truncate[ind]='\0';
	}
	
if(verbose ) // for debugging purpose
{
int truncateSize=strlen(truncate);
printf("Sup String Size=%u Sub String Size=%u TruncateString=%u\n",
	                     supSize,           subSize,       truncateSize  );
}
	                     

	
		if (supSize < subSize) 
			{
			retval = 0;
			}
		
		else
		
			{
				for (int index = 0; index <= supSize - subSize; index ++)
				{
			
					
					for(int j = 0;j < subSize ;++j)
						{
							truncate[j] = sup[j + index];
						}	
			      
			      
			       if(verbose ){ // for debugging purpose
					   printf("Truncate=%s\n",truncate);
				   }
					
					
					retval = 0;
			
				   if (strcmp(truncate,sub) == 0)
					{
						retval = 1;
						break;
					}	
			
		      }
	
	
	
	
	}   
	
	return retval;
	
}
