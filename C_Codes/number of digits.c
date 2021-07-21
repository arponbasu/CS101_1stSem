/*


This file is created by Arpon Basu.
Date:-7/10/20


*/





#include<stdio.h>
#include<math.h>

int main(int argc,char ** argv)
{
	printf("Number of arguments is= %d\n",argc);
    
       int n;   
     
      if(argc>1)
       {
         n=atoi(argv[1]);
       }
      else
      {
         return 0;
      }

     /* for (int i = 0; i < argc; ++i)
        {
        printf("argv[%d]: %s\n", i, argv[i]);
         }*/


        
	int c;
	//printf("Enter n =");
	//scanf("%d",&n);
        c=1+floor(log10(n));

printf("Number of digits in %d = %d\n",n,c);
return 1;
}


