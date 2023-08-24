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
    vector<int>v(n), res;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    res.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            res.push_back(v[i]);
        }
        res.push_back(v[i]);
    }
    cout<<res.size()<<endl;
    for(auto x: res){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
