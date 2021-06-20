#include<bits/stdc++.h>
using namespace std;

string reverseParentheses(string s) {
    stack<int> st;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            int x = st.top();
            st.pop();
            reverse(s.begin()+x, s.begin()+i);
        } 
    }
    string ans;
    for(auto c : s){
        if(c != '(' && c != ')'){
            ans += c;
        }
    }
    return ans;
}