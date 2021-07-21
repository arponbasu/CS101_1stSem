#include<simplecpp>

long long exponent (long long n,long long x)
{
long long retval = 0;
while (n%x == 0)
{
retval ++;
n = n/x;
}
return retval;
}

int main()
{
long long n,x,a,sum = 0;
cin >> n >> x;
for (long long i = 0; i < n; i++)
{
cin >> a;
sum += (1 + exponent(a,x))*a;
}
cout << sum << "\n";
return 0;
}

