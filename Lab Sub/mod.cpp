#include<simplecpp>

int modFac (int n,int m)
{
    int retval;

    if(n < m)
    {
        long long int iter = 1;

        int index = 1;

        repeat(n)
        {
            iter = ((iter%m)*index)%m;
            index++;
        }

        retval = iter;

    }

    else
    {
        retval = 0;
    }

    return retval;
}


int main()
{
    long long int n,m;
    cin >> n;
    cin >> m;

    cout << modFac(n,m);
    return 0;
}

