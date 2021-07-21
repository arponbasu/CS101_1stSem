/*
 * 7circles.cpp
 */


#include <simplecpp>



void drawCircle (double) ;
void adjustment();

double radius;

bool alternate = false;

int main()
{
	
	
	cout << "Enter the radius";
	cin >> radius;
	
	turtleSim();
	right(60);
	repeat(6)
	{
		drawCircle(radius);
		penUp();
		forward(2*radius);
		right(60);
	}
	
	right(60);
	penUp();
	forward(2*radius);
	drawCircle(radius);
	
	
	
	
	
	
	wait(30);

	
	return 0;
}

void drawCircle(double radius)
{
	if (alternate)     {adjustment();}
	
	
	penUp();
	forward(radius);
	right(90);
	penDown();
	
	int n = 360;
	double ext = 360/n;
	
	double incre = 2*radius*sin(3.141592/n);
	
	repeat(n)
	{
		forward(incre);
		right(ext);
	}
	
	penUp();
	right(90);
	forward(radius);
	penDown();
	left(180);
}




void adjustment()
{
	penUp();
	forward(radius);
	right(90);
	penDown();
}


