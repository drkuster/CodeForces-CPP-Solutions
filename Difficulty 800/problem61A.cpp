#include <iostream>
#include <string>

using namespace std;

int main()
{
    string numOne, numTwo, answer = "";
    getline(cin, numOne);
    getline(cin, numTwo);

    for (int i = 0; i < numOne.length(); i++)
    {
        if (numOne[i] != numTwo[i]) { answer += "1"; }
        else { answer += "0"; }
    }

    cout << answer << endl;

    return 0;
}