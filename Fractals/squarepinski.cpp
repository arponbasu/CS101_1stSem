#include <simplecpp>

void drawSquare (double len)
{
penUp();
forward(len/2);
left(90);
penDown();
forward(len/2);
left(90);
repeat(3)
{
forward(len);
left(90);
}
forward(len/2);
penUp();
left(90);
forward(len/2);
left(180);
penDown();
}

void squarepinski(double s, double t)
{
drawSquare (s);
if (!(t > s))
{
squarepinski(s/3,t);
penUp();
left(45);
forward(s*sqrt(2)/3);
right(45);
penDown();
squarepinski(s/3,t);
penUp();
right(90);
forward(2*s/3);
left(90);
penDown();
squarepinski(s/3,t);
penUp();
left(180);
forward(2*s/3);
left(180);
penDown();
squarepinski(s/3,t);
penUp();
left(90);
forward(2*s/3);
right(90);
penDown();
squarepinski(s/3,t);
penUp();
right(45);
forward(s*sqrt(2)/3);
left(45);

}
else
{
drawSquare(s);
}
}

main_program
{
	turtleSim();
	double s,t;
	cin >> s >> t;
	squarepinski(s,t);
}



