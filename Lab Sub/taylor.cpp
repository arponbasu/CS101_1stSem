#include<simplecpp>
#define pi 3.14

int main()
{
    int n;
    double x;
    cin >> n;
    cin >> x;



    double r = x*pi/180.0, s = 0, t = 1;
    for(int k = 0; k < n; k++)
    {
        s = s + t;
        t = - t * r * r/(2*k+1)/(2*k+2);
    }

    cout << s << "\n";

    return 0;
}



/*
    int n;
    double x;
    cin >> n;
    cin >> x;



    double r = x*pi/180.0, s = 0, t = 1;
    for(int k = 0; k < n; k++)
    {
        s = s + t;
        t = - t * r * r/(2*k+1)/(2*k+2);
    }












	int n, index = 1;
    double x, t = 1.0, r = 0.0;
    cin >> n;
    cin >> x;
	x = (x)*pi/180;
	repeat(n)
	{
		r = r + t;
        t = t*(-1*x*x)/(index*(index+1));
		index = index + 2;
	}
	cout << r << "\n";
*/






