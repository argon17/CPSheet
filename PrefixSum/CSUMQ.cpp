#include "../nub.h"

void solve()
{
    ll n, s = 0; cin>>n;
    vi a(n), pref(n);
    rep(i, 0, n) cin>>a[i], s+=a[i], pref[i]=s;
    // display(pref);
    ll q; cin>>q;
    while(q--){
        ll l, r;
        cin>>l>>r;
        cout<<(l!=0?(pref[r]-pref[l-1]):pref[r])<<endl;
    }
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