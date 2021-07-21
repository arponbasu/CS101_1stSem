#include <simplecpp>

int main()
{
long long n;
cin >> n;
long long arr[n];
for (long long i = 0; i < n; i++)
{
cin >> arr[i];
}
long long M = arr[0], m = arr[0];
for(long long i = 1; i < n; i++)
{
    M = max(M, arr[i]);
    m = min(m, arr[i]);
}
long long N = M-m+1;
long long f[N];
for (long long i = 0; i < N; i++)
{
f[i] = 0;
}


for (long long j = 0; j < n; j++)
{
    f[arr[j]-m]++;
}

for (long long i = m; i <= M; i++)
{
    for (long long j = 0; j < f[i-m]; j++)
    {
        cout << i << "\n";
    }
}


return 0;
}
