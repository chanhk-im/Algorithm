#include <bits/stdc++.h>

using namespace std;

int c, student_count, couple_count;
bool areFriends[10][10] = { false, };

int countPairings(bool taken[10]) {
    int first_student = -1;
    for (int s = 0; s < student_count; s++) {
        if (!taken[s]) {
            first_student = s;
            break;
        }
    }
    
    if (first_student == -1) return 1;
    int ret = 0;
    for (int pairWith = first_student + 1; pairWith < student_count; pairWith++) {
        if (taken[pairWith] || !areFriends[first_student][pairWith]) continue;
        taken[first_student] = true;
        taken[pairWith] = true;
        ret += countPairings(taken);
        taken[first_student] = false;
        taken[pairWith] = false;
    }
    return ret;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            areFriends[i][j] = false;
        }
    }

    cin >> c;
    for (int i = 0; i < c; i++) {
        vector<int> empty_vector;
        bool taken[10] = { false, };
        cin >> student_count >> couple_count;
        for (int j = 0; j < couple_count; j++) {
            int s1, s2;
            cin >> s1 >> s2;
            areFriends[s1][s2] = true;
            areFriends[s2][s1] = true;
        }

        cout << countPairings(taken) << '\n';
    }
    
    return 0;
}