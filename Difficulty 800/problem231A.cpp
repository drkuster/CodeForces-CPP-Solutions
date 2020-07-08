#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <string>

using namespace std;

bool checkConfidence(string friends)
{
    int countOfOnes = 0;

    for (int i = 0; i < friends.length(); i++)
    {
        if (!isspace(friends[i]))
        {
            if (friends[i] == '1') { countOfOnes++; }
        }
    }

    if (countOfOnes >= 2) { return true; }
    else { return false; }

    return true;
}

int main()
{
    string numProblems = "";
    
    getline(cin, numProblems);

    int problems = stoi(numProblems);

    int count = 0;

    for (int i = 0; i < problems; i++)
    {
        string line = "";
        getline(cin, line);
        if (checkConfidence(line)) { count ++; }
    }

    cout << count << endl;
}