#include<simplecpp>
#include<iomanip>
using namespace std;
#define epsilon 0.00001


void complex_mult(double p_x, double p_y, double q_x, double q_y, double &res_x, double &res_y)
{
    res_x = p_x*q_x - p_y*q_y;
    res_y = p_y*q_x + p_x*q_y;
}

void complex_div(double p_x, double p_y, double q_x, double q_y, double &res_x, double &res_y)
{
	res_x = (p_x*q_x + p_y*q_y)/(q_x*q_x + q_y*q_y);
    res_y = (p_y*q_x - p_x*q_y)/(q_x*q_x + q_y*q_y);
}

double complex_angle(double p_x, double p_y, double q_x, double q_y)
{
	double p = atan2(p_y,p_x);
    double q = atan2(q_y,q_x);
    return cos(p-q);
}

void complex_rot(double p_x, double p_y, double &res_x, double &res_y)
{
	double pi = 3.14;
    double c = cos(pi/3);
    double s = sin(pi/3);
    res_x = (p_x*c - p_y*s);
    res_y = (p_y*c + p_x*s);
}

int main()
{
    double p_x,p_y,q_x,q_y,res_x = 0.0,res_y = 0.0;
    cin >> p_x >> p_y >> q_x >> q_y;
    complex_mult(p_x,p_y,q_x,q_y,res_x,res_y);
    cout << fixed << setprecision(2) << res_x << " ";
    cout << fixed << setprecision(2) << res_y << "\n";

    complex_div(p_x,p_y,q_x,q_y,res_x,res_y);
    cout << fixed << setprecision(2) << res_x << " ";
    cout << fixed << setprecision(2) << res_y << "\n";

    cout << fixed << setprecision(2) << complex_angle(p_x,p_y,q_x,q_y) << "\n";

    complex_rot(p_x,p_y,res_x,res_y);
    cout << fixed << setprecision(2) << res_x << " ";
    cout << fixed << setprecision(2) << res_y << "\n";

    complex_rot(q_x,q_y,res_x,res_y);
    cout << fixed << setprecision(2) << res_x << " ";
    cout << fixed << setprecision(2) << res_y << "\n";


    return 0;
}
