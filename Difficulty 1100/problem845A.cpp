#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0, temp = 0; bool possible = true; cin >> n;
    vector <int> players;
    for (int i = 0; i < (2* n); i++) { cin >> temp; players.push_back(temp); }
    sort(players.begin(), players.begin() + (2 * n));
    int j = (2 * n) / 2; int i = j - 1;
    while ((i >= 0) && (j < (2 * n))) { if (players.at(i) >= players.at(j)) { possible = false; break; } i--; j++; }
    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}