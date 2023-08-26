#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, h, x;
    cin>>n>>h>>x;
    vector<int>v(n);
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v[i]=a+h;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]<x){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt+1<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
