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
    vector<int>pos(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>pos[i];
    }
    int l=0, r=0, i;
    for(i=0;i<n-1;i++){
        if(pos[i]>pos[i+1]){
            l=i;
            break;
        }
    }
    for(i=l;i<n-1;i++){
        if(pos[i]<pos[i+1]){
            r=i;
            break;
        }
    }
    if(i==n-1){
        r=n-1;
    }
    sort(pos.begin()+l, pos.begin()+r+1);
    for(i=0;i<n-1;i++){
        if(pos[i]>pos[i+1]){
            break;
        }
    }
    if(i!=n-1){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
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
