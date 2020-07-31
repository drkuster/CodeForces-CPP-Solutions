#include <iostream>

using namespace std;

int main()
{
    int n = 0, aX = 0, aY = 0, bX = 0, bY = 0, cX = 0, cY = 0, lowX = 0, highX = 0, lowY = 0, highY = 0;
    cin >> n; cin >> aX; cin >> aY; cin >> bX; cin >> bY; cin >> cX; cin >> cY;
    if (aX > bX) { lowX = 1; highX = aX - 1; } else { lowX = aX + 1; highX = n; }
    if (aY > bY) { lowY = 1; highY = aY - 1; } else { lowY = aY + 1; highY = n; }
    if (((cX >= lowX) && (cX <= highX)) && ((cY >= lowY) && (cY <= highY))) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}