#include <iostream>
#include <string>

using namespace std;

string lengthChecker(string word)
{
    if (word.length() > 10)
    {
        string wordBreviate = "";
        wordBreviate += word[0];
        int length = word.length() - 2;
        string lengthBetween = to_string(length);
        wordBreviate += lengthBetween;
        wordBreviate += word[(word.length() - 1)];
        return wordBreviate;
    }

    else return word;
}

int main()
{
    int numWords = 0;
    string word = "";

    cin >> numWords;

    for (int i = 0; i < numWords; i++)
    {
        cin >> word;
        cout << lengthChecker(word) << endl;
    }

    return 0;
}