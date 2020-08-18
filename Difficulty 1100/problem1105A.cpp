#include <iostream>
#include <vector>

using namespace std;

int calculateMin(vector <int> sticks, int target)
{
    int minC = 0;
    for (int i = 0; i < sticks.size(); i++)
    {
        if (sticks.at(i) < target) minC += (target - 1) - sticks.at(i);
        else if (sticks.at(i) > target) minC += sticks.at(i) - (target + 1);      
    }
    return minC;
}

int main()
{
    int n = 0, temp = 0, bot = 99999999, top = 0, cost = 0, minTarget = 99999999, minCost = 99999999;
    vector <int> sticks;
    cin >> n;
    for (int i = 0; i < n; i++) 
    { 
        cin >> temp; sticks.push_back(temp);
        if (sticks.at(i) < bot) bot = sticks.at(i);
        if (sticks.at(i) > top) top = sticks.at(i);
    }
    for (int i = bot; i <= top; i++)
    {
        cost = calculateMin(sticks, i); 
        if (cost < minCost) { minTarget = i; minCost = cost; }
    }
    cout << minTarget << " " << minCost << endl;
    return 0;
}