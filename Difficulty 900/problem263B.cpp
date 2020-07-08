#include <iostream>
#include <algorithm> 

using namespace std;

int main()
{
    int n = 0, k = 0, square = 0;
    cin >> n;
    cin >> k;
    int* squares = new int[n];
    for (int i = 0; i < n; i++) { cin >> square; squares[i] = square; }
    sort(squares, squares + n, greater<int>());
    if (k > n) { cout << "-1" << endl; }
    else { cout << squares[k - 1] << " 0" << endl; }
    delete [] squares;
}