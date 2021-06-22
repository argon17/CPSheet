#include<bits/stdc++.h>
using namespace std;

/*-------------------------------------------------------------------------------------------------------------*/

#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define endl        '\n'
#define mii         map<ll,ll>
#define msi         map<string,ll>
#define mis         map<ll, string>
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b) for(ll i=b-1;i>=a;i--)
#define trav(a, x)  for(auto& a : x)
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pair<ll, ll>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define display(x)  trav(a,x) cout<<a<<" ";cout<<endl;
#define FAST        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/*-------------------------------------------------------------------------------------------------------------*/

#ifdef ARGON
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#define debug1d(a, n) {cerr << #a<<" "; cerr << "[ "; for (auto& i : a) {_print(i); cerr << " ";} cerr << "]";}
#define debug2d(a, r, c) cerr << #a<<" :\n"; for(auto& i : a){for(auto& j : i){cerr<<j<<" ";} cerr<<endl;}
#else
#define debug(x)            NULL;
#define debug1d(a, n)       NULL;
#define debug2d(a, r, c)    NULL;
#endif

/*-------------------------------------------------------------------------------------------------------------*/

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

/*--------------------------------------------------------------------------------------------------------------*/

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*-----------------------------------------------------------------------------------------------------------------------------*/