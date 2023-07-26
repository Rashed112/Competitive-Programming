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
    vector<int>c(n+5);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int end = c[n-1], start = c[0], e_pos=n-1, s_pos=0, e_cnt=0, s_cnt=0;
    for(int i=n-1;i>=0;i--){
        if(e_cnt>=k){
            break;
        }
        if(c[i]==end){
            e_cnt++;
            e_pos = i;
        }
    }
    for(int i=0;i<e_pos;i++){
        if(s_cnt>=k){
            break;
        }
        if(c[i]==start){
            s_cnt++;
            s_pos=i;
        }
    }
    if(end != start && e_cnt>=k && s_cnt>=k){
        cout<<"YES"<<endl;
    }
    else if(end == start && (e_cnt>=k || s_cnt>=k)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
