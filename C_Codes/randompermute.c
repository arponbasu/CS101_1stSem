/*
 * randompermute.c
 */

#include <stdio.h>
#include <stdlib.h>






int permute (int,int,int);
void SWAP (int *,int *);
void swap (int *,int *);


int main(int argc, char **argv)
{
	int n = 10;





	 for (int j = 0; j < 0.5*n*(n+1); ++j)
    {
        for (int i = 0; i < n; ++i) 
        {
            printf("%d\t", permute(i,n,j));
            
        }
        printf("\n\n");
        getchar();
	}
	
	
/*	int a = 3, b = 2;
	
	printf("+++++++++++++++Swap by SWAP function++++++++++++\n");
	SWAP(&a,&b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	printf("+++++++++++++++Swap by swap function++++++++++++\n");
	swap(&a,&b);
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);*/
	
	
	
	
	return 0;
}


int permute (int k,int n,int iterate)
{
	if (k < 0 || k >= n) 
	{
		return -1;
	}
	
	else
	{
		int inv[n];
		for(int i = 0;i < n;i++)
		{
			inv[i] = i;
		}
		
		
		
		
		for (int index = 0;index < iterate;index++)
		{
			int i = rand()%n;
			int j = rand()%n;
			printf("i=%d j=%d\n",i,j);
			if ((i - j)*(inv[i] - inv[j]) > 0)
			{
							SWAP(&inv[i],&inv[j]);
							
			}
			
			
		}
	
		return (int)(inv[k]);
	
	
	}
	
}


void SWAP (int *a,int *b)
{
	*a = *a - *b;   
    *b = *a + *b;
	*a = *b - *a;
}
	
void swap (int *x,int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
	//printf("Value after swapping, a = %d, b = %d\n",a,b);
}	
	
	
