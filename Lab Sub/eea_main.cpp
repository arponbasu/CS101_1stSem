#include <simplecpp>

void eea(long long a, long long b, long long &x, long long &y);


main_program
{
    long long a,b,high = 1e16;
    cin >> a >> b;

    long long x,y;
    eea(a,b,x,y);

    cout << x << " " << y << "\n";
}
