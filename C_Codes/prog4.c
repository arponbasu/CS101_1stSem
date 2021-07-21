/*
This file defines various recursions.
This file is created by Arpon Basu.
Date:-7/10/20
*/
#include<stdio.h>
#include<math.h>
//int sum (int);//Calculates sum of numbers from 1 to n.
//int Fib (int);//Calculates the nth Fibonacci number, with F0 = F1 =1.
//int Oddsum (int);//Calculates sum of n odd numbers.
//int OddKsum (int);//Calculates sum of odd numbers till n.
//int OddJsum (int);//Calculates sum of "3k+1" numbers till n.
int Josephus (int);//The Josephus function.
//float Aseries (float,float,int);//Calculates sum of any arbitrary AP.
//int gcd (int,int);//Calculates gcd of two numbers by Euclid's algorithm.




/*
int main()
{
int n,S;

printf("Enter the number whose 'sum' you want to calculate?\n");  
	scanf("%d",&n);
		S = sum (n);
			printf("sum = %d\n",S);  
}




int sum(int n)//Calculates sum of numbers from 1 to n by recursive methods.  
{  
    if (n==1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n+sum(n-1);  
    }  
}  
*/

/*
int main()
{
int n,F;

printf("Enter the term of the Fibonacci series you want to calculate?\n");  
	scanf("%d",&n);
		F = Fib (n);
			printf("Fib = %d\n",F);  
			


}




int Fib (int n)//Calculates the nth Fibonacci number, with F0 = F1 =1. 
{  
    if (n==0)  
    {  
        return 1;  
    }  
   
    else if (n==1)
    {
        return 1;
    }

    else   
    {  
        return Fib (n-1)+Fib (n-2);  
    }  
}  
*/

/*
int main()
{
int n,O;

printf("Enter the 'sum' of odd numbers you want to calculate?\n");  
	scanf("%d",&n);
		O = Oddsum (n);
			printf("Oddsum = %d\n",O);  
			


}




int Oddsum (int n) //Calculates sum of n odd numbers by recursive methods. 
{  
    if (n==1)  
    {  
        return 1;  
    }  
   
    

    else   
    {  
        return Oddsum (n-1)+2*n-1;  
    }  
}  


*/

/*
int main()
{
int n,O;

printf("Enter the boundary of the 'sum' of odd numbers till which you want to calculate?\n");  
	scanf("%d",&n);
		O = OddKsum (n);
			printf("OddKsum = %d\n",O);  
			


}




int OddKsum (int n) //Calculates sum of odd numbers till n by recursive methods and mod function. 
{  
    if (n==1)  
    {  
        return 1;  
    }  
   
       else if (n%2 ==1)
    {  
        return OddKsum (n-1)+n;  
    }  



     else 
    {  
        return OddKsum (n-1);  
    }  




}  
*/
/*
int main()
{
int n,O;

printf("Enter the boundary of the 'sum' of 3k+1 numbers till which you want to calculate?\n");  
	scanf("%d",&n);
		O = OddJsum (n);
			printf("OddJsum = %d\n",O);  
			


}




int OddJsum (int n) //Calculates sum of "3k+1" numbers till n by recursive methods and mod function.    
{  
    if (n==1)  
    {  
        return 1;  
    }  
   
    else if (n%3 ==2)
    {  
        return OddJsum (n-1);  
    }  



     else if (n%3 ==0)
    {  
        return OddJsum (n-2);  
    }  


    else 
    {
   

        return OddJsum (n-3)+n     ;  


    }

}  
*/

int main()
{
int n,J;

printf("Enter n \n");  
	scanf("%d",&n);
		J = Josephus (n);
			printf("Josephus number of n is = %d\n",J);  
			


}




int Josephus (int n) //Mathematical nature is such that a number "abc..yz" in binary is sent to "bc..yza".Applying this function on any number atmost the number of times of its number of digits in binary representation, all its zeroes eventually become the leading digit someday and consequently are erased. 
{  
    if (n==1)  
    {  
        return 1;  
    }  
   
    else if (n%2 ==0)
    {  
        return 2*Josephus (0.5*n)-1;  
    }  

    else 
    {
   

        return 2*Josephus (0.5*(n-1))+1     ;  


    }

}  

/*
int main()
{
float a,d,A;
int n;


printf("Enter a,d,n \n");  
	scanf("%f,%f,%d",&a,&d,&n);
		A = Aseries (a,d,n);
			printf("Sum is = %f\n",A);  
			


}




float Aseries (float a, float d, int n)//Calculates sum of any arbitrary AP by recursive methods.  
{  
    if (n==1)  
    {  
        return a;  
    }  
    else 
    {
        return Aseries (a,d,n-1)+(a+(n-1)*d)     ;  
    }

}  
*/
/*
int main()
{
int a,b;
int d;
int l;
printf("Enter a,b \n");  
	scanf("%d,%d",&a,&b);
		d = gcd (a,b);
			l=a*b/(gcd(a,b));
			printf("GCD of the given numbers is = %d\n",d);  
			printf("LCM of the given numbers is = %d\n",l); 

}
int gcd (int a,int b)//Calculates gcd of two numbers by Euclid's algorithm.  
{  
    if (a>=b)  
    {  
      if (a%b==0)
{
     return b;
}

else
{
    return gcd(b,a%b);
}


}  
   
    else (b>a)
{
   if (b%a==0)
{
     return a;
}

else
{
    return gcd(a,b%a);
}


         }
    
    
    
}  
*/
























