/*
Evaluates the signum function.
Written By: Arpon Basu
Date: Oct 19 , 2020
*/
#include<stdio.h>
int sgn (float);
int det();
int main()
{
	int a[3][3],i,j;
    
    printf("\nEnter elements of the matrix:\n");
    
    for (i = 0; i < 3; ++i)
     {
        for (j = 0; j < 3; ++j) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
      }  

    printf("Determinant of the given matrix is = %d\n",det());
}


int det(),i,j,k;
    for (i=1;i<=3;i++)
        {   
    for (j=1;j<=3;j++)
{
    for (k=1;k<=3;k++)
    {
            det = 0;
            det += sgn(k-i)*sgn(k-j)*sgn(j-i)*a[1][i]*a[2][j]*a[3][k];
            return det;
    }


}
        }
int sgn (float x)
{
	/*if (x > 0) return 1;
	
	else if (x < 0) return -1;
	
    else return 0;*/
    
    int retval=0;
    
    if(x>0)
    {
		retval=1;
	}
	else
	{
	    retval=-1;
	}
	
	return retval;
}
