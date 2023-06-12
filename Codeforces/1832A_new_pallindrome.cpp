#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int f=0;
        set<char>st;
        for(int i=0;i<s.size()/2 ;i++){
            st.insert(s[i]);
        }
        if(st.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}
