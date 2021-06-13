#include "../nub.h"

void solve()
{
    ll n, s = 0, x; cin>>n;
    vi a(n), pref(n);
    rep(i, 0, n) cin>>a[i];
    rep(i, 0, n){
        if(a[i] == -1) 
            x = pref[i-1]/i, a[i] = x;
        s += a[i];
        pref[i] = s;
    }
    display(a);
}
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll int TEST=1;
    cin >> TEST;
    //init();
    while(TEST--)
    {
        solve();
    }
}