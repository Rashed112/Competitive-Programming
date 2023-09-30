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

void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> res(n+1), v(m);
    vector<pair<int, int>>vp;
    unordered_map<int, int>ump;
    int prev =0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v[i]=x;
    }
    
    for(int i=0;i<m-1;i++){
        int diff = v[i+1]-v[i]-1;
        for(int j=v[i]+1;j<v[i+1];j++){
            res[j]=diff--;
        }
    }
    if(v[0]>1){
        int temp = v[0]-1;
        for(int i=1;i<v[0];i++){
            res[i]=temp--;
        }
    }


    for(int i=1;i<=n;i++){
        cout<<res[i]<<endl;
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
