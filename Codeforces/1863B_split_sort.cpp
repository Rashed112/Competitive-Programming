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
    vector<int>p(n+1);
    int x, res=n-1;
    for(int i=1;i<=n;i++){
        cin>>x;
        p[x]=i;
    }
    for(int i=2;i<=n;i++){
        if(p[i-1]<p[i]){
            res--;
        }
    }
    cout<<res<<endl;
    
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
