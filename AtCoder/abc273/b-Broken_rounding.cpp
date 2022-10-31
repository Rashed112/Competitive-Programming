// Hints: implementation, simulation

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll x, y, k, m;
    cin>>x>>k;
    ll p=1;
    for(int i = 1; i<=k; i++){
        p*=10;
        ll q = x%p;
        x -= q;
        if(q/(p/10)>4){
            x += p;
        }
    }
    cout<<x<<"\n";

}
