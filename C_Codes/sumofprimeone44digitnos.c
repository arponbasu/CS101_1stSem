#include<stdio.h>

int mid (int);
int sum (int);
int gcd (int,int);
int tot (int);
int primechecker (int);

int main()
{
int k;
k=0;
printf("Sum is = %d\n",sum(k));
}

int sum (int k)
{
int i;
int sum = 0;
for(i=1000;i<=9999;++i)
   { 
     if (primechecker(mid(i)) == 1) {sum = sum + i ;}
   }   
return sum;
}

int mid (int n)
{
return ((n%1000-n%10)/10);
}

int tot (int n) 
{
   int i;
   int count=0;
   for(i=1;i<=n;++i)
    {
      if (gcd(i,n)==1)
        {
         count++;

        }
 
    }   

return count;
}
int primechecker (int n)
{
if (tot(n)==n-1)
	{
        return 1;
        }
else {return 0;}
}
int gcd (int a,int b)  
{  
    if (a>=b)  
      {  
        

       if (a%b==0) {return b;}
        
       else {return gcd(b,a%b);}
        
       }
 
   
    else 
      {
         if (b%a==0) {return a;}

         else {return gcd(a,b%a);}

      }
}  

































