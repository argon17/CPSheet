#include<bits/stdc++.h>
using namespace std;

// O(mn)
int countNegatives(vector<vector<int>>& grid) {
    int ans = 0;
    for (vector<int>& row: grid)
        for (int& i: row)
            if (i < 0) ans++;
    return ans;
}

// O(rlog(c))
int countNegatives(vector<vector<int>>& grid) {
    int ans = 0;
    for (vector<int>& row: grid)
        ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
    return ans;
}

// O(r+c)
int countNegatives(vector<vector<int>>& grid) {
    int ans = 0;
    int m = grid.size(), n = grid[0].size(), r = 0, c = n - 1;
    while (r < m) {
        while (c >= 0 && grid[r][c] < 0) c--;
        ans += n - c - 1;
        r++;
    }
    return ans;
}