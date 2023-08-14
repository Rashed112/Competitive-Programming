#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n), t(n);
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        t = v;
        reverse(t.begin()+i,t.end());
        int curr = 0, maxN = 0;
        for(int j = 0; j<n;j++){
            curr+=t[j]*(j+1);
            maxN = max(maxN, t[j]*(j+1));
        }
        ans = max(ans, curr-maxN);
    }
    cout<<ans<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
