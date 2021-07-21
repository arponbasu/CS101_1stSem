#include<simplecpp>

int main()
{
    initCanvas("spider_web",1920,765);

    Turtle t1, t2, t3, t4, t5, t6;



    t1.penUp();
    t1.forward(20);
    t1.left(120);
    t1.penDown();
    repeat(6)
    {
        t1.forward(20);
        t1.left(60);
    }
    t1.left(240);


    t2.penUp();
    t2.forward(40);
    t2.left(120);
    t2.penDown();
    repeat(6)
    {
        t2.forward(40);
        t2.left(60);
    }
    t2.left(240);



    t3.penUp();
    t3.forward(60);
    t3.left(120);
    t3.penDown();
    repeat(6)
    {
        t3.forward(60);
        t3.left(60);
    }
    t3.left(240);


    t4.penUp();
    t4.forward(80);
    t4.left(120);
    t4.penDown();
    repeat(6)
    {
        t4.forward(80);
        t4.left(60);
    }
    t4.left(240);

    t5.penUp();
    t5.forward(100);
    t5.left(120);
    t5.penDown();
    repeat(6)
    {
        t5.forward(100);
        t5.left(60);
    }
    t5.left(240);


    repeat(3)
    {
        t6.forward(120);
        t6.forward(-240);
        t6.forward(120);
        t6.left(60);
    }


    t1.forward(-20);
    t2.forward(-40);
    t3.forward(-60);
    t4.forward(-80);
    t5.forward(-100);

    wait(500);
    return 0;

}


