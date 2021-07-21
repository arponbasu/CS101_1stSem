#include<simplecpp>

int main()
{
long long n, cnt = 0;
cin >> n;
bool Array[n - 1];
for(long long i = 0; i < n - 1; ++i)
{
    Array[i] = true;
}
for(long long i = 2; i < n - 1; i += 2)
{
    Array[i] = false;
}
for(long long i = 1; i < n - 1; ++i)
{
    if (Array[i] == true)
    {
        for(long long j = 3; (i + 2)*j - 2 < n - 1; ++j)
        {
            Array[(i + 2)*j - 2] = false;
        }
    }
}
for(long long i = 0; i < n - 1; ++i)
{
if (Array[i] == true) ++cnt;
}
cout << cnt << "\n";
for(long long i = 0; i < n - 1; ++i)
{
if (Array[i] == true) cout << i + 2 << " ";
}
cout << "\n";

return 0;
}

