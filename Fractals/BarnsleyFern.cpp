#include <iostream>
#include <string>
#include <simplecpp>
#include <stack>
using namespace std;


typedef struct point{
double x;
double y;
double a;
}tcoord;

tcoord pos;
tcoord tempos;

stack<tcoord> tempStack;

void initialize()
{
    pos.x = 0.0;
    pos.y = 0.0;
    pos.a = 0.0;

    tempos.x = 0.0;
    tempos.y = 0.0;
    tempos.a = 0.0;

}


void turtlefwd (double len,tcoord t)
{
    t.x = t.x + len*cosine(t.a);
    t.y = t.y + len*sine(t.a);
}
/*
void turtlefwdtemp (double len)
{
    tempos.x = tempos.x + len*cosine(tempos.a);
    tempos.y = tempos.y + len*sine(tempos.a);
}
*/
void turtleleft (double angle,tcoord t)
{
    t.a = t.a + angle;
}
/*
void turtlelefttemp (double angle)
{
    tempos.a = tempos.a + angle;
}
*/
void turtleright (double angle,tcoord t)
{
    t.a = t.a - angle;
}
/*
void turtlerighttemp (double angle)
{
    tempos.a = tempos.a - angle;
}
*/
void turtlerestore (tcoord t1,tcoord t2)
{
    penUp();
    left(-90-t1.a);
    forward(t1.y-t2.y);
    right(90);
    forward(t1.x-t2.x);
    left(t2.a-180);
    penDown();
}





int bracbal (string str)
{
	int retval;

    for (int i = str.size() - 1; i > -1; i--)
	{
		if (str[i] == ']')
		{
            retval = 1;
            break;
		}
		else if (str[i] == '[')
		{
            retval = 0;
            break;
		}
        else
        {
            retval = 1;
        }

    }

		return retval;

}


string modify (string str)
{
    unsigned int strSize = str.size();

    string temp = "";
    string Xrep = "F+[[X]-X]-F[-FX]+X";
    string Frep = "FF";
    string PLUS = "+";
    string MINUS = "-";
    string LBRAC = "[";
    string RBRAC = "]";


    for (unsigned int i = 0; i < strSize; i++)
    {
        if (str[i] == 'X')
        {
            temp.append(Xrep);
        }
        else if (str[i] == 'F')
        {
            temp.append(Frep);
        }
        else if (str[i] == '+')
        {
            temp.append(PLUS);
        }
        else if (str[i] == '-')
        {
            temp.append(MINUS);
        }
        else if (str[i] == '[')
        {
            temp.append(LBRAC);
        }
        else if (str[i] == ']')
        {
            temp.append(RBRAC);
        }

    }

    cout << temp << "\n";
    return temp;
}

string Fern (int n)
{
    if (n > 1)
    {
        return modify(Fern(n-1));
    }

    else
    {
        return "X";
    }

}


void interpreter2 (string str)
{

  // int flag=0;
   unsigned int strSize = str.size();

    for (unsigned int i = 0; i < strSize; i++)
    {
          if (str[i] == 'F' )
          {
            forward(10);
            turtlefwd(10,pos);

            turtlefwd(10,tempos);

          }
          else if(str[i] == '+')
          {
              left(25);
              turtleleft(10,pos);

                turtleleft(10,tempos);

          }
          else if(str[i] == '-')
          {
              right(25);
              turtleright(10,pos);

               turtleright(10,tempos);


          }
          else if (str[i] == '[')
        {
            //flag=1;
            tempStack.push(tempos);
            cout<<"Got ["<<"\t"<<tempos.x<<"\t"<<tempos.y<<"\t"<<tempos.a<<endl;
        }

          else if (str[i] == ']')
        {
            //turtlerestore (tempos,pos);


            turtlerestore (tempStack.top(),tempos);
            tempStack.pop();
             cout<<"Got ]"<<"\t"<<tempos.x<<"\t"<<tempos.y<<"\t"<<tempos.a<<endl;
            tempos.x = pos.x;
            tempos.y = pos.y;
            tempos.a = pos.a;

           // flag=0;
        }


    }

}






void interpreter (string str)
{
    unsigned int strSize = str.size();

    for (unsigned int i = 0; i < strSize; i++)
    {
            char truncate [i+2];
		    for(unsigned int ind = 0; ind < i + 1; ++ind)
				{
					truncate[ind] = str[ind];
				}
		     truncate[i+1] = '\0';

        if (str[i] == 'F')
        {
            forward(10);
            if (bracbal (truncate) == 1)
            {
                turtlefwd(10,pos);
                turtlefwd(10,tempos);
            }
            else if (bracbal (truncate) == 0)
            {
                turtlefwd(10,tempos);
            }
        }
        else if (str[i] == '+')
        {
            left(25);
            if (bracbal (truncate) == 1)
            {
                turtleleft(10,pos);
                turtleleft(10,tempos);
            }
            else if (bracbal (truncate) == 0)
            {
                turtleleft(10,tempos);
            }
        }
        else if (str[i] == '-')
        {
            right(25);
            if (bracbal (truncate) == 1)
            {
                turtleright(10,pos);
                turtleright(10,tempos);
            }
            else if (bracbal (truncate) == 0)
            {
                turtleright(10,tempos);
            }
        }
        else if (str[i] == ']')
        {
            turtlerestore (tempos,pos);
            tempos.x = pos.x;
            tempos.y = pos.y;
            tempos.a = pos.a;
        }

    }
}

int main()
{

    initialize();// initializes global structure
    turtleSim("BarnsleyFern",1920,765);

    penUp();
    left(180);
    forward(500);
    left(180);
    penDown();


    //interpreter(Fern(2));
    interpreter2(Fern(3));
    wait(500);

    return 0;
}
