#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int a=0, b=0, c=0;
    for(int i=0;i<3;i++){
        string s;
        cin>>s;
        if(s[1] == '>'){
            if(s[0]=='A'){
                a++;
            }
            else if(s[0]=='B'){
                b++;
            }
            else if(s[0]=='C'){
                c++;
            }
        }
        else{
            if(s[2]=='A'){
                a++;
            }
            else if(s[2]=='B'){
                b++;
            }
            else if(s[2]=='C'){
                c++;
            }
        }
    }
    vector<char>res(3);
    if(a==b || b==c || c==a){
        cout<<"Impossible"<<endl;
    }
    else{
        res[a]='A';
        res[b]='B';
        res[c]='C';
        for(int i=0;i<3;i++){
            cout<<res[i];
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
