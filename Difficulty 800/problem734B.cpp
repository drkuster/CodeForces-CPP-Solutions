#include <iostream>

using namespace std;

int main()
{
    int numTwos, numThrees, numFives, numSixes = 0;
    cin >> numTwos; cin >> numThrees; cin >> numFives; cin >> numSixes;

    int totalSum = 0;

    while ((numTwos > 0) && (numFives > 0) && (numSixes > 0))
    {
        totalSum += 256;
        numTwos--; numFives--; numSixes--;
    }

    while ((numTwos > 0) && (numThrees > 0))
    {
        totalSum += 32;
        numTwos--; numThrees--;
    }

    cout << totalSum << endl;

    return 0;
}