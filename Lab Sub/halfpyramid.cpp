#include <simplecpp>

int main()
{
    //int n = 5;

    int n;
    cin >> n;
    int index = 0;
    repeat(n)
    {
        index++;
        repeat(index)
        {
            cout << "* ";
        }

        cout << "\n";
    }


	return 0;
}

