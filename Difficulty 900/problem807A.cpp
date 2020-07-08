#include <iostream>

using namespace std;

int main()
{
    int n = 0, previousRating = 4127, currentRating = 0, afterRating = 0, totalCurrentRating = 0, totalAfterRating = 0;
    bool decreasing = true, rated = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> currentRating;
        cin >> afterRating;
        if (currentRating != afterRating) { rated = true; }
        if (afterRating > previousRating) { decreasing = false; }
        previousRating = afterRating;
    }
    if (!rated)
    {
        if (!decreasing) cout << "unrated" << endl;
        else cout << "maybe" << endl;
    }
    else cout << "rated" << endl;
    return 0;
}