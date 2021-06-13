#include "../nub.h"

void solve()
{
    ll n, p;
    cin>>n>>p;
    vi a(p+2, 0);
    rep(i, 0, n){
        ll s, r;
        cin>>s>>r;
        ++a[max(0LL, s-r)];
        --a[min(p+1,s+r+1)];
    }
    rep(i, 1, p+2){
        a[i] += a[i-1];
    }
    // display(a);
    ll ans = 0, cur = 0;
    rep(i, 0, p+1){
        if(a[i] != 1) ++cur, ans = max(cur, ans);
        else cur = 1;
    }
    cout<<ans;
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