#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    
    ll n;
    cin>>n;
    ll l=0, r=3e9;
    while(l<r-1){
        ll mid = l+(r-l)/2;
        if(mid*(mid-1)/2<=n){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<l+n-l*(l-1)/2<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
