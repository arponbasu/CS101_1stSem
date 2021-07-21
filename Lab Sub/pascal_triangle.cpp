#include<simplecpp>
using namespace std;


long long binomial(int n, int r)
{

	long long int binom = 1;
    if (n == 0 || n == 1 || r == 0 || r == n) return 1;
    else if (r > n/2.0) return binomial(n,n-r);
    else
    for(int i = 1; i <= r; ++i)
        {
            binom = binom*(n-i+1)/i;
        }
    return binom;
}

void pascal_triangle(int k)
{
    int i = 0;
    repeat(k+1)
    {
        cout << binomial(k,i) << " ";
        ++i;
    }
    cout << "\n";
	return;
}

int main()
{
    int k;
    cin >> k;
    pascal_triangle(k);

    return 0;
}


