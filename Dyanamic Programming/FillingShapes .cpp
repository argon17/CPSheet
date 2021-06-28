// https://codeforces.com/problemset/problem/1182/A
#include "../nub.h"
void argon17()
{
    int n;
    cin >> n;
    int f[n + 1];
    f[0] = 1;
    f[1] = 0;
    for (int i = 2; i <= n; ++i) {
        f[i] = 2 * f[i - 2];
    }
    cout << f[n] << endl;
}