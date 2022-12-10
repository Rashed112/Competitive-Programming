#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int l=s.size();
    if(l-2 != 6){
        cout<<"No"<<endl;
        return 0;
    }
    int f=0;
    for(int i=1;i<=6; i++){
        if(s[i]>='0'&& s[i]<='9' && s[1]!='0'){
            f=0;
        }
        else{
            f=1;
            break;
        }
    }
    if(((s[0]>='A' && s[0]<='Z') && (s[l-1]>='A' && s[l-1]<='Z')) && f==0){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
