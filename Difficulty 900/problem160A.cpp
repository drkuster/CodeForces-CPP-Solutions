#include <iostream>
#include <vector>

using namespace std;

int findMax(vector <int> &values)
{
    int max = 0;
    int maxPos = 0;
    
    for (int i = 0; i < values.size(); i++)
    {
        if (values.at(i) > max)
        {
            max = values.at(i);
            maxPos = i;
        }
    }
    values.erase(values.begin() + maxPos);
    return max;
}

int main()
{
    int numCoins = 0;
    cin >> numCoins;
    int sum = 0;
    vector <int> values;
    for (int i = 0; i < numCoins; i++) { int coinValue = 0; cin >> coinValue; values.push_back(coinValue); sum += coinValue; }
    int coinsGrabbed = 0;
    int i = 0;
    int mySum = 0;
    while (mySum <= sum / 2)
    {
        mySum += findMax(values);
        coinsGrabbed++;
        i++;
    }

    cout << coinsGrabbed << endl;

    return 0;
}