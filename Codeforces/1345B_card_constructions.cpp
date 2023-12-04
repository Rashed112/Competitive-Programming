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
const int maxn = 30100;
const int N  = 10000007;


int main() {
    _ios;
    int t = 1;
    cin >> t;
    vector<int>v(maxn,0);
    v[1]=2;
    for(int i=2;i<maxn;i++){
        v[i] = (2*i) + (i-1) + v[i-1];
    }
    while(t--) {
        int n;
        cin>>n;
        int cnt = 0;
        while(n>1){
            int idx = upper_bound(v.begin(), v.end(), n)-v.begin();
            n-=v[idx-1];
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
