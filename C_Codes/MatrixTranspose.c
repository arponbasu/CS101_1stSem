/*
This program evaluates the transpose of any given matrix.
Written By: Arpon Basu
Date: Oct 30 , 2020
*/
#include <stdio.h>
#define MAXSIZE 100

int main() 
{
    int m, n, i, j;
    double  a[MAXSIZE][MAXSIZE], transpose[MAXSIZE][MAXSIZE];
    
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    

    printf("\nEnter elements of 1st matrix:\n");
    
    
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%lf", &a[i][j]);
        }

   

    // Taking Transpose

            for (i = 0; i < n; ++i)
            {
				for (j = 0; j < m; ++j)  
				{
							transpose[i][j] = a[j][i];
				}
			}	
 
 
 
   // printing the result
   
   
    printf("\nTranspose: \n");
    
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j) 
        {
            printf("%lf\t", transpose[i][j]);
        }
        printf("\n\n");
	}

    return 0;
}
