#include "../nub.h"
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i=1; i<=n; ++i){
            nums.push_back(i);
        }
        vector<vector<int>> ans;
        vector<int> ds;
        gen(0, nums, ds, ans, k);
        return ans;
    }
    
    void gen(int ind, vector<int> nums, vector<int>& ds, vector<vector<int>>& ans, int k){
        if(ds.size()==k){
            ans.push_back(ds);
            return;
        }
        for(int i=ind; i<nums.size(); ++i){
            ds.push_back(nums[i]);
            gen(i+1, nums, ds, ans, k);
            ds.pop_back();
        }
    }
};