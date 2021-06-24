#include "../nub.h"

// took me 1 hr to solve, learning dp :)
int mincostTickets(vector<int>& days, vector<int>& costs) {
    int n = days.size();
    // dp[x] = min cost till x'th day
    vector<int> dp(n + 1, 1e9);
    // if you don't travel, you don't pay
    dp[0] = 0;
    for (int i = 0; i < n; i++) {

        // try to reach this day via 1 day ticket
        int c1 = costs[0] + dp[i];

        // try to reach this day via 7 day ticket
        int c7 = costs[1];
        // the last possible index, from where i can reach here via 30 day ticket
        int j = i;
        while (j >= 0 &&  days[j] >= days[i] - 7 + 1) --j;
        c7 += dp[j + 1];

        // try to reach this day via 30 day ticket
        int c30 = costs[2];
        // the last possible index, from where i can reach here via 30 day ticket
        j = i;
        while (j >= 0 && days[j] >= days[i] - 30 + 1) --j;
        c30 += dp[j + 1];

        // store min of all trials
        dp[i + 1] = min({c1, c7, c30});
    }
    return dp[n];
}