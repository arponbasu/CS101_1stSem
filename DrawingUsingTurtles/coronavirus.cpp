#include<simplecpp>


double radius = 4;
int sec = 12;
double RADIUS = 5;
double ext = 2;

void drawUturn(int sign)
{
  double rep = 50;
  double incre = 2*radius*sin(3.141592/rep);

  repeat(rep)
  {
    forward(incre);
    right(180.0 / rep * sign);
  }

}

void projection (double ext,double radius)
{
    double length = 2*(ext+2*radius);

    drawUturn(-1);
    forward(ext);
    drawUturn(1);
    forward(length);
    drawUturn(1);
    forward(ext);
    drawUturn(-1);

}

void section (int sec,double RADIUS)
{



    double rep = 50;
    double incre = 2*RADIUS*sin(3.141592/rep);
    double theta = 360.0 / (rep*sec);

    repeat(rep)
    {
        forward(incre);
        right(theta);
    }

    projection(ext,radius);

}


int main()
{
    turtleSim();

    repeat(sec)
    {
        section(sec,RADIUS);
    }


    wait(50);
}
