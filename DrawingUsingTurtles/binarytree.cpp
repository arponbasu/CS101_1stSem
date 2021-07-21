#include <simplecpp>

void binary (double len,int n)
{
    if (n > 1)
    {
        binary(0.5*len,n-1);
        binary(len,1);
        right(45);
        forward(len);
        right(90);
        forward((1-pow(2.0,1-n))*len);
        left(135);
        binary(0.5*len,n-1);
        left(135);
        forward(len);
        right(135);
    }
    else
    {
        left(45);
        forward(len);
        right(90);
        forward(len);
        left(180);
        forward(len);
        right(135);
    }
}




int main()
{
    turtleSim("myturtle",1920,760);

    penUp();
    left(180);
    forward(500);
    left(180);
    penDown();

    binary (200.0,3);


	wait(50);
	return 0;
}










