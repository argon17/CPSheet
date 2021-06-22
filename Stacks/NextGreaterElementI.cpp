#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
    // map is used to store elements with their nge
    unordered_map<int, int> mp;
    stack<int> st;
    for(int i = nums2.size() - 1; i >= 0; --i){
        // in stack we've always the next maximum elements in increasing order, 
        // keep poping, if having lower values in stack
        while(st.size() && nums2[i]>st.top()) st.pop();
        if(st.empty()) mp[nums2[i]] = -1;
        else mp[nums2[i]] = st.top();
        st.push(nums2[i]);
    }
    
    vector<int> ans;
    for(int n : nums1) ans.push_back(mp[n]);
    return ans;

}