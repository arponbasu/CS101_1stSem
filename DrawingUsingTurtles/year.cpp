#include<simplecpp>

void two (double len)
{
    repeat(2)
    {
        forward(len);
        right(90);
    }

    repeat(2)
    {
        forward(len);
        left(90);
    }

    forward(len);

}

void zero (double len)
{
    repeat(4)
    {
       forward(len);
       left(90);
    }

}


void twenty (double len)
{
    two(len);
    penUp();
    forward(len);
    penDown();
    zero(2*len);

}





int main()
{
    double len = 50;

    turtleSim("year",1080,1080);
    repeat(2)
    {
    twenty(len);
    penUp();
    forward(3*len);
    left(90);
    forward(2*len);
    right(90);
    penDown();
    }



    wait(500);
    return 0;
}
