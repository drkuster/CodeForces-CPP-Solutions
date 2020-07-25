#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0, k = 0, i = 1, kU = 0; string s = "";
    cin >> n; cin >> k; cin >> s;
    
    if (k == 0) cout << s << endl;
    else if (s.length() < 2) cout << 0 << endl;
    else
    {
        if (s.at(0) != '1') { s.at(0) = '1'; kU++; }
        while ((i < n) && (kU < k))
        {
            if (s.at(i) != '0') { s.at(i) = '0'; kU++; }
            i++;
        }
        cout << s << endl;
    }
    return 0;
}