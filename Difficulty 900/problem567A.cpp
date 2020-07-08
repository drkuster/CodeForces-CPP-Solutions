#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int numCities = 0;
    cin >> numCities;
    int minimum = 999999999;
    vector <int> cityCoordinates;
    for (int i = 0; i < numCities; i++)
    {
        int coord = 0;
        cin >> coord;
        cityCoordinates.push_back(coord);
    }
    for (int i = 0; i < cityCoordinates.size(); i++)
    {
        int minimumCost = 0;
        int maximumCost = 0;
        if ((i > 0) && (i < cityCoordinates.size() - 1)) // element on either side of it
        {
            // calculate minimum cost
            int leftSide = abs(cityCoordinates.at(i - 1) - cityCoordinates.at(i));
            int rightSide = abs(cityCoordinates.at(i + 1) - cityCoordinates.at(i));
            minimumCost = min(leftSide, rightSide);
            // calculate maximum cost
            leftSide = abs(cityCoordinates.at(0) - cityCoordinates.at(i));
            rightSide = abs(cityCoordinates.at(cityCoordinates.size() - 1) - cityCoordinates.at(i));
            maximumCost = max(leftSide, rightSide);
        }
        else // end coordinate
        {
            if (i == 0) // left end
            {
                minimumCost = abs(cityCoordinates.at(i + 1) - cityCoordinates.at(i));
                maximumCost = abs(cityCoordinates.at(cityCoordinates.size() - 1) - cityCoordinates.at(i));
            }

            else // right end
            {
                minimumCost = abs(cityCoordinates.at(i) - cityCoordinates.at(i - 1));
                maximumCost = abs(cityCoordinates.at(i) - cityCoordinates.at(0));
            }
        }
        cout << minimumCost << " " << maximumCost << endl;
    }
    return 0;
}