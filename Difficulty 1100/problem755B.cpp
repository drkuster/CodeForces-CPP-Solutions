#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string word = ""; int n = 0, m = 0, commonWords = 0; vector <string> wordBank;
    cin >> n >> m; int pbWords = n, ebWords = m;

    for (int i = 0; i < n; i++) // receive words familiar to PolandBall
    { cin >> word; wordBank.push_back(word); }

    for (int i = 0; i < m; i++) // receive words familiar to EnemeyBall and check for common words 
    { 
        cin >> word;
        if (find(wordBank.begin(), wordBank.end(), word) != wordBank.end()) commonWords++;
    }

    if (n == m)
    {
        if (commonWords % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else if (n > m) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}