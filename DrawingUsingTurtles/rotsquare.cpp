#include <simplecpp>



void drawSquare(double len)
{
    penUp();
    forward(0.5*len);
    left(90);
    penDown();
    forward(0.5*len);
    repeat(3)
    {
        left(90);
        forward(len);
    }
	left(90);
    forward(0.5*len);
    left(90);
    penUp();
    forward(0.5*len);
    left(180);
}


int main()
{
    turtleSim();

    int n = 10;

    double index = 1;
    double side = 400.0;
    double alpha = pow(2.0,-0.05);


    repeat(n)
    {
        drawSquare(side);
        index ++;
        side *= alpha;
        left(index);

    }
	wait(50);
	return 0;
}









