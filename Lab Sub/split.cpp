#include<simplecpp>

int main()
{
long long n;
cin >> n;
long long Array[n], neg[n], zero[n], pos[n], nindex = 0, zindex = 0, pindex = 0;
for(long long i = 0; i < n; ++i)
{
cin >> Array[i];
neg[i] = 0;
zero[i] = -1;
pos[i] = 0;
}
for(long long i = 0; i < n; ++i)
{
    if (Array[i] < 0)
    {
        neg[nindex] = Array[i];
        nindex++;
    }
    else if (Array[i] > 0)
    {
        pos[pindex] = Array[i];
        pindex++;
    }
    else if (Array[i] == 0)
    {
        zero[zindex] = Array[i];
        zindex++;
    }
}
for(long long i = 0; i < n; ++i)
{
if (neg[i] != 0) cout << neg[i] << " ";
}
for(long long i = 0; i < n; ++i)
{
if (zero[i] != -1) cout << zero[i] << " ";
}
for(long long i = 0; i < n; ++i)
{
if (pos[i] != 0) cout << pos[i] << " ";
}
cout << "\n";

return 0;
}
