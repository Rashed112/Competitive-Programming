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
    deque<char>dq;
    if(str.size()%2==0){
        for(int i=0;i<str.size();i++){
            if(i%2==0){
                dq.push_front(str[i]);
            }
            else{
                dq.push_back(str[i]);
            }
        }
    }
    else{
        for(int i=0;i<str.size();i++){
            if(i%2==0){
                dq.push_back(str[i]);
            }
            else{
                dq.push_front(str[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<dq[i];
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
