#include<simplecpp>

long long diff(int n)
{
long long int k = n;
long long int retval = k*(k-1)*(k+1)/3;
return retval;
}


int main()
{
int n;
cin >> n;
cout << diff(n) << "\n";
return 0;
}

