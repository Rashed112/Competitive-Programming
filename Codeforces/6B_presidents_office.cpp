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
    char c;
    cin>>c;
    char ch[n][m];
    vector<pair<int, int>>res;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ch[i][j];
            if(ch[i][j]==c){
                res.push_back({i,j});
            }
        }
    }
    int ans=0;
    set<char>uchar;
    for(int i=0;i<res.size();i++){
        int p=res[i].first, q=res[i].second;
        if(p-1>=0){
            if(ch[p-1][q]!='.' && ch[p-1][q]!=c){
                //cout<<ch[p-1][q];
                uchar.insert(ch[p-1][q]);
            }
        }
        if(q+1<m){
            if(ch[p][q+1]!='.' && ch[p][q+1]!=c){
                //cout<<ch[p][q+1];
                uchar.insert(ch[p][q+1]);
            }
        }
        if(p+1<n){
            if(ch[p+1][q]!='.' && ch[p+1][q]!=c){
                //cout<<ch[p+1][q];
                uchar.insert(ch[p+1][q]);
            }
        }
        if(q-1>=0){
            if(ch[p][q-1]!='.' && ch[p][q-1]!=c){
                //cout<<ch[p][q-1];
                uchar.insert(ch[p][q-1]);
            }
        }
    }
    cout<<uchar.size()<<endl;

}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
//25min
