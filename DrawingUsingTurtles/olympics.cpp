#include<simplecpp>

int main()
{
initCanvas("olympics",1920,765);
double x = 200, y = 200, radius = 50;
Circle c(x,y,radius);

    x += 2.1*radius;
    c.setColor(COLOR("blue"),true);
    c.penDown();
    c.imprint();
    c.penUp();
    c.moveTo(x,y);

    x += 2.1*radius;
    c.setColor(BLACK);
    c.penDown();
    c.imprint();
    c.penUp();
    c.moveTo(x,y);

    c.setColor(COLOR("red"),true);
    c.penDown();
    c.imprint();
    c.penUp();
    c.moveTo(x-1.05*radius,y+1.46*radius);

    c.setColor(COLOR("green"),true);
    c.penDown();
    c.imprint();
    c.penUp();
    c.setColor(YELLOW);
    c.moveTo(x-3.15*radius,y+1.46*radius);





getClick();
return 0;
}

