// Problem: A. Cover in Water
// Contest: Codeforces - Codeforces Round 911 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1900/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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

void solve(){
    int n; 
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    int i=0;
    if(s[i]=='.'){
    	i++;
    	cnt++;
    	
    }
    for(i=1;i<n-1;i++){
    	if(s[i]=='.'){
    		if(s[i-1]=='.' && s[i+1]=='.'){
    			cout<<2<<endl;
    			return;
    		}	
			cnt++;
    	}
	}
	if(i<n && s[i]=='.'){
		cnt++;
	}
	cout<<cnt<<endl;
}

int main() {
    _ios;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
