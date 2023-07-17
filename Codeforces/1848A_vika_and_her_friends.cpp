#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    int x, y;
    cin>>x>>y;
    int a[k], b[k];
    int f=0;
    for(int i=0;i<k;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<k;i++){
        int sum = abs(x-a[i])+abs(y-b[i]);
        
        if(sum%2==0){
            cout<<"NO"<<endl;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"YES"<<endl;
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
