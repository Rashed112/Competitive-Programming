#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<pair<int,int>>mp(m);
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        mp[i]=make_pair(y, x);
    }
    sort(all(mp));
    int res=0;
    for(int i=m-1;i>=0 && n>0;i--){
        if(mp[i].second<=n){
            res+=mp[i].second*mp[i].first;
            n-=mp[i].second;
        }
        else{
            res+=n*mp[i].first;
            n-=mp[i].second;
        }
    }
    cout<<res<<endl;

}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
