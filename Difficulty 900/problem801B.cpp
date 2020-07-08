#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x = "", y = "", z = "";
    getline(cin, x);
    getline(cin, z);
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == z[i]) y += 'z';
        else if (x[i] > z[i]) y += z[i];
    }
    if (y.length() < x.length()) cout << "-1" << endl;
    else cout << y << endl;
    return 0;
}