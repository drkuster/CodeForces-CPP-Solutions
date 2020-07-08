#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerLineup = "";
    cin >> playerLineup;

    char previousPlayer = 'a';
    int streak = 1;
    bool dangerous = false;

    for (int i = 0; i < playerLineup.length(); i++)
    {
        char currentPlayer = playerLineup[i];
        if (currentPlayer == previousPlayer) { streak++; }

        else { streak = 1; }

        if (streak == 7) { dangerous = true; }
        previousPlayer = currentPlayer;
    }

    if (dangerous) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }

    return 0;
}