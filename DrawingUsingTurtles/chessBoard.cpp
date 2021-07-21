#include<simplecpp>


int main()
{
    initCanvas("canvas", 500, 500);
    Rectangle s1(0,0,40,40);
    Rectangle s2(0,0,40,40);
    Rectangle s3(180,180,320,320);
    s1.setFill(true);
    s2.setFill(true);
    s3.setFill(false);
    s1.setColor(COLOR("black"));
    s2.setColor(COLOR("white"));
    wait(5);
    int x = 40, y = 40;
    repeat(4)
    {
        repeat(4)
        {
            s1.moveTo(x,y);
            s1.imprint();
            s1.moveTo(x + 40,y + 40);
            s1.imprint();
            s2.moveTo(x + 40,y);
            s2.imprint();
            s2.moveTo(x,y + 40);
            s2.imprint();
            x += 80;
            wait(1);
        }
        y += 80;
        x = 40;
    }
    wait(100);
}



