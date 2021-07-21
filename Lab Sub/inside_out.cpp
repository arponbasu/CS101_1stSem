#include<simplecpp>
#define epsilon 0.00001

double area(double x1,double y1, double x2, double y2, double x3, double y3)
{
return 0.5*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
}
bool check(double x1, double y1, double x2, double y2, double x3, double y3,double p_x, double p_y)
{
if (fabs(area(x1,y1,x2,y2,p_x,p_y)+area(x1,y1,x3,y3,p_x,p_y)+area(x3,y3,x2,y2,p_x,p_y)-area(x1,y1,x2,y2,x3,y3)) < epsilon)
return true;
else return false;
}
int main()
{
    double x1,x2,x3,y1,y2,y3,p_x,p_y,q_x,q_y;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;
    cin >> p_x;
    cin >> p_y;
    cin >> q_x;
    cin >> q_y;
        if (check(x1,y1,x2,y2,x3,y3,p_x,p_y)) cout << "Yes ";
        else cout << "No ";
        if (check(x1,y1,x2,y2,x3,y3,q_x,q_y)) cout << "Yes ";
        else cout << "No ";


return 0;
}



