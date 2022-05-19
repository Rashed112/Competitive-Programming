/*
Hint1: observing that after every 5 multiples there will be increasing a trailing zero

Hint2: Now, in some of the multiples, there are multiple 5s like 25=5*5, 125=5*5*5 etc..so we have to count those extra 5 which will increase the trailing zeros 
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0;
        int fact=5;
        while(n/fact>0){
            cnt+=n/fact;
            fact=fact*5;
        }
        cout<<cnt<<endl;
        
    }
}
