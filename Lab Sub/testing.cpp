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
cout << exponent(31,2) << "\n";
return 0;
}


