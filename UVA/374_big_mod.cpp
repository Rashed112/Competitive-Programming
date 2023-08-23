#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;
//simply we'll work by dividing the power in half, by which we can exclude overflow
ll bigMod(ll b, ll p, ll m){
    if(p==0){
        return 1;
    }
    ll sq=bigMod(b, p/2, m);
    sq*=sq;
    if(p%2==1){
        sq=(sq*b)%m;
    }
    return sq%m;
}
void solve(){
    ll b, p, m, res=1;
    while(cin>>b>>p>>m){
        ll res= bigMod(b, p, m);
        cout<<res<<endl;
    }
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
