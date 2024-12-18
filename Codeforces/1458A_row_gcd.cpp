// Problem: A. Row GCD
// Contest: Codeforces - Codeforces Round 691 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1458/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;

#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin()) //returns pos equal or greater than of x
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
const int N  = 10000007;

/*
1. Think Greedy
2. Think Brute Force
3. Think Solution in reverse order
4. Think DP [check constraints carefully]
5. Check base cases for DP and prove solution for Greedy
6. Think Graph
*/

ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<ll>v1(n, 0), v2(m, 0);
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }
    for(int i=0;i<m;i++){
    	cin>>v2[i];
    }
    ll comm = 0;
    for(int i=1;i<v1.size();i++){
    	comm = gcd( abs(v1[0]-v1[i]), comm);
    }
    for(int i = 0; i<m;i++){
    	ll res = gcd(v2[i]+v1[0], comm);
    	cout<<res<<" ";
    }
    
}

int main() {
    _ios;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}


// T.C: O(nlogn)
// S.C: O(n)
