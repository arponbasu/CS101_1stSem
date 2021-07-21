#include <simplecpp>

bool primechecker (long long int m)
{
    bool retval;
    if (m == 2) retval = true;
    else if (m == 3) retval = true;
    else
    for (long long int i=2; i <= sqrt(m); i++)
    {
        if (m%i == 0)
        {
            retval = false;
            break;
        }

        else
        {
            retval = true;
        }
    }

    return retval;
}

int main()
{
    long long int n; cin >> n;
    for (long long int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            if (primechecker(i)) cout << i << "\n";
        }
    }
  return 0;
}
