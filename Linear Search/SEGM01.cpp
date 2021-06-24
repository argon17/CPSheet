#include "../nub.h"
void solve()
{
    string s;
    cin>>s;
    int g = 0;
    for(char c : s){
        if(c=='1'){
            if(g == 0) g = 1;
            if(g == 2){
                cout<<"NO"<<endl;
                return;
            }
        }else{
            if(g == 1) g = 2;
        }
    }

    cout<<(g?"YES":"NO")<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int TEST=1;
    cin >> TEST;
    //init();
    while(TEST--)
    {
        solve();
    }
}
