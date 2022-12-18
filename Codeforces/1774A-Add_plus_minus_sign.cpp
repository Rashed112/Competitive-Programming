#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t, n;
    string s;
    cin>>t;
    while(t--){
        int one=0;
        cin>>n;
        cin>>s;
        int l=s.size();
        for(int i=1;i<n;i++){
            if(s[i]=='0'){
                cout<<'+';
            }
            else{
                one++;
                if(one%2){
                    cout<<'-';
                }
                else cout<<'+';
                
            }
        }
        cout<<endl;
    }
}
