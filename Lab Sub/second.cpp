#include <simplecpp>
#define MAXSIZE 100000

int main()
{
long long int n, a, max1, max2; cin >> n;
cin >> a;
max1 = a;
cin >> a;
max2 = a;
if (max2 > max1)
{
    max1 = max1 + max2;
    max2 = max1 - max2;
    max1 = max1 - max2;
}
repeat(n-2)
{
    cin >> a;
    if (a > max1)
    {
        max2 = max1;
        max1 = a;
    }
    else if (a > max2)
    {
        max2 = a;
    }
}


cout << max2 << "\n";


}

