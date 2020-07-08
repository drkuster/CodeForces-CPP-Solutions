#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int numTestCases = 0;
    vector<int> factor; 
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++)
    {
        bool solved = false;
        long int numWrappers = 0;
        cin >> numWrappers;

        for (int j = 2; j <= 35; j++)
        {
            if (numWrappers % int(pow(2.0, double(j)) - 1) == 0)
            {
                solved = true;
                cout << fixed << int(numWrappers / (pow(2.0, double(j)) - 1)) << endl;
                break;
            }
        }

        if (!solved) { cout << 1 << endl; } 

    }
}