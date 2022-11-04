/*
Hint1: simulate some example on paper to get the pattern

Hint2: if there is odd num of column, then it's not possible to fill up the whole shape as the given shape has even column
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    if(n%2){
        cout<<0<<endl;
    }
    else{
        ll ans = pow(2, n/2);
        cout<<ans<<endl;
    }
}
