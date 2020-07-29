#include <iostream>

using namespace std;

int main()
{
    int q = 0, n = 0, student = 0, pos = 0, prev = 0;
    bool possible = true;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        prev = pos = student = 0; possible = true;
        cin >> n; int* students = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> student; students[j] = student;
            if (student == 1) pos = j;
        }
        if (students[((pos - 1) + n) % n] > students[((pos + 1) + n) % n]) // clockwise
        {
            prev = students[pos];
            for (int j = 1; j < n; j++)
            {
                if (students[((pos + j) + n) % n] - prev != 1) { possible = false; break; }
                prev = students[((pos + j) + n) % n];
            }
            if (possible) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else // counterclockwise
        {
            prev = students[pos];
            for (int j = 1; j < n; j++)
            {
                if (students[((pos - j) + n) % n] - prev != 1) { possible = false; break; }
                prev = students[((pos - j) + n) % n];
            }
            if (possible) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        delete [] students;
    }
    return 0;
}