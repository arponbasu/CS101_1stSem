/* polymulti.c
 * This program multiplies two polynomials.
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * Date :- 22/10/20
 */



#include <stdio.h>

#define MAXSIZE 100
#define maxSIZE 50

int main(int argc, char **argv) 
{
    int m, n;
    double a[maxSIZE], b[maxSIZE], product[MAXSIZE];
    
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    
    
    
    

    printf("\nEnter the coefficients of the 1st polynomial:\n");
    for (int i = 0; i <= m; i++)
        {
            printf("Enter element a%d: ", i);
            scanf("%lf", &a[i]);
        }
        
     printf("\nEnter the coefficients of the 2nd polynomial:\n");
    
    for (int i = 0; i <= n; ++i)    
        {
            printf("Enter element b%d: ", i);
            scanf("%lf", &b[i]);
        }

    // multiplying the polynomials

      /*      for (int i = 0; i <= m + n; ++i)
            {
				product[i]=0;
				
				for (int j = 0; j <= min (i,m) ; ++j)  
				{
						product[i] += a[j]*b[i-j];
				}
			}	*/
			
           
           
           
           
           for(int kk=0;kk<=m+n;++kk)
			{
				product[kk]=0;
			}
           for (int ii = 0; ii <= m ; ++ii)
            {
				for (int jj = 0; jj <= n ; ++jj)  
				{
						product[ii+jj] = product[ii+jj] + a[ii]*b[jj];
				}
			}
   
   
   // printing the result
   
   
    printf("\nProduct of the two polynomials is: \n");
    
    for (int i = m + n; i >= 0; --i)
    {
            printf("%lf\t", product[i]);
	}
    
    return 0;
}

