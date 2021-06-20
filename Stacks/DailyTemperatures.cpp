#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    stack<int> st;
    vector<int> ans(n);
    for(int i=n-1; i>=0; --i){
        while(st.size() && temperatures[i]>=temperatures[st.top()]) st.pop();
        if(st.empty()) ans[i] = 0;
        else ans[i] = st.top();
        st.push(i);
    }
    for(int i = 0; i < n; ++i){
        ans[i] = ans[i] - i <= 0 ? 0 : ans[i] - i;
    }
    return ans;
}