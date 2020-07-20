#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t = 0;
    string s = "";
    char prevChar = 'z';
    bool impossible = false;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        impossible = false; prevChar = 'z';
        cin >> s;
        for (int j = 0; j < s.length() - 1; j++)
        {
            if (s.at(j) == prevChar) { impossible = true; break; }
            if (s.at(j) == '?')
            {
                if (s.at(j + 1) == '?')
                {
                    if (j == 0) s.at(j) = 'a';
                    else s.at(j) = (char) (97 + (s.at(j - 1) % 3));
                }
                else
                {
                    if (j == 0) s.at(0) = (char) (97 + (s.at(1) % 3));
                    else
                    {
                        int difference = abs(s.at(j - 1) - s.at(j + 1));
                        if (difference == 0) s.at(j) = (char) (97 + (s.at(j - 1) % 3));
                        else if (difference == 1) s.at(j) = (char) (97 + (max(s.at(j + 1), s.at(j - 1)) % 3));
                        else s.at(j) = 'b';
                    }
                }
            }
            prevChar = s.at(j);
        }
        if (impossible) cout << -1 << endl;
        else if (s.at(s.length() - 1) == '?')
        {
            if (prevChar == 'z') s.at(s.length() - 1) = 'a';
            else s.at(s.length() - 1) = (char) (97 + (s.at(s.length() - 2) % 3));
            cout << s << endl;
        }
        else if (s.at(s.length() - 1) == prevChar) cout << -1 << endl;
        else cout << s << endl;
    }

    return 0;
}