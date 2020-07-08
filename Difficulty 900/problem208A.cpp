#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dubstep = "";
    string wub = "WUB";
    cin >> dubstep;
    while (dubstep.find(wub) != string::npos)
    {
        int found = dubstep.find(wub);
        dubstep.erase(dubstep.begin() + found, dubstep.begin() + found + 3);
        dubstep.insert(dubstep.begin() + found, ' ');
    }

    cout << dubstep << endl;

    return 0;
}