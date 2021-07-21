#include <simplecpp>



void toparray (int a,int x1,int x2)
{
    repeat(a)
    {
        repeat(2)
        {
            repeat(x1)
            {
                cout << "*";
            }
            repeat(x2)
            {
                cout << " ";
            }
        }


            repeat(x1)
            {
                cout << "*";
            }


        cout << "\n";
    }

}

void middlearray (int a,int x1,int x2,int x3)
{
    repeat(a)
    {
        repeat(x1)
        {
            cout << " ";
        }

        repeat(2)
        {
            repeat(x2)
            {
                cout << "*";
            }
            repeat(x3)
            {
                cout << " ";
            }
        }


        repeat(x2)
        {
            cout << "*";
        }



        cout << "\n";
    }

}


void bottomarray (int a,int x1,int x2,int x3,int x4)
{
    repeat(a)
    {
        repeat(x1)
        {
            cout << "*";
        }
        repeat(x2)
        {
            cout << " ";
        }
        repeat(x1)
        {
            cout << "*";
        }
        repeat(x3)
        {
            cout << " ";
        }
        repeat(x4)
        {
            cout << "*";
        }



        cout << "\n";


    }
}

int main()
{
	toparray (2,15,5);
    middlearray (21,7,1,19);
    bottomarray(2,15,5,12,1);
    return 0;
}


