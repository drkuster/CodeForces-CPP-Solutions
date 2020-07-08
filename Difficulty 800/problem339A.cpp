#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string mathOperation = "";
    getline(cin, mathOperation);

    int count[] = {0, 0, 0};

    for (int i = 0; i < mathOperation.length(); i++)
    {
        if (isalnum(mathOperation[i]))
        {
            int position = mathOperation[i] - '0';
            count[position - 1]++;
        }
    }

    string rearranged = "";

    for (int i = 0; i < 3; i++)
    {
        while (count[i] > 0)
        {
            rearranged += to_string(i + 1);
            rearranged += "+";
            count[i]--;
        }
    }
    rearranged.pop_back();
    cout << rearranged << endl;

    return 0;
}