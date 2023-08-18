#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int anna = a+(c+1)/2;
    int kaite = b+c/2;
    //cout<<anna<<" "<<kaite<<endl;
    if(anna>kaite){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
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
