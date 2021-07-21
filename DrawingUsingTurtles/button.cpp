#include <simplecpp>

#define textX1 250
#define textX2 650
#define textY 150
#define margin 40

int main()
{
initCanvas("Simplecpp Canvas",1920,765);
Text f(textX1,textY,"Forward");
Rectangle rf (textX1,textY,textWidth("Forward")+ margin,textHeight()+ margin);
Text l(textX2,textY,"Left");
Rectangle rl (textX2,textY,textWidth("Left")+ margin,textHeight()+ margin);
Turtle t;
t.penUp();
t.forward(-600);
t.penDown();
repeat(10)
{
int start = getClick();
int xcoord = start/65536;
int ycoord = start%65536;
if (xcoord >= (textX1-0.5*margin-0.5*textWidth("Forward")) &&
    xcoord <= (textX1+0.5*margin+0.5*textWidth("Forward")) &&
    ycoord >= (textY-0.5*margin-0.5*textHeight()) &&
    ycoord <= (textY+0.5*margin+0.5*textHeight())) {t.forward(50);}
else if (xcoord >= (textX2-0.5*margin-0.5*textWidth("Left")) &&
         xcoord <= (textX2+0.5*margin+0.5*textWidth("Left")) &&
         ycoord >= (textY-0.5*margin-0.5*textHeight()) &&
         ycoord <= (textY+0.5*margin+0.5*textHeight())) {t.left(10);}
}

wait(500);
return 0;
}










