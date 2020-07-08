#include <iostream>

using namespace std;

int main()
{
    int numDrinks = 0;
    cin >> numDrinks;

    int orangeJuiceContents = 0;

    for (int i = 0; i < numDrinks; i++)
    {
        int drinkContents = 0;
        cin >> drinkContents;
        orangeJuiceContents += drinkContents;
    }

    double totalCapacity = numDrinks * 100.0;
    cout << (orangeJuiceContents / totalCapacity) * 100 << endl;

}