#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s[n];
        int ans=n;
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]!=s[0]){
                ans--;
            }
        }
        cout<<ans<<endl;
    }
}
