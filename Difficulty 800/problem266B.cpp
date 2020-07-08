#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numChildren = 0;
    int numSeconds = 0;
    string position = "";
    cin >> numChildren;
    cin >> numSeconds;
    cin >> position;

    for (int i = 0; i < numSeconds; i++)
    {
        for (int j = 0; j < position.length() - 1; j++)
        {
            if (position[j] == 'B')
            {
                if (position[j + 1] == 'G') 
                { 
                    char temp = position[j + 1];
                    position[j + 1] = position[j];
                    position[j] = temp;
                    j++;
                }
            }
        }
    }

    cout << position << endl;

    return 0;
}