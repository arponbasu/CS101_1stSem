/*
This program evaluates the product of any two given matrices.
Written By: Arpon Basu
Date: Oct 19 , 2020
*/
#include <stdio.h>
#define MAXSIZE 10000

int main() {
    int m, n, p, i, j, k;
    double  a[MAXSIZE][MAXSIZE], b[MAXSIZE][MAXSIZE], product[MAXSIZE][MAXSIZE];
    
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter p: ");
    scanf("%d", &p);

    printf("\nEnter elements of 1st matrix:\n");
    
    
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%lf", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < p; ++j) 
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%lf", &b[i][j]);
        }

    // multiplying two matrices

            for (i = 0; i < m; ++i)
            {
            
				for (j = 0; j < p; ++j)  
				{
					product[i][j]=0;
					
					for (k = 0; k < n; ++k)
						{
							product[i][j] += a[i][k]*b[k][j];
                
						}
				}
			}	
 
 
 
   // printing the result
   
   
    printf("\nProduct of two matrices: \n");
    
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < p; ++j) 
        {
            printf("%lf\t", product[i][j]);
        }
        printf("\n\n");
	}

    return 0;
}
