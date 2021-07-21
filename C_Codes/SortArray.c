/*
 * SortArray.c
 */


#include <stdio.h>
#include <stdbool.h>

int size;

void sort (double array[size]);
bool ifSorted (double array[size]);
void printArray(double *array, int size);
void bubbleSort (double * arr,int size);
void swap (double *,double *);

void testSort();

int main(int argc, char **argv)
{
	/*
	printf("Enter the size(>=2) of the array: ");
    scanf("%d", &size);
	
	double array[size];
	
	printf("\nEnter elements of the array:\n");
	
	
	 for (int i = 0; i < size; ++i)
        {
            printf("Enter element a%d: ", i);
            scanf("%lf", &array[i]);
        }
	
	
	sort(array);
	*/
	
	testSort();
	
	return 0;
	
}

void testSort()
{
	
	double myarr[10]={1.23,4.23,4.23,5.67,7.87,1.11,0.3,6.1,6.9,8.8};
	
	
	printf("\n Input Array\n");
	printArray(myarr,10);
	
	//sort(myarr);
	bubbleSort(myarr,10);
	
	printf("\n Sorted Array\n");
	printArray(myarr,10);
	
}





void sort (double array[size])
{
	if (ifSorted(array))
	{
		//printArray(array,size);
		
		for (int i = 0; i < size; ++i)
			{
				printf("%lf\n", array[i]);	
			}
		
		
	}

	else
	{
		double marray[size];
		for (int i = 0; i < size - 1; ++i)
		{
				if (array[i] <= array[i+1])
				{
						marray[i] = array[i];
				}
				else
				{
						
						
						marray[i] = array[i+1];
						marray[i+1] = array[i];
						//marray[i+2] = array[i+2];
						
						for (int j = i + 2; j < size; ++j)
						{
								marray[j] = array[j];
						}
						break;
				}
		}
		sort(marray);
	}

}

bool ifSorted (double array[size])
{
	int retval = true;
	
	for (int i = 0; i < size-1; ++i)
			{
					if(array[i] > array[i+1]) 
					{
						retval = false;
						break;
					}
			}
	
	return retval;
	
}

void bubbleSort (double * arr,int size)
{
	for (int i = 0; i < size - 1; ++i)
		{
				for(int j= i + 1; j < size - 1;++j)
				 {
					 if(*(arr+i)>*(arr+j))
					 {
						swap(arr+i,arr+j);
					 }
				 }
		}
}

void printArray(double *array,int size)
{
	for (int i = 0; i < size; ++i)
			{
				printf("%lf\n", *(array+i));	
			}
}

void swap (double *x,double *y)
{
	double z;
	z = *x;
	*x = *y;
	*y = z;
	//printf("Value after swapping, a = %d, b = %d\n",a,b);
}
