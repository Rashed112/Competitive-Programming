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
    string str;
    cin>>str;
    for(int i=0;i<n; i++){
        if(str[i]=='a'){
            int l=i-1;
            while(l>=0 && str[l] !='b' && str[l]!='a'){
                str[l]='a';
                l--;
            }
            int r = i+1;
            while(r<n && str[r]!='b' && str[r]!='a'){
                str[r]='a';
                r++;
            }
        }
    }
    int cnt=0;
    //cout<<str;
    for(int i=0;i<n;i++){
        if(str[i]=='a'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
