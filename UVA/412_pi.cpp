//don't use setprecision always use printf to precisely print, and if you use printf, than in all cases use printf, dont mix it with cout

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
    while(cin>>n && n){
        vector<int>v(n);
        for(int i=0;i<n;i++)    cin>>v[i];

        int cnt=0, t=n*(n-1)/2;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(v[i], v[j])==1){
                    cnt++;
                }
            }
        }
        if(!cnt){
            printf("No estimate for this data set.\n");
        }
        else{
            printf("%0.6lf\n", sqrt((double)6*t/cnt));
        }
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
