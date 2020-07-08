#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string stringOne, stringTwo = "";
    getline(cin, stringOne);
    getline(cin, stringTwo);

    for (int i = 0; i < stringOne.length(); i++) { stringOne[i] = toupper(stringOne[i]); }
    for (int i = 0; i < stringTwo.length(); i++) { stringTwo[i] = toupper(stringTwo[i]); }

    if (stringOne > stringTwo) { cout << "1" << endl; }
    else if (stringOne < stringTwo) { cout << "-1" << endl; }
    else { cout << "0" << endl; }

    return 0;
}