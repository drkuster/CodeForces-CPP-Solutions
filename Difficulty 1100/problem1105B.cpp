#include <iostream>
#include <string>

using namespace std;

bool eraseSubStr(string &mainStr, const string &toErase) {
     size_t pos = mainStr.find(toErase);
     if (pos != string::npos) { mainStr.erase(pos, toErase.length()); return true; }
     else return false;
}

int main() {
	int n = 0, k = 0, max = 0;
	string s = "", search = "";
	char mcl = '\0';
    cin >> n >> k; cin >> s;
    for (char i = 'a'; i <= 'z'; i++) {
        string search = ""; int level = 0;
        for (int j = 0; j < k; j++) search += i;
        while (eraseSubStr(s, search)) level++;
        if (level > max) max = level;
    }
    cout << max << endl;
    return 0;
}
