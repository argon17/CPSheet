#include<bits/stdc++.h>
using namespace std;

int scoreOfParentheses(string s) {
    int ans = 0, dep = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') ++dep;
        else{
            --dep;
            // add pow(2, dep-1) to answer only when reached to max depth 
            if(s[i-1] == '(') ans += 1<<dep;
        }
    }
    return ans;
}