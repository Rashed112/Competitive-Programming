#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<int>sell(n), buy(m);
    for(int i=0;i<n;i++){
        cin>>sell[i];
    }
    for(int i=0;i<m;i++){
        cin>>buy[i];
    }
    sort(all(sell));
    sort(all(buy));
    int l=0, r=mod;
    while(l+1<r){
        int mid = l+(r-l)/2;
        int sN=0, bN=0;
        for(int i=0;i<n;i++) sN += (mid >= sell[i]);
        for(int i=0;i<m;i++) bN += (mid <= buy[i]);
        if(sN>=bN){
            r = mid;
        }
        else{
            l=mid;
        }
    }
    cout<<r<<endl;
    
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
