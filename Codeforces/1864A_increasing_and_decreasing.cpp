#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int x,y, n;
    cin>>x>>y>>n;
    vector<int>v(n);
    int l=x, r=y, b=1;
    v[0]=x;
    v[n-1]=y;
    if(n>(y-x)){
        cout<<-1<<endl;
        return;
    }
    for(int i=n-2;i>0;i--){
        if(v[i+1]-b > x){
            v[i]= v[i+1]-b;
            b++;
        }
    }
    for(int i=0;i<n-2;i++){
        if(v[i+1]-v[i]<=v[i+2]-v[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
