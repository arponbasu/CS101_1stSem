#include<simplecpp>
unsigned long long int gcd (unsigned long long int a,unsigned long long int b)
{
if (a%b==0) return b;
else return gcd(b,a%b);
}
int main()
{
unsigned long long int x,y;
cin >> x;
cin >> y;
cout << gcd(y,x) << "\n";
return 0;
}
