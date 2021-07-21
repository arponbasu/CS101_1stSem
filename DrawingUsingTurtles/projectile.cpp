#include<simplecpp>

int main()
{
initCanvas("projectile",1920,765);
double restitution = 0.85;
int start = getClick();
Circle c(start/65536,start%65536,5);
c.penDown();
double vx1 = 1, vy1 = -1, gravity = 0.005;
repeat(-2*vy1/gravity)
{
c.move(vx1, vy1);
vy1 += gravity;
}
double vx2 = 1, vy2 = -restitution;
repeat(-2*vy2/gravity)
{
c.move(vx2, vy2);
vy2 += gravity;
}
double vx3 = 1, vy3 = -restitution*restitution;
repeat(-2*vy3/gravity)
{
c.move(vx3, vy3);
vy3 += gravity;
}

getClick();
return 0;

}


