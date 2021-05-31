/*
 * SubsetStringReplacement.c
 *
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define NL printf("\n")

typedef char * string;


bool isVerbose = false;

void findNreplace (string,string,string);
int ISsubset (string,string);


void test_findNreplace();





int main(int argc, char **argv)
{
	
	
/*	if (argc != 4)
			{
				printf("\nImproper Input. Usage [./executable][STRING][STRING][STRING]\n");
				exit(0);
			}
	else {
				string sup = argv[1];
				string sub = argv[2];
				string replacement = argv[3];
				
				findNreplace (sup,sub,replacement);
				
		 }*/
		 test_findNreplace();
	
	printf("\n");
	return 0;
}

void test_findNreplace()
{
	string sup[3]={"Arindam","Arpon","Urjoshi"};
	string sub[5]={"Ari","rp","josh"};
	
	string rep[5]={"Alu","*g","kulu"};
	
	for(int i=0;i<3;i++)
	{
	printf("Test Data\n Original String=[%s],Search String=[%s] Replacement String=[%s]\n",sup[i],sub[i],rep[i]);
	//printf("Expected Output=[%s]\n","Alundam");
	printf("**************Actual Output*******************\n");
	
	findNreplace (sup[i],sub[i],rep[i]);
	NL;//printf("\n");
    }

	
}




void findNreplace (string sup,string sub,string replacement)
{
	
	if(isVerbose) printf("Original String=[%s],Search String=[%s] Replacement String=[%s]\n",sup,sub,replacement);
	
	unsigned int supSize = strlen (sup);
	unsigned int subSize = strlen (sub);
	
	
	char truncate[subSize+1];
	for(int ind=0;ind<subSize+1;++ind)
	{
		truncate[ind]='\0';
	}
	
	
	char modified[supSize+1];
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
			for (int index = 0; index <= supSize - subSize; index ++)
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
					
							printf("%s\n",modified);
					
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
