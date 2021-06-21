#include<bits/stdc++.h>
using namespace std;

// O(n) SC, O(n) TC
int rob(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return nums[0];
    if(n==2) return max(nums[0], nums[1]);
    int dp[101] = {0};
    // dp[i] = max rob till i
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
    }
    return dp[n-1];
}

// O(1) SC, O(n) TC
int rob(vector<int>& nums) {
    // prevprev = till prev of prev house
    // prev = till prev house
    // curr = till curr house
    int prev = 0, cur = 0;
    for(int num : nums){
        int prevprev = prev;
        prev = cur;
        cur = max(prevprev + num, prev);
    }
    return cur;
}