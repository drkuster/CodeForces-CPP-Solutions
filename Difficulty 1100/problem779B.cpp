#include <iostream>
#include <string>

using namespace std;

int countHops(string n, int k, int numRemoved)
{
    int hops = 0;
    int removed = numRemoved;

    for (int i = n.length() - 1; i >= 0; i--)
    {
        if (hops == k) return removed;
        else
        {
            if (n.at(i) != '0') { n.erase(i, 1); return countHops(n, k, removed + 1); }
            else hops++;
        }
    }

    return -1;
}

int main()
{
    string n = ""; int k = 0;
    cin >> n; cin >> k;
    int min = countHops(n, k, 0);
    if (min != -1)
    {
        cout << min << endl;
    }
    else
    {
        cout << n.length() - 1 << endl;
    }
    return 0;
}