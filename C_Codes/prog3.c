/*


This file is created by Arpon Basu.
Date:-


*/

#include<stdio.h>


void space(int);//Function 1





void space(int num)
{
int i=0;
while (i<num)
{
printf(" ");
i++;

}

}
int main()
{
int i=0;
for(i=0;i<5;++i)
{
space(i);
printf("%s\n","*");

}




return 0;
}



/*
int i,num=0;
for (i=0;i<10;++i)
{
printf("%d\n",i);
}
while (num<10)
{
printf("%d\n",num);
num++;
*/
