#include <simplecpp>
#define epsilon 0.00001

int parity (int n)//This function calculates minus one to the power n
{
int retval = -1;
if (n%2 == 0) {retval = 1;}
return retval;
}



int main()
{
    double x,y;
    long double xsum = 0.0, ysum = 0.0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        cin >> y;
        xsum += parity(i)*x;
        ysum += parity(i)*y;
    }

    if (fabs(xsum) < epsilon && fabs(ysum) < epsilon) {cout << "Yes";}
    else {cout << "No";}

    return 0;
}
