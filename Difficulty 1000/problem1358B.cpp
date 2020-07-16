#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t = 0, n = 0, last = 0, temp = 0, maxGran = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n; last = n - 1; maxGran = 1;
        vector<int> gran;
        for (int j = 0; j < n; j++) { cin >> temp; gran.push_back(temp); }
        sort(gran.begin(), gran.end());
        for (int j = last; j >= 0; j--) if (gran.at(j) <= (j + 1)) { maxGran = j + 2; break; }
        cout << maxGran << endl;
    }
    return 0;
}