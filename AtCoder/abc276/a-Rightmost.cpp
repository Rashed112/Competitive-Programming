#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size(), ans=-1;
    for(int i=n-1;i>=0;i--){
        if(s[i] == 'a') {
            ans = i+1;
            break;
        }
    }
    cout<<ans;
}
