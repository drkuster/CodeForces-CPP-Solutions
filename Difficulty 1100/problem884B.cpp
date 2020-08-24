#include <iostream>

using namespace std;

int main()
{
    int x = 0, n = 0, length = 0, sum = 0;
    cin >> x; cin >> n;
    for (int i = 0; i < x; i++) { cin >> length; sum += length; }
    if (((x - 1) + sum) == n) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}