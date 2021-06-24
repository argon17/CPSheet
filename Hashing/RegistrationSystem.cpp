#include "../nub.h"

void solve()
{
    int n; cin>>n;
    map<string, int> mp;
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