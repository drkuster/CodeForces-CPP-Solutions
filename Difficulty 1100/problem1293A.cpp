#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long t = 0, n = 0, s = 0, k = 0, ki = 0, pos = 0, lB = 0, uB = 0; bool curClosed = false;
    cin >> t; 
    for (int z = 0; z < t; z++)
    {
        cin >> n; cin >> s; cin >> k; ki = pos = lB = uB = 0; curClosed = false;
        vector <long> floors;
        long* closed = new long[n]; // maybe error?
        for (long i = 0; i < n; i++) closed[i] = 0;
        for (long i = 0; i < k; i++) { cin >> ki; if (ki == s) curClosed = true; closed[ki - 1]++; }
        for (long i = 0; i < n; i++) if (closed[i] == 0) floors.push_back(i + 1);
        uB = floors.size() - 1; pos = (lB + uB) / 2;
        if (!curClosed) cout << 0 << endl;
        else
        {
            // for (long i = 0; i < floors.size(); i++) System.out.prlongln(floors.get(i));
            while (abs(uB - lB) > 2)
            {
                // cout << "POS: " << pos << endl;
                // cout << "UB: " << uB << " LB: " << lB << endl;
                if (floors.at(pos) == s) break;
                else if (floors.at(pos) > s) uB = pos - 1;
                else lB = pos + 1;
                pos = (uB + lB) / 2;
            }
            cout << min(min((abs(floors.at(uB) - s)), (abs(floors.at(lB) - s))), (abs(floors.at(pos) - s))) << endl;
        }
        delete [] closed;
    }
    return 0;
}