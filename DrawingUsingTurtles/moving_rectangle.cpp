#include<simplecpp>

double mod (double x)
{
    double retval = x;
    if (x < 0)
    {
        retval = -x;
    }
    return retval;
}


int main()
{
initCanvas("moving_rectangle",1920,765);

int coord1 = getClick();
int coord2 = getClick();

double x1 = coord1/65536;
double y1 = coord1%65536;
double x2 = coord2/65536;
double y2 = coord2%65536;
double cx = 0.5*(x1+x2);
double cy = 0.5*(y1+y2);

Rectangle r(cx,cy,mod(x2-x1),mod(y2-y1));
r.penDown();

int coord3 = getClick();
double x3 = coord3/65536;
double y3 = coord3%65536;

double vx = mod(cx-x3)/10, vy = -mod(cy-y3)/10;

repeat(100)
{
r.penUp();
r.move(vx, vy);
wait(0.1);
}


getClick();
return 0;

}

