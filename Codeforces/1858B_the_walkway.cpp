#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    ll n, m, d;
    cin>>n>>m>>d;
    vector<ll>seller(m+2);
    for(int i=1;i<=m;i++){
        cin>>seller[i];
    }
    seller[0]= -d+1;
    seller[m+1]=n+1;

    int sum =0;
    for(int i=1;i<=m+1;i++){
        sum+=(seller[i]-seller[i-1]-1)/d;
    }
    int res = n+1;
    int cnt = 0;
    for(int i=1;i<=m;i++){
        int temp = sum;
        temp -= (seller[i]-seller[i-1]-1)/d;
        temp -= (seller[i+1]-seller[i]-1)/d;
        temp += (seller[i+1]-seller[i-1]-1)/d;
        temp +=m-1;
        if(temp<res){
            res = temp;
            cnt=1;
        }
        else if(temp == res){
            cnt++;
        }
    }
    cout<<res<<" "<<cnt<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
