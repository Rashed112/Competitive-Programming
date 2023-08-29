#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i>0){
            v[i]+=v[i-1];
        }
    }
    int l=0, r=k, minN=v[k-1], ans = l;
    while(r<n){
        if(v[r]-v[l]<minN){
            ans=l+1;
            minN=v[r]-v[l];
        }
        l++;
        r++;
    }
    cout<<ans+1<<endl;

}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
//15min
