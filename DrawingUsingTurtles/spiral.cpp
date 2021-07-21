#include <simplecpp>

int main()
{
    int n = 10, index = 1;

    turtleSim();


    repeat(n)
    {
        forward(10*index);
        right(90);
        index ++;
    }

    wait(50);

	return 0;
}

