#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n+5];
        ll mul=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mul*=arr[i];
        }
        ll sum=(mul+n-1)*2022;
        cout<<sum<<endl;
    }
    
}
