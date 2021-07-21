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

for (long long j = 0; j < n; j++)
{
    long long swapcheck = 0;
    for (long long i = 0; i <= n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            swapcheck++;
        }
    }
    if (swapcheck == 0) break;
}

for (long long i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}

return 0;
}
