#include <simplecpp>

double quadratic (double a,double b,double c,double x)
{
    return (a*x*x + b*x + c);
}


int main()
{
	double a,b,c;
	double x1,x2,x3;
	cin >> a;
    cin >> b;
    cin >> c;

	cin >> x1;
	//cout << "\n";
	cin >> x2;
	//cout << "\n";
	cin >> x3;
	//cout << "\n";



	cout << quadratic(a,b,c,x1) << "\n" ;
    cout << quadratic(a,b,c,x2) << "\n" ;
    cout << quadratic(a,b,c,x3) << "\n" ;


	return 0;
}
