#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, a, q;
    cin>>n>>a>>q;
    char ch;
    int on=0, off=0, temp=a, f=0;
    for(int i=0;i<q;i++){
        cin>>ch;
        if(ch=='+'){
            on++;
            temp++;
        }
        else{
            off++;
            temp--;
        }
        if(temp>=n){
            f=1;
        }
    }
    //cout<<temp<<endl;
    if(a>=n || f==1){
        cout<<"YES"<<endl;
    }
    else if(f==0 && a+on>=n){
        cout<<"MAYBE"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
