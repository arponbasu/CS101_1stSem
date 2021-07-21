#include <iostream>
#include <string>
#include <simplecpp>



using namespace std;

string modify (string str)
{
    unsigned int strSize = str.size();

    string temp = "";
    string Xrep = "X+YF+";
    string Yrep = "-FX-Y";
    string F = "F";
    string PLUS = "+";
    string MINUS = "-";

    for (unsigned int i = 0; i < strSize; i++)
    {
        if (str[i] == 'X')
        {
            temp.append(Xrep);
        }
        else if (str[i] == 'Y')
        {
            temp.append(Yrep);
        }
        else if (str[i] == 'F')
        {
            temp.append(F);
        }
        else if (str[i] == '+')
        {
            temp.append(PLUS);
        }
        else if (str[i] == '-')
        {
            temp.append(MINUS);
        }

    }

    return temp;
}

string Dragon (int n)
{
    if (n > 1)
    {
        return modify(Dragon(n-1));
    }

    else
    {
        return "FX";
    }

}

void interpreter (string str)
{
    unsigned int strSize = str.size();

    for (unsigned int i = 0; i < strSize; i++)
    {
        if (str[i] == 'F')
        {
            forward(1);
        }
        else if (str[i] == '+')
        {
            left(90);
        }
        else if (str[i] == '-')
        {
            right(90);
        }

    }


}

int main()
{
    turtleSim("dragon",1920,765);

    penUp();
    left(180);
    forward(-100);
    left(90);
    forward(100);
    left(90);
    penDown();


    interpreter(Dragon(20));
    wait(500);

    return 0;
}
