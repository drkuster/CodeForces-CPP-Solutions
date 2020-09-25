#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<long> circle) {
    for (int i = 0; i < circle.size(); i++) {
        if (circle.at(i) >= (circle.at((i - 1) % circle.size()) + circle.at((i + 1) % circle.size())))
            return true;
    }
    return false;
}

void display(vector<long> circle) {
    for (int i = 0; i < circle.size(); i++) cout << circle.at(i) << " ";
    cout << endl;
}

int main() {
    int n = 0; long el = 0; bool checkEnds = false; vector<long> circle;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> el;
        circle.push_back(el);
    }
    sort(circle.begin(), circle.end());
    checkEnds = check(circle);
    if (!checkEnds) {
        cout << "YES" << endl;
        display(circle);
    }
    else {
        long temp = circle.at(circle.size() - 1);
        circle.at(circle.size() - 1) = circle.at(circle.size() - 2);
        circle.at(circle.size() - 2) = temp;
        checkEnds = check(circle);
        if (checkEnds) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            display(circle);
        }
    }
    return 0;
}