#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t = 0, n = 0, pos = 0, moves = 0;
    string s = "";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        moves = 0;
        cin >> n; cin >> s;
        while (s.find("()") != string::npos)
        {
            pos = s.find("()");
            s.erase(s.begin() + pos, s.begin() + pos + 2);
        }
        while (s.find(")(") != string::npos)
        {
            pos = s.find(")(");
            s.erase(s.begin() + pos, s.begin() + pos + 2);
            moves++;
        }
        cout << moves << endl;
    }
    return 0;
}