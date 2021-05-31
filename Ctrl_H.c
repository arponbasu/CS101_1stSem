/*
 * SubsetStringMultiGeneralReplacement.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef char * string;


void findNreplace (string,string,string);
int ISsubset (string,string);


int main(int argc, char **argv)
{
	
	
	if (argc != 4)
			{
				printf("\nImproper Input. Usage [./executable][STRING][STRING][STRING]\n");
				exit(0);
			}
	else {
				string sup = argv[1];
				string sub = argv[2];
				string replacement = argv[3];
				
				findNreplace (sup,sub,replacement);
				
		 }
	
	printf("\n");
	return 0;
}





void findNreplace (string sup,string sub,string replacement)
{
	unsigned int supSize = strlen (sup);
	unsigned int subSize = strlen (sub);
	unsigned int repSize = strlen (replacement);
	
	
	
	char truncate[subSize+1];
	
	
	for(int ind=0;ind<subSize+1;++ind)
	{
		truncate[ind] = '\0';
		
	}
	
	
	if (ISsubset (sup,sub) == 0)
		{
				printf("%s",sup);
		}
	
	else
		{
			for (int index = 0; index <= (supSize - subSize); index ++)
			{
			
					
						for (int j = 0;j < subSize ;++j)
							{
								truncate[j] = sup[j + index];
							}	
					
					char chop[supSize-subSize-index+1];	
		     
		    for(int ind=0;ind<supSize-subSize-index;++ind)
				{
					chop[ind] = sup[index+subSize+ind];
		
				}
		     chop[supSize-subSize-index] = '\0';
					
				
				   
				   
				   if (strcmp(truncate,sub) == 0)
					{ 

						for (int k = 0; k < index; k ++) {printf("%c",sup[k]);}
						for (int l = 0; l < repSize; l ++) {printf("%c",replacement[l]);}
						findNreplace(chop,sub,replacement);
						break;
					}	
		
			
		     
		     
		     
		     
		     
		     }
	
			
			
		}
	
	
	
	
	
	
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


