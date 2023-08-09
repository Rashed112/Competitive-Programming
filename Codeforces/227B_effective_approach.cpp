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
    unordered_map<int, int>ump;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        ump[x]=i+1;
    }
    int t;
    cin>>t;
    ll lSearch=0, rSearch=0;
    while(t--){
        cin>>x;
        lSearch+=ump[x];
        rSearch+=(n-ump[x]+1);
    }
    cout<<lSearch<<" "<<rSearch<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
