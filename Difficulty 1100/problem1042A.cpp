#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> parkMembers, int m, int sum, int max)
{
    if (sum + m <= (parkMembers.size() * max)) return max;
    else
    {
        m = (sum + m) - (parkMembers.size() * max);
        for (int i = 0; i < parkMembers.size(); i++) { parkMembers.at(i) = max; }
        int i = 0;
        while (m > 0) { parkMembers.at(i % parkMembers.size())++; m--; i++; }
        return parkMembers.at(0);
    }   
}

int main()
{
    int n = 0, m = 0, max = 0, sum = 0, temp = 0; vector <int> parkMembers; 
    cin >> n >> m;
    for (int i = 0; i < n; i++) { cin >> temp; if (temp > max) max = temp; sum += temp; parkMembers.push_back(temp); }
    cout << findMin(parkMembers, m, sum, max) << " " << max + m << endl;
    return 0;
}