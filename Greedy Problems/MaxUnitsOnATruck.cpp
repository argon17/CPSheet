#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> box1, vector<int> box2){
    return box1[1]>=box2[1];
}
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    // stl sorting O(nlogn)
    sort(boxTypes.begin(), boxTypes.end(), comp);
    int ans=0;
    for(auto box : boxTypes){
        int x = min(box[0], truckSize);
        ans += x*box[1];
        truckSize -= x;
        if(!truckSize) break;
    }
    return ans;
}

// Use bucket sort for lower ranges for O(n) TC
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    int bucket[1001] = {0}, mn = 1001, mx = 0;
    for(auto box : boxTypes){
        mn = min(box[1], mn);
        mx = max(box[1], mx);
        bucket[box[1]] += box[0];
    }
    int ans=0;
    for(int i=mx; i>=mn; --i){
        int x = min(bucket[i], truckSize);
        ans += x*i;
        truckSize -= x;
        if(!truckSize) break;
    }
    return ans;
}