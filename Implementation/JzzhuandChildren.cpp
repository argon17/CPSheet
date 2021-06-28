// https://codeforces.com/problemset/problem/450/A
#include "../nub.h"

// easy way is to simulate it.
void argon17()
{
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        q.push(mp(x, i));
    }
    pair<int, int> ans;
    while (q.size()) {
        ans = q.front();
        if (ans.ff > m) {
            ans.ff -= m;
            q.push(ans);
        }
        q.pop();
    }
    cout << ans.ss;
}

// or just find the last maximum ceil(ai / m).
void argon17()
{
    int n, m;
    cin >> n >> m;
    int mx = 0, s = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s = ceil((float)x / m);
        if (s >= mx) {
            mx = s;
            ans = i + 1;
        }
    }
    cout << ans;
}