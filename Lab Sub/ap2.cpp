#include<simplecpp>

float roundF (float x)
{
    float retval = floor(x);
    if (x < 0){retval = -floor(fabs(x));}
    return retval;

}


void apInt (float a,int n,float d)
{
    float sum = a;

    repeat(n)
    {
        cout << roundF(sum) << " ";
        sum += d;
    }

    cout << "\n";

}

void apFloat (float a,int n,float d)

{
    float sum = a;


    repeat(n)
    {
        cout << sum << " ";
        sum += d;
    }

    cout << "\n";
}


int main()
{
    int n;
    float a,d;

    cin >> a;
    cin >> n;
    cin >> d;


    apInt(a,n,d);
    apFloat(a,n,d);

    return 0;
}




































