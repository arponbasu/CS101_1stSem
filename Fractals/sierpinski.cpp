#include <simplecpp>

void drawTriangle (double len)
{
penUp();
right(30);
forward(len/sqrt(3));
left(150);
penDown();
repeat(3)
{
forward(len);
left(120);
}
penUp();
left(30);
forward(len/sqrt(3));
right(150);
penDown();
}


void sierpinski(double s, double t)
{
if (!(t > s))
{
penUp();
left(90);
forward(s/(2*sqrt(3)));
right(90);
penDown();
sierpinski(s/2,t);
penUp();
right(90);
forward(s/(2*sqrt(3)));
left(90);
penDown();



penUp();
right(30);
forward(s/(2*sqrt(3)));
left(30);
penDown();
sierpinski(s/2,t);

penUp();
left(180);
forward(s/2);
right(180);
penDown();
sierpinski(s/2,t);
penUp();
left(30);
forward(s/(2*sqrt(3)));
right(30);
penDown();
}
else
{
drawTriangle(s);
}
}

main_program
{
	turtleSim();
	double s,t;
	cin >> s >> t;
	sierpinski(s,t);
}



