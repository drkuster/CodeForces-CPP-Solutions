#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "", b = "";
    cin >> a; cin >> b;
    if (a.length() > b.length()) cout << a.length() << endl;
    else if (a.length() < b.length()) cout << b.length() << endl;
    else { if (a != b) cout << a.length() << endl; else cout << -1 << endl; }
    return 0;
}