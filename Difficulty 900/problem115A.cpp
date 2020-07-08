// CPP program to do level order traversal 
// of a generic tree 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

vector <int> depthChart[2001]; // max number of employees
int maxLevels = -1; // number of possible levels

void searchLevels(int boss, int level)
{
    maxLevels = max(maxLevels, level);

    for (int i = 0; i < depthChart[boss].size(); i++)
    {
        searchLevels(depthChart[boss][i], level + 1);
    }
}

int main()
{
    int numEmployees, boss = 0;
    cin >> numEmployees;

    for (int i = 1; i <= numEmployees; i++)
    {
        cin >> boss;

        if (boss == -1) // there is no one higher 
        {
            depthChart[0].push_back(i);
        }

        else
        {
            depthChart[boss].push_back(i);
        }
    }

    for (int i = 0; i < depthChart[0].size(); i++)
    {
        searchLevels(depthChart[0][i], 1);
    }

    cout << maxLevels << endl;

    return 0; 
}