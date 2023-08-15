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
    string s;
    cin>>s;
    int c[n];
    vector<deque<int>> v(m+1);
    for(int i=0;i<n;i++){
        cin>>c[i];
        v[c[i]].push_back(i);
    }
    for(int i=1;i<=m;i++){
        int backN = v[i].back();
        v[i].pop_back();
        v[i].push_front(backN);
    }
    for(int i=0;i<n;i++){
        cout<<s[v[c[i]].front()];
        v[c[i]].pop_front();
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
