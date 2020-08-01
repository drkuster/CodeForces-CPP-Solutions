#include <iostream>

using namespace std;

int main()
{
    int t = 0, n = 0; bool pos = false, neg = false, possible = true;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        cin >> n; pos = neg = false; possible = true;
        int* a = new int[n]; int* b = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            if ((a[i] > b[i]) && (!neg)) { possible = false; break; }
            else if ((a[i] < b[i]) && (!pos)) { possible = false; break; }
            if (a[i] > 0) pos = true; else if (a[i] < 0) neg = true;
        }
        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
        delete [] a; delete [] b;
    }
    return 0;
}