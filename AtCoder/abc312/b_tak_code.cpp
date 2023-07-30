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
    vector<string>v(n+4);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<pair<int, int>>vii;
    string str;
    for(int i=0;i<n-9+1;i++){
        for(int j=0; j<m-9+1;j++){
            bool ok = 1;
            for(int k = 0; k<3;k++){
                for(int l =0; l<3; l++){
                    ok &= (v[i+k][j+l] == '#');    
                }                
            }
            for(int k = 0; k<3;k++){
                for(int l =0; l<3; l++){
                    ok &= (v[i+9-k-1][j+9-l-1] == '#');    
                }                
            }
            for(int k = 0; k<4;k++){
                for(int l =0; l<4; l++){
                    if(k==3 || l==3)
                        ok &= (v[i+k][j+l] == '.');    
                }                
            }
            for(int k = 0; k<4;k++){
                for(int l =0; l<4; l++){
                    if(k==3 || l==3)
                        ok &= (v[i+9-k-1][j+9-l-1] == '.');    
                }                
            }
            if(ok){
                vii.push_back(make_pair(i+1,j+1));
            }
        }
        
    }
    sort(all(vii));
    for(int i=0;i<vii.size();i++){
        cout<<vii[i].first<<" "<<vii[i].second<<endl;
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
