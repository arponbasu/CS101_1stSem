#include<stdio.h>
#include "mathutils.h"
 
//#define ARRAYcnt 3

void test_factor();
void test_totient();
void test_lcm();

int main()
{


test_factor();


//test_lcm();
}
void test_factor()
{
	//const int ARRAYcnt=2;
	//int ARRAY[ARRAYcnt];
	int ARRAY[]={1001};
	
	for(int i=0;i<sizeof(ARRAY)/sizeof(int);++i)
	/*EXTREMELY IMPORTANT:In our case, size of our array changes continuously, and everytime we change the number
	*of data points, we have to change ARRAYcnt too, and failure to do so may lead to partial execution , no difference or segmentation fault
	*of the program.Thus, wherever we need to input the size of the array, we use the "sizeof" feature:sizeof reports the number of bytes
	*needed to store the array.Thus its effectively the array count multiplied by the number of bytes needed to store any of its entries.
	*Note that the number of bytes used to store any specified data type is the same irrespective of its magnitude.Hence we divide the sizeof
	*the array by the sizeof its integer entries, which happens to be 4 bytes in this OS architecture.Why not hardcode the 4 then?'Cause this
	*number changes from device to device, and obviously we want our program to work universally without need of our intervention to make the
	things work.
	*/
	{
		printf("\nTesting factor function defined in mathutils.h for %d\n",ARRAY[i]);
	    factor(ARRAY[i]);
	}

 

}







/*
 * void test_totient()
{
	int n=12;
	
	printf("\nTTesting totient function defined in mathutils.h for %d =%d",n,tot(n));
	
}


void test_lcm()
{
	int a = 12,b = 8;
	printf("\nLCM of the given integers is = %d\n",LCM (a,b));
}
*/






