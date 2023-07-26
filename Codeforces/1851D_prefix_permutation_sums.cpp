#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n), diff(n);
    set<ll>s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    ll extra = 0;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
        if(i==0){
            diff[i]=v[i];
        }
        else{
            diff[i]=v[i]-v[i-1];
        }
        if(diff[i]>n || !s.count(diff[i])){
            extra = diff[i];
        }
        else{
            s.erase(diff[i]);
        }
    }
    ll need = 0;
    for(auto x: s){
        need+=x;
    }
    if(s.size()>2){
        cout<<"NO"<<endl;
    }
    else if(extra ==0 || need == extra){
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
