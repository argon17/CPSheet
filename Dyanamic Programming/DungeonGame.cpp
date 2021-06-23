// Recursion (Exponential TC)
int calculateMinimumHP(vector<vector<int>>& dungeon) {
    return getMin(dungeon);
}
int getMin(const vector<vector<int>> &mat, int i = 0, int j = 0) {
    int m = mat.size();
    int n = mat[0].size();
    if (i == m || j == n) return 1e9;
    if (i == m - 1 && j == n - 1)
        return max(1, 1 - mat[i][j]);
    int right = getMin(mat, i, j + 1);
    int left = getMin(mat, i + 1, j);
    int ans = min(left, right) - mat[i][j];
    return (max(1, ans));

}

// Recursion + Memoization O(mn)
int calculateMinimumHP(vector<vector<int>>& dungeon) {
    int m = dungeon.size();
    int n = dungeon[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 1e9));
    return getMin(dungeon, dp);
}
int getMin(const vector<vector<int>> &mat, vector<vector<int>> &dp, int i = 0, int j = 0) {

    int m = mat.size();
    int n = mat[0].size();
    if (i == m || j == n) return 1e9;
    if (dp[i][j] != 1e9) return dp[i][j];
    if (i == m - 1 && j == n - 1)
        return max(1, 1 - mat[i][j]);
    int right = getMin(mat, dp, i, j + 1);
    int left = getMin(mat, dp, i + 1, j);
    int ans = min(left, right) - mat[i][j];
    return dp[i][j] = (max(1, ans));

}

// DP Tabulation
int calculateMinimumHP(vector<vector<int>>& dungeon) {
    int m = dungeon.size();
    int n = dungeon[0].size();
    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    // dp[i][j] = min health needed at i, j
    dp[m-1][n-1] = 1;
    for(int i=m-1; i>=0; --i){
        for(int j=n-1; j>=0; --j){
            int need= min(dp[min(i+1,m-1)][j], dp[i][min(j+1,n-1)])-dungeon[i][j];
            dp[i][j] = max(1,need);
        }
    }
    return dp[0][0];
}