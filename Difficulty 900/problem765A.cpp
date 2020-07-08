#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n = 0;
    string flight = "", homeport = "", numFlights = "", from = "", to = "";
    bool away = false;
    map<string, int> flightTracker;
    getline(cin, numFlights);
    getline(cin, homeport);
    n = stoi(numFlights);
    flightTracker[homeport]--;
    for (int i = 0; i < n; i++)
    {
        getline(cin, flight);
        size_t pos = flight.rfind("->");
        from = flight.substr(0, pos);
        flightTracker[from]--;
        to = flight.substr(pos + 2, flight.length());
        flightTracker[to]++;
    }
    if (flightTracker[homeport] == -1) cout << "home" << endl;
    else cout << "contest" << endl;
    return 0;
}