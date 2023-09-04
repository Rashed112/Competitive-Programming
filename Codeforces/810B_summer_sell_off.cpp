#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, f;
    cin>>n>>f;
    vector<pair<int,int>>vii;
    vector<int>k(n), l(n);
    ll  sum=0;
    for(int i=0;i<n;i++){
        cin>>k[i]>>l[i];
        vii.push_back({min(2*k[i], l[i]-min(k[i], l[i])), i});
    }
    sort(vii.rbegin(), vii.rend());
    
    
    for(int i=0; i<f;i++){
        int pos = vii[i].second;
        sum += min(2*k[pos], l[pos]);
    }
    for(int i=f;i<n;i++){
        int pos = vii[i].second;
        sum += min(k[pos], l[pos]);
    }
    cout<<sum<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
