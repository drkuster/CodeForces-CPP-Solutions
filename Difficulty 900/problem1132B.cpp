#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n = 0, temp = 0, m = 0, totalPrice = 0, coupon = 0; vector <long long> bars;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> temp; bars.push_back(temp); totalPrice += temp; }
    sort(bars.begin(), bars.end(), greater<long long>()); cin >> m;
    for (int i = 0; i < m; i++) { cin >> coupon; cout << (totalPrice - (bars.at(coupon - 1))) << endl; }
    return 0;
}