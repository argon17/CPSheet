#include "../nub.h"
void solve()
{
    int n, s = 0, cnt = 0, ok = 0, mx = INT_MIN; cin>>n;
    vector<int> ar(n);
    for(int i=0; i<n; ++i){
       cin>>ar[i];
       if(ar[i]>=0) s+=ar[i], ok = 1, ++cnt;
       else mx = max(mx, ar[i]);
    }
    cout<<(ok?s:mx)<<" "<<(ok?cnt:1);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int TEST=1;
    // cin >> TEST;
    //init();
    while(TEST--)
    {
        solve();
    }
}
