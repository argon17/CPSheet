// https://codeforces.com/problemset/problem/275/A
#include "../nub.h"
void solve()
{
    int mat[5][5] = {} ;
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            cin >> mat[i][j];
        }
    }
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            int ans = 1 + mat[i][j] + mat[i + 1][j] + mat[i - 1][j] + mat[i][j - 1] + mat[i][j + 1];
            cout << (ans & 1);
        }
        cout << endl;
    }
}