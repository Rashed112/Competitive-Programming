#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<string>v(n);
    unordered_map<string, int>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    string res;
    for(int i=0;i<n;i++){
        int f =0;
        
        for(int j=1;j<v[i].size();j++){
            string s2= v[i].substr(j, n-j);
            string s1 = v[i].substr(0, j);
          
            if(m[s1] && m[s2] && s1+s2 == v[i]){
                res+="1";
                f=1;
                break;
            }
            else if(m[s1] && s1+s1==v[i]){
                res+="1";
                f=1;
                break;
            }
            else if(m[s2] && s2+s2==v[i]){
                res+="1";
                f=1;
                break;
            }
        }
        if(f==0){
            res+="0";
        }
    }
    cout<<res<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
