#include<simplecpp>

void toggle(unsigned int &n, int k)
{
unsigned int l = n/pow(2.0,k);
n += (1 - 2*(l%2))*pow(2.0,k);
}

int main()
{
unsigned int n;
int k;
cin >> n;
cin >> k;
toggle(n,k);
cout << n << "\n";
return 0;
}


