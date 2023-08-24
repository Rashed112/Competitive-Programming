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
    vector<int>v(n), a(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[0]!=n){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        a[v[i]-1]++;
    }
    for(int i=n-2;i>=0;i--){
        a[i]+=a[i+1];
    }
    if(v==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
