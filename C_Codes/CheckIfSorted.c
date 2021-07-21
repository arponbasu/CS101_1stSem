/*
 * CheckIfSorted.c
 * 
 */


#include <stdio.h>

int size;

int IfSorted (double array[size]);

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
	
	
	
	
	
	if (IfSorted(array) == 0) 
		{
				printf("The array is NOT sorted.");
		}
	
	else
		{
				printf("The array is sorted.");
		}
	
	return 0;
	
}

int IfSorted (double array[size])
{
	int retval = 1;
	
	for (int i = 0; i < size-1; ++i)
			{
					if(array[i] > array[i+1]) 
					{
						retval = 0;
						break;
					}
			}
	
	return retval;
	
}
