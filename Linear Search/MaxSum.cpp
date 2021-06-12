#include "../nub.h"
void solve()
{
    ll n, s = 0, cnt = 0, ok = 0, mx = INT_MIN; cin>>n;
    vi ar(n);
    rep(i, 0, n){
       cin>>ar[i];
       if(ar[i]>=0) s+=ar[i], ok = 1, ++cnt;
       else mx = max(mx, ar[i]);
    }
    cout<<(ok?s:mx)<<" ";
    cout<<(ok?cnt:1);
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
