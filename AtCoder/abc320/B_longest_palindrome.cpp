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
    string s;
    cin>>s;
    int res =0;
    for(int i=1;i<s.size();i++){
        int curr=1, curr2=0;
        int j=1;
        while(i-j>=0 && i+j<s.size()){
            if(s[i-j]==s[i+j]){
                curr+=2;
                j++;
            }
            else{
                break;
            }
        }
        int l=i-1, r=i;
        while(l>=0 && r<s.size()){
            if(s[l]==s[r]){
                curr2+=2;
                l--;
                r++;
            }
            else{
                break;
            }
        }
        res = max({res, curr, curr2});
    }
    cout<<res<<endl;
    
}

int main() {
    _ios;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
