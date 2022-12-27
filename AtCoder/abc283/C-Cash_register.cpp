#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='0' && s[i]=='0'){
            cnt++;
            i++;
        }
    }
    cout<<s.size()-cnt<<endl;
}
