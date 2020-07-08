#include <iostream>

using namespace std;

int main()
{
    int numFriends = 0;
    cin >> numFriends;

    int* giftOrder = new int[numFriends]();
    int gaveToWho = 0;

    for (int i = 0; i < numFriends; i++)
    {
        cin >> gaveToWho;
        giftOrder[gaveToWho - 1] = i + 1;
    }

    for (int i = 0; i < numFriends; i++) { cout << giftOrder[i] << " "; }
    cout << endl;

    return 0;
}