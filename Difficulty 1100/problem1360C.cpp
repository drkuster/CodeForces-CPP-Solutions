#include <iostream>
#include <vector>
#include <math.h>
 
using namespace std;
 
int main()
{
    int numCases, numCount = 0;
    cin >> numCases;
    for (int i = 0; i < numCases; i++)
    {
        cin >> numCount;
        int num = 0;
        vector <int> modTwoEqualsZero, modTwoEqualsOne;
        for (int j = 0; j < numCount; j++) 
        {
            cin >> num;
            if (num % 2 == 0)
            {
                modTwoEqualsZero.push_back(num);
            }
            else
            {
                modTwoEqualsOne.push_back(num);
            }
        }
        if ((modTwoEqualsOne.size() % 2 == 0) && (modTwoEqualsZero.size() % 2 == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            bool shouldBreak = false;
            bool solutionFound = false;
            for (int j = 0; j < modTwoEqualsOne.size(); j++)
            {
                int numOne = modTwoEqualsOne.at(j);
                for (int z = 0; z < modTwoEqualsZero.size(); z++)
                {
                    int numTwo = modTwoEqualsZero.at(z);
                    if (abs(numOne - numTwo) == 1)
                    {
                        solutionFound = true;
                        shouldBreak = true;
                        break;
                    }
                }
                if (shouldBreak) { break; }
            }
            if (solutionFound) { cout << "YES" << endl; }
            else { cout << "NO" << endl; }
        }
    }
    return 0;
}