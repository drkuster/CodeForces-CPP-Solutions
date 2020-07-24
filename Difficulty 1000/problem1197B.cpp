#include <iostream>

using namespace std;

int main()
{
    int n = 0, j = 0, prev = 0, peak = 0;
    bool decreasing = true, increasing = true, mountain = true;
    cin >> n;
    int* pillars = new int[n];
    for (int i = 0; i < n; i++) cin >> pillars[i];
    prev = pillars[0];
    for (int i = 1; i < n; i++) // test for decreasing pattern
    {
        if (pillars[i] > prev) { decreasing = false; break; }
        prev = pillars[i];
    }
    if (!decreasing)
    {
        prev = pillars[0];
        for (int i = 1; i < n; i++) // test for increasing pattern
        {
            if (pillars[i] < prev) { increasing = false; break; }
            prev = pillars[i];
        }
        if (!increasing)
        {
            prev = pillars[0];
            for (int i = 1; i < n; i++) // find peak
            {
                if (pillars[i] < prev) { peak = i - 1; break; }
                prev = pillars[i];
            }
            prev = pillars[peak];
            for (int i = peak + 1; i < n; i++) // test descent
            {
                if (pillars[i] > prev) { mountain = false; break; }
                prev = pillars[i];
            }
            if (!mountain) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else cout << "YES" << endl;
    }
    else cout << "YES" << endl;
    return 0;
}