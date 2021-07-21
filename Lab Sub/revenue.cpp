#include<simplecpp>
#include <algorithm>
using namespace std;
long long moduli (long long x, long long n)
{
if (x >= 0) return x;
else return (x+n);
}
int main()
{
long long n,k;
cin >> n >> k;
long long Array[n], profit[k + 1];
for(long long i = 0; i < n; ++i)
{
    cin >> Array[i];
}
for(long long i = 0; i < k + 1; ++i)
{
    profit[i] = 0;
}

for(long long i = k - 1; i >= -1; i--)
{
    for (long long j = i; j >= i - k + 1; j--)
    {
        //cout << Array[moduli(j,n)] << " ";
        profit[i+1] += Array[moduli(j,n)];
    }
    cout << "\n";
}
/*
for(long long i = k - 1; i >= -1; i--)
{
    cout << profit[i] << " ";
}*/
cout << *max_element(profit, profit + k);
return 0;
}

