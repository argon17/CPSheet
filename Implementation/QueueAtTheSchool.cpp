#include "../nub.h"

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < k; ++i) {
        debug(s);
        for (int j = 0; j < n - 1; ++j) {
            if ((s[j] == 'B') && (s[j + 1] == 'G')) {
                debug(j);
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s;
}