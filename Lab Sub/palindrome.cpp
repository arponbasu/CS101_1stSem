#include<simplecpp>

unsigned long long int Reverse (unsigned long long int n)
{
    unsigned long long int m = 0;

    while(n >= 1)
    {
        m = 10*m + (n % 10);
        n = n/10;
    }
    return m;
}
bool ISpalindrome (unsigned long long int i)
{
if (Reverse(i) == i) return true;
else return false;
}

int main()
{

unsigned long long int x,y;
cin >> x;
cin >> y;
for (unsigned long long int i = x; i <= y; i++)
{
if(ISpalindrome(i)) cout << i << "\n";
}


return 0;
}

