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
    vector<ll>v(n), v2(n), sum1(n+1), sum2(n+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum1[i+1]=sum1[i]+v[i];
    }
    int q;
    v2 = v;
    sort(all(v2));
    for(int i=0;i<n;i++){
        sum2[i+1]=sum2[i]+v2[i];
    }
    cin>>q;
    while(q--){
        ll t, l, r;
        cin>>t>>l>>r;
        if(t==1){
            if(l-1>=0){
                cout<<sum1[r]-sum1[l-1]<<endl;
            }
            else{
                cout<<sum1[r]<<endl;
            }
        }
        else{
            if(l-1>=0){
                cout<<sum2[r]-sum2[l-1]<<endl;
            }
            else{
                cout<<sum2[r]<<endl;
            }
        }
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
