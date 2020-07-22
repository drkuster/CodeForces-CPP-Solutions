#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a1 = 0, a2 = 0, k1 = 0, k2 = 0, n = 0, n2 = 0, min = 0, max = 0;
    cin >> a1; cin >> a2; cin >> k1; cin >> k2; cin >> n;
    if (k1 > k2)
    {
        n2 += (k1 - 1) * a1; n2 += (k2 - 1) * a2;
        min = n - n2; if (min < 0) min = 0;
        while ((a2 > 0) && ((n - k2) >= 0)) { n -= k2; a2--; max++; }
        if (n > 0) while ((a1 > 0) && ((n - k1) >= 0)) { n -= k1; a1--; max++; }
    }
    else
    {
        n2 += (k2 - 1) * a2; n2 += (k1 - 1) * a1;
        min = n - n2; if (min < 0) min = 0;
        while ((a1 > 0) && ((n - k1) >= 0)) { n -= k1; a1--; max++; }
        if (n > 0) while ((a2 > 0) && ((n - k2) >= 0)) { n -= k2; a2--; max++; }
    }
    cout << min << " " << max << endl;
    return 0;
}