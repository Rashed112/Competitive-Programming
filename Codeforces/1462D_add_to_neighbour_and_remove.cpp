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
    vector<ll>v(n);
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    for(int i=n;i>=1;i--){
        if(sum%i==0){
            ll needSum = sum/i;
            ll currSum = 0;
            bool ok = true;
            for(int j = 0; j<n;j++){
                currSum += v[j];
                if(currSum>needSum){
                    ok = false;
                    break;
                }
                else if(currSum == needSum){
                    currSum = 0;
                }
            }
            if(ok){
                cout<<n-i<<endl;
                return;
            }
        }
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
