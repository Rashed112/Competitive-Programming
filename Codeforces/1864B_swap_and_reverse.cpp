#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    if(k%2==0){
        sort(all(s));
        cout<<s<<endl;
        return;
    }
    else{
        vector<pair<char, int>>odd, even;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                even.push_back({s[i-1], i-1});
            }
            else{
                odd.push_back({s[i-1], i-1});
            }
        }
        sort(all(even));
        sort(all(odd));
        int k=0;
        for(int i=0;i<odd.size();i++){
            s[k]=odd[i].first;
            k+=2;
        }
        k=1;
        for(int i=0;i<even.size();i++){
            s[k]=even[i].first;
            k+=2;
        }
    }
    cout<<s<<endl;
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
