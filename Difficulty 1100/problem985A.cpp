#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int wDifference(vector <int> pieces, vector <int> evenWSpaces)
{
    int sum = 0;
    for (int i = 0; i < pieces.size(); i++) sum += abs(pieces.at(i) - evenWSpaces.at(i));
    return sum;
}

int bDifference(vector <int> pieces, vector <int> evenBSpaces)
{
    int sum = 0;
    for (int i = 0; i < pieces.size(); i++) sum += abs(pieces.at(i) - evenBSpaces.at(i));
    return sum;
}

int main ()
{
    int n = 0, loc = 0; vector <int> pieces; vector <int> evenBSpaces; vector <int> evenWSpaces;
    cin >> n;
    for (int i = 0; i < (n / 2); i++) { cin >> loc; pieces.push_back(loc); }
    sort(pieces.begin(), pieces.end());
    for (int i = 1; i < n; i += 2) { evenBSpaces.push_back(i); }
    for (int i = 2; i <= n; i+= 2) { evenWSpaces.push_back(i); }
    cout << min(bDifference(pieces, evenBSpaces), wDifference(pieces, evenWSpaces)) << endl;
    return 0;
}

