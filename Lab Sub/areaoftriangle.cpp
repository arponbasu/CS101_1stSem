#include<simplecpp>
#include <iomanip>

using namespace std;

double mod (double x)
{
    double retval = x;
    if (x < 0)
    {
        retval = -x;
    }
    return retval;
}


int main()
{
    int x1,x2,x3,y1,y2,y3;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;

    double area = 0.5*mod(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

    cout << fixed << setprecision(2) << area;
    return 0;
}


