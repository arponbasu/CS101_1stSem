#include<simplecpp>

int main()
{
    long long int n,k, a = 0, b = 1,c;
    cin >> n;
    cin >> k;
    cout << a << "\n";
    cout << b << "\n";
    repeat(n-2)
    {
        c = b;
        b = (b%k + a%k)%k;
        a = c;
        cout << b << "\n";

    }


    return 0;
}


