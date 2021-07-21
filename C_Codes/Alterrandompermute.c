/*
 * Alterrandompermute.c
 */

#include <stdio.h>
#include <stdlib.h>

int size;

void permute (double array[size]);
int pseudosgn (int);


int main(int argc, char **argv)
{
	printf("Enter the size(>=2) of the array: ");
    scanf("%d", &size);
	
	double array[size];
	
	printf("\nEnter elements of the array:\n");
	
	
	 for (int i = 0; i < size; ++i)
        {
            printf("Enter element a%d: ", i);
            scanf("%lf", &array[i]);
        }
	
	
	permute(array);
	
	return 0;
	
}

//int m = 0.5*size*(size + 1);
//int k = 1 + rand()%m; 

void permute (double array[size])
{
		double inv[size];
		
		int n = size;
		
		
		static int iterate = 10;
		
		int i = rand()%n;
		int j = rand()%n;
		
		for (int index = 0;index < iterate;index += pseudosgn((i - j)*(inv[i] - inv[j])))
		{
				inv[i] = array[j];			
				inv[j] = array[i];		
			
				int l;
				if ((l != i) && (l != j) && (l >= 0) && (l < n))
				{
						inv[l] = array[l];
				}
			
				iterate--;
				permute(inv);
		}
	
		
		if (iterate == 0)
		for (int i = 0; i < n; ++i)
			{
				printf("%lf\t", array[i]);	
			}
		
	
}

int pseudosgn (int n)
{
		int retval = 1;
		if (n <= 0) {retval = 0;}
		return retval;
}


