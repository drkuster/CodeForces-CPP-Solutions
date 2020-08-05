#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t = 0, lCount = 0, max = 0; string s = "";
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        cin >> s; lCount = max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == 'L') lCount++;
            else
            {
                // cout << "L COUNT: " << lCount << endl;
                if (lCount > max) max = lCount;
                lCount = 0;
            }
        }
        if (lCount > max) max = lCount;
        cout << max + 1 << endl;
    }
    return 0;
}