#include <iostream>

using namespace std;

int main()
{
    int t = 0, n = 0, m = 0, minTotal = 0, minInd1 = 10001, minInd2 = 10001, pos1 = 0, pos2 = 0;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        cin >> n; cin >> m;
        pos1 = pos2 = minTotal = 0; minInd1 = minInd2 = 10001;
        int* weights = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weights[i];
            if (weights[i] < minInd1) { minInd1 = weights[i]; pos1 = i; }
            else if (weights[i] < minInd2) { minInd2 = weights[i]; pos2 = i; }
        }
        if (n < 3) cout << -1 << endl;
        else if (m < n) cout << -1 << endl;
        else
        {
            minTotal += ((weights[pos1] + weights[pos2]) * (m - n));
            for (int i = 0; i < n; i++) minTotal += (weights[(i + n) % n] + weights[((i + 1) + n) % n]);
            for (int i = 0; i < (m - n); i++) cout << pos1 + 1 << " " << pos2 + 1 << endl;
            cout << minTotal << endl;
            for (int i = 0; i < n; i++) cout << ((i + n) % n) + 1 << " " << (((i + 1) + n) % n) + 1 << endl;
        }
        delete [] weights;        
    }
    return 0;
}