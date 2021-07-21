#include<stdio.h>
#include<math.h>



typedef struct {
 
 double x;
 double y;
}point;


typedef struct {
 
 double x;
 double y;
}pair;

typedef struct {
 point A;
 point B;
 point C;
 
}triangle;



double side_length(point,point);
double dist(point,point);
point refl(point,char);


int main(int argc , char ** argv)
{
	 //point p1;
	 //point p2;

	//p1.x=2.23;

    //p1.y=1.87;


    triangle t1;
    t1.A.x = 0.0;
    t1.A.y = 0.0;

    t1.B.x = 4.0;
    t1.B.y = 0.0;

    t1.C.x = 0.0;
    t1.C.y = 3.0;




    printf("Side length AB = %lf\n",side_length(t1.A,t1.B));
    printf("Side length BC = %lf\n",side_length(t1.B,t1.C));
    printf("Side length CA = %lf\n",side_length(t1.C,t1.A));

    printf("Point after X-reflection = (%lf,%lf)\n",refl(t1.C,'X').x,refl(t1.C,'X').y);





    //printf("Dis from origin=%lf",pow((p1.x*p1.x + p1.y*p1.y),0.5));
    
	return 0;
}


double side_length(point p1,point p2)
{

    //printf("Point p1=(%lf,%lf)\n",p1.x,p1.y);
    //printf("Point p2=(%lf,%lf)\n",p2.x,p2.y);
	return dist(p1,p2);
}

double dist(point p1,point p2)
{

	return pow(((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y)),0.5);

}



point refl(point P,char ax)
{
	point Q;

	if(ax == 'X')
	{
	Q.x = P.x;
	Q.y = -P.y;
	}
	



	else if(ax == 'Y')
	{
	Q.x = -P.x;
	Q.y = P.y;
	}

	return Q;
}