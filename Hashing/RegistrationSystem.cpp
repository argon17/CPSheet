#include "../nub.h"

void solve()
{
    ll n; cin>>n;
    msi mp;
    while(n--){
        string s;
        cin>>s;
        if(mp.find(s)==mp.end()) cout<<"OK"<<endl;
        else{
            cout<<s<<mp[s]<<endl;
        }
        ++mp[s];
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