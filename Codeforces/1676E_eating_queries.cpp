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
    int n, q;
    cin>>n>>q;
    vector<int>v(n);
    int total = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    while(q--){
        int x, i=0;
        cin>>x;
        if(x>total){
            cout<<-1<<endl;
            continue;
        }
        //bs lagbe
        int res = lower_bound(v.begin(), v.end(), x)-v.begin();
        if(res==n){
            cout<<-1<<endl;
        }
        else{
            cout<<res+1<<endl;
        }
    }

}

int main() {
    _ios;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
