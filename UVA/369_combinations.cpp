#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    ll n, m;
    
    vector<vector<ll>>v(101, vector<ll>(101));
    v[1][0]=1;
    v[1][1]=1;
    
    for(int i=2;i<101;i++){
        v[i][0]=1;
        for(int j=1;j<i;j++){
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
        v[i][i]=1;
    }
    while((cin>>n>>m) && n && m){
        cout<<n<<" things taken "<<m<<" at a time is "<<v[n][m]<<" exactly."<<endl;
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
