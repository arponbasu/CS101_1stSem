#include<simplecpp>

int main()
{
initCanvas("olympics",1920,765);
Circle c(200,200,50);
c.penDown();
int coord1 = getClick();
int coord2 = getClick();

double x1 = coord1/65536;
double y1 = coord1%65536;
double x2 = coord2/65536;
double y2 = coord2%65536;

Line l(x1,y1,x2,y2);

double a = y1 - y2;
double b = x2 - x1;
double d = x1*y2 - y1*x2;

double refl = (a*200+b*200+d)/(a*a+b*b);

double x = 200 - 2*a*refl;
double y = 200 - 2*b*refl;

Circle r(x,y,50);
r.penDown();

getClick();
return 0;
}


