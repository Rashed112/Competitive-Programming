#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        //Represent number in n/dec form
        //as for 5.5 represent it as 55/10
        int n = 0, dec=1;
        bool f = false;
        for(int i=0;i<s.size();i++){
            if(f){
                dec*=10;
            }
            if(s[i] == '.'){
                f = true;
                continue;
            }
            n = n*10 + s[i]-'0';
        }
        int gcd = __gcd(n, dec);
        cout<<dec/gcd<<endl;
    }
}
