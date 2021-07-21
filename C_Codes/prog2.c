/*


This file is created by Arpon Basu.
Date:-14th July


*/

#include<stdio.h>
/*
int mysum(int,int);
int mysum(int a,int b)
{
int c;
c=a+b*b;
return c;
}
*/
/*float clamp(float,float,float);
float clamp(float a,float b,float c)
{
float d;
if(a<c)
{
if(c<b)
{
d=c
;}
else 
{
d=b
;}
}
else
{
d=a
;}
return d;}
*/
float max(float,float);// Function-1
float AM(float,float);// Function-2
float min(float,float);// Function-3
void  eq(float,float);// Function-4





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

float clamp(float,float,float);
float clamp(float a,float b,float c)
{
float d;



}
return d;}







float AM(float a,float b)
{
return 0.5*(a+b);
}












int main()
{
/*
printf("I am computing my program for number 5 and 8\n");
mysum(5,8);
printf("Sum is = %d\n",mysum(5,8));
printf("I am computing my program for number 8 and 5\n");
mysum(8,5);
printf("Sum is = %d\n",mysum(8,5));
if(mysum(5,8) == mysum(8,5))
{
printf("They are same")
;}
else
{
printf("They are different\n")
;}
*/
/*
printf("I am computing clamp function for the numbers 1.1, 2.2 amd 1.75\n");
clamp(1.1,2.2,1.75);
printf("Answer is = %f\n",clamp(1.1,2.2,1.75));
printf("I am computing clamp function for the numbers 1.1, 2.2 amd 0.7\n");
clamp(1.1,2.2,1.75);
printf("Answer is = %f\n",clamp(1.1,2.2,0.7));
printf("I am computing clamp function for the numbers 1.1, 2.2 amd 5.7\n");
clamp(1.1,2.2,5.7);
printf("Answer is = %f\n",clamp(1.1,2.2,5.7));
*/
printf("I am computing max function for the numbers 1.1 and 2.2\n");
max(1.1,2.2);
printf("Answer is = %f\n",max(1.1,2.2));
printf("I am computing max function for the numbers 1.1 and 1.1\n");
max(1.1,1.1);
printf("Answer is = %f\n",max(1.1,1.1));
printf("I am computing min function for the numbers 1.1 and 2.2\n");
min(1.1,2.2);
printf("Answer is = %f\n",min(1.1,2.2));
printf("I am computing min function for the numbers 1.1 and 1.1\n");
min(1.1,1.1);
printf("Answer is = %f\n",min(1.1,1.1));
printf("I am computing AM function for the numbers 1.1 and 2.2\n");
AM(1.1,2.2);
printf("Answer is = %f\n",AM(1.1,2.2));
eq(1,2);
return 0;
}





