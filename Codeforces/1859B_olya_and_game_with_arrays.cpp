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
    vector<int>v1,v2;
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int x;
        for(int j=0;j<m;j++){
            cin>>x;
            v[i].push_back(x);
        }
        sort(all(v[i]));
        v1.push_back(v[i][0]);
        v2.push_back(v[i][1]);
    }
    sort(all(v1));
    sort(all(v2));
    v2.erase(v2.begin());
    v2.push_back(v1[0]);
    ll sum=0;
    for(auto x: v2){
        sum+=x;
    }
    cout<<sum<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
