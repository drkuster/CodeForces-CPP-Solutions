#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long numSticks = 0, stickLength = 0, horizontalLength = 0, verticalLength = 0, distance = 0;
    vector <long long> treeSticks;
    cin >> numSticks;
    for (int i = 0; i < numSticks; i++)
    {
        cin >> stickLength;
        treeSticks.push_back(stickLength);
    }
    sort(treeSticks.begin(), treeSticks.end());
    while (treeSticks.size() > 0)
    {
        horizontalLength += treeSticks.back();
        treeSticks.pop_back();

        if (treeSticks.size() > 0)
        {
            verticalLength += treeSticks.front();
            treeSticks.erase(treeSticks.begin());
        }
    }
    distance = (horizontalLength * horizontalLength) + (verticalLength * verticalLength);
    cout << distance << endl;
    return 0;
}