#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, m;
    cin>>n>>m;
    ll arr[m];
    for(ll i=0;i<m;i++){
        cin>>arr[i];
    }
    ll res = arr[0]-1;
    for(ll i=1;i<m;i++){
        if(arr[i]>=arr[i-1]){
            res+=arr[i]-arr[i-1];
        }
        else{
            res+=n-arr[i-1] + arr[i];
        }
    }
    cout<<res<<endl;
}
