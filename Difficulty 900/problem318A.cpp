#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, k = 0;
    cin >> n;
    cin >> k;
    long double dblHalf = ((long double)n) / ((long double)2.0);
    long long half = ((long double)ceil(dblHalf));
    if (k <= half) // odd
    {
        cout << (k * 2) - 1 << endl;
    }
    else // even
    {
        long long position = k - half;
        cout << (position * 2) << endl;
    }
    return 0;
}