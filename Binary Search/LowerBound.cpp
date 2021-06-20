#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {

    int lo = 0, hi = nums.size()-1;

    while (lo <= hi) {
        int mid = (hi+lo)>>1;
        // condition for neglecting left half
        if (nums[mid] < target) lo = mid+1;
        else hi = mid-1;
    }
    return lo;
}