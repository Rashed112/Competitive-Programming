#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    map<string, int> mp;
    int f=0;
    while(n--){
        cin>>s;
        if(mp.find(s) != mp.end()){
            f=1;
            //cout<<"f1= "<<f<<" ";
        }
        mp[s]++;
        if(s[0] != 'H' && s[0] != 'D' && s[0] != 'C' && s[0] != 'S' ){
            f=1;
            //cout<<"f2= "<<f<<" ";
        }
        if(s[1] != 'A' && s[1] != '2' && s[1] != '3' && s[1] != '3' && s[1] != '4' && s[1] != '5' && s[1] != '6' && s[1] != '7' && s[1] != '8' && s[1] != '9' && s[1] != 'T' && s[1] != 'J' && s[1] != 'Q' && s[1] != 'K'){
            f=1;
            //cout<<"f3= "<<f<<" ";
        }
          
    }
    if(f==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
