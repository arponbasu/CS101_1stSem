#include<simplecpp>
#include<bits/stdc++.h>
using namespace std;

#define N 2e10+1
map <long long, long long> keyvalmap;

int main()
{
long long n;
cin >> n;
long long Array[n];
for (long long i = 0; i < n; i++)
{
cin >> Array[i];
}
sort(Array,Array + n);
//keyvalmap.insert(Array[0],(long long)0);
//long long lastVal=Array[0];
//long long count=0;
/*
for (long long i = 0; i < n; i++)
{


    if(Array[i]==lastVal)
    {
       count++;
       keyvalmap[lastVal]=count;
    }
    else
    {
      keyvalmap.insert({lastVal,count});
      lastVal=Array[i];
      long long count=1;
    }
}

*/


long long frequency[n], index[n];
for (long long i = 0; i < n; i++)
{
    frequency[i] = N;
    index[i] = N;
}
long long beginning = 0;
for (long long j = 0;;++j)
{
    long long retval = 0, start = Array[beginning], i = beginning;
    while (i < n && Array[i] == start)
    {
        ++retval;
        ++i;
    }
    frequency[j] = retval;
    index[j] = start;
    beginning = retval;
    if(beginning >= n) break;
}
sort(frequency, frequency + n);
sort(index, index + n);
for (long long i = n - 1; i >= 0; i--)
{





}

return 0;
}























/*


long long number = Array[0], mode[n], index = 0, cnt = 1, countMode = 1;
for (long long i = 0; i < n; ++i)
{
    mode[i] = 0;
}
for (long long i = 1; i < n; ++i)
{
      if (Array[i] == number) ++cnt;
      else
      {
            if (cnt > countMode)
            {
                  countMode = cnt;
                  mode[index] = number;
                  mode[index+1] = 0;
                  index++;
            }
            else if (cnt == countMode)
            {
                mode[index+1] = Array[i];
            }
           cnt = 1;
           number = Array[i];
      }
}

for (long long i = 0; i < n; ++i)
{
    if (mode[i] != 0) cout << mode[i] << " ";
}

cout << "\n";
*/



































/*
for(long long i = 0; i < n; i++)
{
    for(long long j = i; j < n; j++)
    {
        if (a[i] == a[j]) {ffreq[i]++;}
    }
}
*/



