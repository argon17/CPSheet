#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int m = s.length(), n =t.length();
    int i =0, j = 0;
    while(i<n && j<m){
        if(t[i]==s[j]) ++j;
        ++i;
    }
    return (j==m?true:false);
}