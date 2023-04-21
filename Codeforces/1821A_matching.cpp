#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<0<<endl;
            continue;
        }
        int res=1;
        for(int i=0;i<s.size();i++){
            if(s[i] == '?'){
                if(i==0){
                    res*=9;
                }
                else{
                    res*=10;
                }
            }
        }
        cout<<res<<endl;
    }
}
