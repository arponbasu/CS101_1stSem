#include <simplecpp>

int posOfMax (int* A, int n)
{
    int maxsofar = A[0];
    for(int i = 1; i < n; i++)
    {
        maxsofar = max(maxsofar, A[i]);
    }
    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] == maxsofar) pos = i;
    }
    return pos;
}

int main()
{
int n;
cin >> n;
int arr[n], scope[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
    scope[i] = -1;
}
int beginning = 0, jump = 0;
for (int i = beginning;; i++)
{
    //cout << beginning << "\n";
    int len = min(i + arr[i], n - 1) - i;
    //int scope[len];
    for (int j = 0; j < len; j++)
    {
        scope[j] = arr[i + j + 1];
    }
    beginning = posOfMax(scope,len) + i + 1;
    jump++;
    if (beginning >= n - 1) break;
    for (int i = 0; i < n; i++)
    {
        scope[i] = -1;
    }
}

cout << jump << "\n";


return 0;
}

