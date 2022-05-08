#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    fast;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<int > a(n);
        ll cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                cnt++;
                a[i]=-a[i];
            }
        }
        ll f=0;
        for(int i=0;i<cnt-1;i++){
            if(a[i+1]>a[i]){
                f=1;
                break;
            }
        }
        for(int i=cnt;i<n-1;i++){
            if(a[i+1]<a[i]){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"NO\n";
        }
        else {
            cout<<"YES\n";
        }
        
    }
    
}
