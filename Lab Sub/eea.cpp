#include<simplecpp>
long long eea(long long a, long long b, long long &x, long long &y)
{
    long long x1,y1;
    unsigned long long g;
    if (a%b == 0)
    {
        x = 0; y = 1; g = b;
    }
    else if (b%a == 0)
    {
        x = 1; y = 0; g = a;
    }
    else
    {
        g = eea(b, a % b, x1, y1);
        x = y1;
        y = x1 - y1 * (a / b);
    }
return g;
}

