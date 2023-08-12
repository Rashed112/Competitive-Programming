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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    if(v[0]==v[n-1]){
        cout<<-1<<endl;
        return;
    }
    else{
        vector<int>b,c;
        for(int i=0;i<n;i++){
            if(v[i]==v[n-1]){
                c.push_back(v[i]);
            }
            else{
                b.push_back(v[i]);
            }
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto x : b) cout<<x<<" ";
        cout<<endl;
        for(auto x: c) cout<<x<<" ";
        cout<<endl;
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
