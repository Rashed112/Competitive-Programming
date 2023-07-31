#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    string s;
    cin>>s;
    if(s.size()<=1){
        cout<<0<<endl;
        return;
    }
    ll sum =0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    int cnt=1;
    while(sum>=10){
        cnt++;
        int temp = sum;
        sum =0;
        while(temp!=0){
            sum+=temp%10;
            temp/=10;
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
