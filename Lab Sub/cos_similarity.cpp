#include<simplecpp>
#include <iomanip>
#include <cstdlib>

using namespace std;
bool ifAlternate = true;//This is to toggle b/w two alternate implementations
//of the same program.


int main()
{
    if(ifAlternate == true)
    {
    long long int n;
    long double a,b;

    cin >> n;


    long double asum = 0.0, bsum = 0.0, dot = 0.0;
    repeat(n)
    {
        cin >> a;
        cin >> b;
        asum += a*a;
        bsum += b*b;
        dot += a*b;
    }



    long double cosineAngle = dot/(sqrt(asum)*sqrt(bsum));

    cout << fixed << setprecision(2) << cosineAngle;

    }
    else if (ifAlternate == false)
    {
    long long int n;

    cin >> n;


    long double a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }

    long double asum = 0.0, bsum = 0.0, dot = 0.0;
    for(int i = 0; i < n; i++)
    {
        asum += a[i]*a[i];
        bsum += b[i]*b[i];
        dot += a[i]*b[i];
    }
    long double cosineAngle = dot/(sqrt(asum)*sqrt(bsum));

    cout << fixed << setprecision(2) << cosineAngle;
    }


    return 0;
}


