#include <iostream>
#include <string>
#include <simplecpp>



using namespace std;

string modify (string str)
{
    unsigned int strSize = str.size();

    string temp = "";
    string Arep = "ABA";
    string Brep = "BBB";



    for (unsigned int i = 0; i < strSize; i++)
    {
        if (str[i] == 'A')
        {
            temp.append(Arep);
        }
        else if (str[i] == 'B')
        {
            temp.append(Brep);
        }
    }

    return temp;
}

string Cantor (int n)
{
    if (n > 1)
    {
        return modify(Cantor(n-1));
    }

    else
    {
        return "A";
    }

}

void interpreter (string str)
{
    unsigned int strSize = str.size();

    for (unsigned int i = 0; i < strSize; i++)
    {
        if (str[i] == 'A')
        {
            forward(1);
        }
        else if (str[i] == 'B')
        {
            penUp();
            forward(1);
            penDown();
        }
    }


}

int main()
{
    turtleSim("cantor",1920,765);

    penUp();
    left(180);
    forward(500);
    right(90);
    forward(100);
    right(90);
    penDown();


    interpreter(Cantor(12));
    wait(500);

    return 0;
}
