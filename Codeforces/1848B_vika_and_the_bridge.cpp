#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast 		   ios_base::sync_with_stdio(0);cin.tie(0);
#define pb 			   push_back
#define all(a)		   a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int>v[k+5];
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[x].pb(i+1);
    }
    int res = mod;
    for(int i=1;i<=k;i++){
        v[i].pb(n+1);
        vector<int>temp;
        int prev = 0;
        for(auto j : v[i]){
            temp.pb(j-prev-1);
            prev = j;
        }
        sort(all(temp));
        int a = temp.back();
        temp.pop_back();
        temp.pb(a/2);
        sort(all(temp));
        res = min(res, temp.back());
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
