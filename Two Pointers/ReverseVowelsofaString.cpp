#include<bits/stdc++.h>
using namespace std;

string reverseVowels(string s) {
    
    // can also use unordered set to store the vowels
    int dict[256] = {0};
    dict['a'] = 1, dict['A'] = 1;
    dict['e'] = 1, dict['E'] = 1;
    dict['i'] = 1, dict['I'] = 1;
    dict['o'] = 1, dict['O'] = 1;
    dict['u'] = 1, dict['U'] = 1;
    
    int n = s.length();
    int lo = 0, hi = n-1;
    while(lo<hi){
        while(lo<hi && 1^dict[s[lo]]) ++lo;
        while(lo<hi && 1^dict[s[hi]]) --hi;
        swap(s[lo++], s[hi--]);
    }
    return s;
}