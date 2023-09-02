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
    int x1, x2, y1, y2;
    int rec[105][105], area=0;
    memset(rec, 0, sizeof(rec));
    while(n--){
        cin>>x1>>x2>>y1>>y2;
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                if(rec[i][j]==0){
                    rec[i][j]=1;
                    area++;
                }

            }
        }
    }
    cout<<area<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
