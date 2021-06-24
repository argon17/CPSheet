#include "../nub.h"

void solve()
{
    string s;
    getline(cin, s);
    vector<int> f(256, 0);
    for(char c : s){
        ++f[(int)c];
    }
    int ind = max_element(all(f)) - f.begin();
    int mx = *max_element(all(f));
    cout<<(char)ind<<" "<<mx;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int tc=1;
    // cin >> TEST;
    //init();
    while(tc--)
    {
        solve();
    }
}