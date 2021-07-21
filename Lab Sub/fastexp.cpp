#include<simplecpp>
#include <chrono>
#include <iomanip>

int main()
{
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);


unsigned long long int x,n,k,ans = 1;
cin >> x;
cin >> n;
cin >> k;
unsigned long long int y = x%k;
while (n > 0)
{
    if (n%2 == 1) ans = (ans*y)%k;
    y = (y*y)%k;
    n *= 0.5;
}
cout << ans << "\n";
    auto end = chrono::high_resolution_clock::now();

    // Calculating total time taken by the program.
    double time_taken =
    chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

   // cout << "Time taken by program is : " << fixed
   //      << time_taken << setprecision(9);
   // cout << " sec" << endl;
return 0;
}


