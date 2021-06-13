#include "../nub.h"

void solve()
{
    string s;
    getline(cin, s);
    vi f(256, 0);
    for(char c : s){
        ++f[(int)c];
    }
    ll ind = max_element(all(f)) - f.begin();
    ll mx = *max_element(all(f));
    cout<<(char)ind<<" "<<mx;
}
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll int TEST=1;
    // cin >> TEST;
    //init();
    while(TEST--)
    {
        solve();
    }
}