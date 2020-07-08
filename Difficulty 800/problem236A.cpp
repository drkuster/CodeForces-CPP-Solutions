#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    cin >> username;

    int uniqueCount[127] = {0};
    int uniqueCharCount = 0;

    for (int i = 0; i < username.length(); i++)
    {
        int position = username[i];
        if (uniqueCount[username[i]] < 1) { uniqueCharCount++; uniqueCount[username[i]]++; }
    }

    if (uniqueCharCount % 2 == 0) { cout << "CHAT WITH HER!"  << endl; }
    else { cout << "IGNORE HIM!" << endl; }

    return 0;
}