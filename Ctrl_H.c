/*
 * SubsetStringMultiReplacement.c
 *
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define NL printf("\n")

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
	
	
	
	char truncate[subSize+1];
	char modified[supSize+1];
	
	for(int ind=0;ind<subSize+1;++ind)
	{
		truncate[ind]='\0';
		
	}
	
	
	
	for(int ind = 0; ind < subSize + 1; ++ind)
	{
		modified[ind]='\0';
	}
	
		
	if (ISsubset (sup,sub) == 0)
		{
				printf("%s\n",sup);
		}
	
	else
		{
			for (int index = 0; index <= (supSize - subSize); index ++)
			{
			
					
						for (int j = 0;j < subSize ;++j)
							{
								truncate[j] = sup[j + index];
							}	
					
					
				
				   
				   
				   if (strcmp(truncate,sub) == 0)
					{ 
						for (int j = 0;j < supSize ;++j)
									{
										if (index <= j && j < index + subSize) 
											{
												modified[j] = replacement[j - index];
											}
									
										else 
											{
												modified[j] = sup[j];
											}
									}
					
							
							findNreplace(modified,sub,replacement);
							break;//This is required to ensure that the for loop doesn't continue further
							      //to execute the loop and instead restarts again with the semi-modified 
							      //answer.
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
