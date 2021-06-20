#include<bits/stdc++.h>
using namespace std;

//"leEeetcode" => "leetcode"; "abBAcC" => ""
string makeGood(string s) {
    stack<char> st;
    for(int i = 0; i < s.size(); ++i){
        if(st.size() && abs(st.top() - s[i]) == 32) st.pop();
        else st.push(s[i]);
    }
    string res;
    while(!st.empty())
    {
        res=st.top()+res;
        st.pop();
    }
    return res;
}