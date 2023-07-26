#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, m, k, H;
    cin>>n>>m>>k>>H;
    int res=0;
    vector<int>h(n+5), diff(n+5);
    for(int i = 0;i<n;i++){
        cin>>h[i];
        diff[i]=abs(H-h[i]);
        if(diff[i] !=0 && diff[i] % k ==0 && (diff[i]/k < m)){
            res++;
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
