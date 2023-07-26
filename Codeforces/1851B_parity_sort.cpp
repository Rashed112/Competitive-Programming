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
    vector<int>v(n+5), m;
    //vector<pair<int, int>>odd, even;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m.push_back(v[i]);
    }
    
    sort(all(m));
    
    int f=0;
    for(int i=0;i<n;i++){
        if((v[i]%2) != (m[i]%2)){
            f=1;
            break;
        }
    }
    cout<<(f==1?"NO": "YES")<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
