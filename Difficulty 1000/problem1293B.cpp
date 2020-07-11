#include <iostream>

using namespace std;

int main()
{
    int n = 0; double d = 0; 
    cin >> n;
    while (n > 0) { d += 1.0 / (double) n; n--; }
    cout << d << endl;
    return 0;
}