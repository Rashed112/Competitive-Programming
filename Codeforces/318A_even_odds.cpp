#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, k;
    cin>>n>>k;
    ll pos = ceil(1.0*n/2);
    if(pos>=k){
        cout<<2*k-1<<endl;
    }
    else{
        cout<<2*(k-pos)<<endl;
    }
}
