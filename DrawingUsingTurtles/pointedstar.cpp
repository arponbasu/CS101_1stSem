#include <simplecpp>

int main()
{
	turtleSim();

	double theta = 720.0/7;

	repeat(7)
	{
		forward(100);
		right(theta);
	}


	wait(50);
	return 0;
}
