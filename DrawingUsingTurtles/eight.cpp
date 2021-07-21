#include <simplecpp>

void drawCircle(double radius)
{
	penUp();
	forward(radius);
	right(90);
	penDown();

	int n = 360;
	double ext = 360.0/n;

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

int main()
{
	double radius = 50.0;


	turtleSim();
	drawCircle(radius);
	right(90);
	penUp();
    forward(2*radius);
    right(90);
    penDown();
    drawCircle(radius);

    wait(50);


	return 0;
}
