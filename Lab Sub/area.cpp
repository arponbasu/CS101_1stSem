#include <simplecpp>
#include <iomanip>

int main()
{
    int n; cin >> n;
    double x, y, xnext, ynext, x1, y1;
    long double area = 0.0;

    cin >> x1;
    cin >> y1;
    cin >> xnext;
    cin >> ynext;
    area += 0.5*(x1*ynext - y1*xnext);


    repeat(n-2)
    {
        x = xnext;
        y = ynext;
        cin >> xnext;
        cin >> ynext;
        area += 0.5*(x*ynext - y*xnext);

    }

        x = xnext;
        y = ynext;
        area += 0.5*(x*y1 - y*x1);


    cout << fixed << setprecision(2) << fabs(area);

    return 0;
}
