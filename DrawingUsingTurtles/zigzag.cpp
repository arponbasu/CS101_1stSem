#include <simplecpp>

void zigOne()
{
        repeat(5)
        {
            cout << "* ";
        }
        cout << "\n";
}

void zigTwo ()
{
        cout << "  ";
        repeat(5)
        {
            cout << "* ";
        }
        cout << "\n";

}




int main()
{
	int n;
	//cout << "Please enter n" << "\n";
	cin >> n;

	repeat(n)
        {
            zigOne();
            zigTwo();
        }

    cout << "\n";

	return 0;
}


