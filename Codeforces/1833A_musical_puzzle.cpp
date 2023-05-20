#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<string, int>ump;
        int cnt=0;
        for(int i=0;i<s.size()-1;i++){
            string temp;
            temp=s[i];
            temp+=s[i+1];
            if(ump.find(temp) == ump.end()){
                cnt++;
                ump[temp]++;
            }
        }
        cout<<cnt<<endl;
    }
}
