#include<simplecpp>

int main()
{
    long long int n, m = 0;
    cin >> n;

    while(n >= 1)
    {
    m = 10*m + (n % 10);
    n = n/10;
    }

    cout << m << "\n";
    return 0;
}

















