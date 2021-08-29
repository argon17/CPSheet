#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &nums, int target){
    int l = 0, r = nums.size();
    while(l < r){
        int mid = (l + r) >> 1;
        if(nums[mid] < target) l = mid + 1;
        else r = mid;
    }
    return l;
}