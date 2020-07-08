#include <iostream>
using namespace std;

int main()
{
    int numCases = 0;
    cin >> numCases;

    for (int i = 0; i < numCases; i++) 
    {
        long long int n, k = 0;
        cin >> n;
        cin >> k;
        long long steps = 0;

        while (n > 0)
        {
            if (n % k == 0)
            {
                n /= k;
                steps++;
            }

            else
            {
                steps += n % k;
                n -= n % k;
            }
        }

        cout << steps << endl;
    }

    return 0;
}