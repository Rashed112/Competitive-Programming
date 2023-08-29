#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int a, b, c,d;
    cin>>a>>b>>c>>d;
    int l=a, r=c;
    while(l+b<=r){
        l+=b;
        r-=d;
    }
    cout<<max(l,r)<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
//19 min
