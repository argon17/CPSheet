#include "../nub.h"
// Quite straight forward
int minFallingPathSum(vector<vector<int>>& matrix) {
    int r = matrix.size(), c = matrix[0].size();
    vector<vector<int>> dp(r, vector<int>(c, 1e9));
    for (int j = 0; j < c; ++j) {
        dp[0][j] = matrix[0][j];
    }
    for (int i = 1; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            dp[i][j] = matrix[i][j] + min({ dp[max(0, i - 1)][min(c - 1, j + 1)], dp[max(0, i - 1)][max(0, j - 1)], dp[max(0, i - 1)][j] });
        }
    }
    return *min_element(dp[r-1].begin(), dp[r-1].end());
}