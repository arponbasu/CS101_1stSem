/*
This program evaluates the cross product of vector 1 with vector 2 by manually dictating each entry of the resultant answer vector.It's presumed that all vectors are exressed in an orthonormal basis.
Written By: Arpon Basu
Date: Oct 19 , 2020
*/
#include<stdio.h>

#define MAX_SIZE 3

float vector1[MAX_SIZE];
float vector2[MAX_SIZE];
float vector3[MAX_SIZE];


int main()
{

    vector1[0]=1.0;
    vector1[1]=-1.0;
    vector1[2]=0.0;

    vector2[0]=0.0;
    vector2[1]=1.0;
    vector2[2]=-1.0;


    vector3[0]= vector1[1]*vector2[2] - vector1[2]*vector2[1];
    vector3[1]= vector1[2]*vector2[0] - vector1[0]*vector2[2];
    vector3[2]= vector1[0]*vector2[1] - vector1[1]*vector2[0];

        int i;
        for (i=0;i<MAX_SIZE;i++)
            {
                printf ("%f\t",vector3[i]);
            }
}
