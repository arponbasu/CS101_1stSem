/*
Very basics of c.
Written By: Arpon Basu
Date: Oct 13 , 2020
*/
#include<stdio.h>

int main()
{
float dumb;
int numb=0x55;

//printf("hello world.I am Arpon\nabcdef\n");// this is a comment

printf("enter a number =");
scanf("%f",&dumb);//"enter a number = "
printf("entered number is equal to %.3f\n",dumb);
dumb=dumb+31.59;
printf("next number to the given number = %.2f\n",dumb);
printf("location of dumb = %p\n",&dumb);
printf("value of numb = %x in hex %d in decimal\n",numb,numb);
}
