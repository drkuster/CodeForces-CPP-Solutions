#include <iostream>

using namespace std;

int main()
{
    int n = 0, c = 0, b = 0, pB = 0, maxDif = -10000;
    cin >> n;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if ((pB - b) > maxDif) maxDif = pB - b;
        pB = b;
    }
    if ((maxDif - c) < 1) cout << 0 << endl;
    else cout << maxDif - c << endl;
    return 0;
}