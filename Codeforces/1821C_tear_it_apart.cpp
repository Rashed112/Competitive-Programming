#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size(), mini = 1e9, maxi;
        for(char i = 'a'; i <= 'z'; i++){
            int c = 0, maxi = 0;
            for(int j=0;j<n;j++){
                if(s[j] != i){
                    c++;
                    if(c>maxi){
                        maxi = c;
                    }
                }
                else{
                    c = 0;
                }
            }
            if(maxi<mini){
                mini = maxi;
            }
        }
        if(mini == 0 ){
            cout<<0<<endl;
        }
        else{
            int cnt=0;
            while(mini != 1){
                mini/=2;
                cnt++;
            }
            cout<<cnt+mini<<endl;
        }
    }
}
