#include <simplecpp>

bool overflow(int a, int b)
{
if (a < 2147483648 - b && a >= -2147483648 - b) return false;
else return true;
}
int main()
{
int a,b;
cin >> a >> b;
if(overflow(a,b)) cout << "YES" << "\n";
else cout << "NO" << "\n";
return 0;
}
