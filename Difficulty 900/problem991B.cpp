#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0, lab = 0, totalGrades = 0, pos = 0;
    double gradeAVG = 0.0;
    vector <int> labs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> lab;
        totalGrades += lab;
        labs.push_back(lab);
    }
    sort(labs.begin(), labs.end());
    gradeAVG = round((double) totalGrades / (double) n);
    while (gradeAVG < 5)
    {
        totalGrades -= labs.at(pos);
        totalGrades += 5;
        gradeAVG = round((double) totalGrades / (double) n);
        pos++;
    }
    cout << pos << endl;
    return 0;
}