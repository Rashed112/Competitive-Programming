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
    vector<vector<int>>vv(n);
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int a;
        for(int j=0;j<m;j++){
            cin>>a;
            vv[i].push_back(a);
        }
    }
    int x;
    cin>>x;
    vector<int>v;
    vector<vector<int>>res(38);
    int f=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<vv[i].size();j++){
            if(vv[i][j]==x){
                res[vv[i].size()].push_back(i+1);
                v.push_back(vv[i].size());
                f=1;
                break;
            }
        }
    }
    if(f==0){
        cout<<0<<endl;
        return;
    }
    sort(v.begin(), v.end());
    cout<<res[v[0]].size()<<endl;
    for(int i=0;i<res[v[0]].size();i++){
        cout<<res[v[0]][i]<<" ";
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
