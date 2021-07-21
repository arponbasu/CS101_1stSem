int gcd (int,int);//Calculates the gcd of two natural numbers
int tot (int);//Calculates the Euler's totient function of a natural number
int primechecker (int);//Checks whether a natural number is a prime or not by returning 1 if it is, 0 otherwise
void factor (int);//Prints the prime factors of a natural number greater than 1 (including their multiplicity)
int tau (int);//Counts the number of divisors (including 1 and itself) of a natural number
int LCM (int,int);//Calculates the LCM of two natural numbers
int sigma (int);//Evaluates the sum of the divisors (including 1 and itself) of a natural number
void primulti (int,int);//Prints the first integer the number of times of the second integer.
double inte (double,double);//Evaluates the definite integral of a function by first principle methods.The bounds on the integral are the input variables.The function has to be given from the user side.
int sgn (float);//The signum function
int u (int);//Evaluates the unit digit of a number.
int d (int);//Evaluates the tens digit of a number.
int h (int);//Evaluates the hundreds digit of a number.
int t (int);//Evaluates the thousands digit of a number.
float max(float,float);// Function-1
float AM(float,float);// Function-2
float min(float,float);// Function-3
void  eq(float,float);// Function-4
double mod (double);


void factor (int n)
{
   int i;
  // printf("%d:",n);
   for(i=2;i<=n;++i)
    {
      if (n%i==0)
        {
         if (primechecker (i) == 1) 
        
            {
                 if (i<n)
		{
                         printf("%d\t",i);
                         factor(n/i);
                         break;
	         } 

                 else printf("%d\n",n);
		
             }


         }


    }   


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


int LCM (int a,int b)
{
 int i;
 int retval=-1;
	for (i=1;i<a+1;i++)
	{
		if ((i*b)%a == 0) 
		{
			retval=(i*b);
			break;
	    }
    }
    return retval;
}

int tau (int n) 
{
   int i;
   int count=0;
   for(i=1;i<=n;++i)
    {
      if (n%i==0)
        {
         count++;

        }
 
    }   

return count;
}
int sigma (int n)//Calculates the sum of divisors (including one and itself) of a given number by exploiting the mod function and a for loop. 
{
   int i;
   int sum=0;
   for(i=1;i<=n;++i)
    {
      if (n%i==0)
        {
         sum=sum+i;
        }
 
    }   
return sum;
}

void primulti (int a,int b) //Prints the first integer the number of times of the second integer.
{
    for(int j=1;j<=b;++j)
    {
      printf("%d\n",a);
    }
}

int sgn (float x)
{
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

int u (int n)//Evaluates the unit digit of a number by exploiting the mod function.
{
return (n%10);
}


int d (int n)//Evaluates the tens digit of a number by exploiting the mod function.
{
return ((n%100-n%10)/10);
}


int h (int n)//Evaluates the hundreds digit of a number by exploiting the mod function.
{
return ((n%1000-n%100)/100);
}


int t (int n)//Evaluates the thousands digit of a number by exploiting the mod function.
{
return ((n%10000-n%1000)/1000);
}








float max(float a,float b)
{
/*  Function-1
    Written By: Arpon Basu
    Created: 
    Last Edited: 

    Brief description:Reports greater of the 2 numbers
*/

float c;

	if(a<=b)
	{
		c=b;
	}
	else if(b<a)
	{
		c=a;
	}
	


return c;

}

float min(float a,float b)
{
float c;
	if(a>=b)
	{
		c=b;
	}
	else if(a<b)
	{
		c=a;
	}
	
return c;
}


void eq(float a,float b)
{	
printf("Received %f and %f\n",a,b);
	
	if(a != b)
	{
		
                printf("They are different\n");
	}
	else
	{
		printf("They are same\n");
	}

printf("New value of a = %f and b = %f\n",a,b);
}


float AM(float a,float b)
{
return 0.5*(a+b);
}

double mod (double y)
{
	double retval = y;
	if (y < 0) {retval = -y;}	
	return retval;
}
