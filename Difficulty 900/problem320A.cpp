#include <iostream>
#include <string>

using namespace std;

bool check(string num)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] != '_') { return false; }
    }
    return true;
}

const string magicThree = "144";
const string magicTwo = "14";
const string magicOne = "1";

int main()
{
    long number = 0;
    cin >> number;
    string num = to_string(number);
    while (num.find(magicThree) != string::npos)
    {
        string::size_type i = num.find(magicThree);
        num.insert(i, 1, '_');
        num.erase(i + 1, magicThree.length());
    }
    while (num.find(magicTwo) != string::npos)
    {
        string::size_type i = num.find(magicTwo);
        num.insert(i, 1, '_');
        num.erase(i + 1, magicTwo.length());
    }
    while (num.find(magicOne) != string::npos)
    {
        string::size_type i = num.find(magicOne);
        num.insert(i, 1, '_');
        num.erase(i + 1, magicOne.length());
    }
    if (check(num)) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
    return 0;
}