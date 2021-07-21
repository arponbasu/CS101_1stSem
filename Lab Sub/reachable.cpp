#include<simplecpp>

bool check = true;
long long isReachable(long long x1,long long y1,long long x2,long long y2)
{
long long retval;
if (x1 > x2 || y1 > y2)
{
check = false;
}
else
{
if (x2 > y2) retval = (1 + isReachable(x1,y1,x2-y2,y2));
else if (x2 < y2) retval = (1 + isReachable(x1,y1,x2,y2-x2));
else
{
if (x1 == x2 && y1 == y2) retval = 0;
else if (x1 == x2 && y1 == 0) retval = 1;
else if (x1 == 0 && y1 == y2) retval = 1;
else check = false;
}
}
if (check == false) return -1;
else return retval;
}





int main()
{
long long x1,y1,x2,y2,x3,y3,x4,y4;
cin >> x1 >> y1;
cin >> x2 >> y2;
cin >> x3 >> y3;
cin >> x4 >> y4;
cout << isReachable(x1,y1,x2,y2) << "\n";
check = true;
cout << isReachable(x3,y3,x4,y4) << "\n";
return 0;
}

/*
bool check = true;
long long isReachable(long long x1,long long y1,long long x2,long long y2)
{

if (x1 > x2 || y1 > y2)
{
check = false;
return -1;
}
else if (x1 == x2 && y1 == y2) return 0;
else{
if (x2 > y2) return (1 + isReachable(x1,y1,x2-y2,y2));
else if (x2 < y2) return (1 + isReachable(x1,y1,x2,y2-x2));
else if (x2 == y2 && ((x1 == x2 && y1 == 0)||(x1 == 0 && y1 == y2))) return 1;
else if
}



}
*/
