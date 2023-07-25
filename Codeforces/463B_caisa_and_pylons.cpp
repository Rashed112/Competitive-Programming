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
    vector<int>v(n+5, 0 );
    int res =0, energy = 0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        energy += v[i-1]-v[i];
        if(energy<0){
            res+=-energy;
            energy = 0;
        }
    }
    cout<<res <<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
