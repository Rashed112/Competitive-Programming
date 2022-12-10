#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, t;
    cin >> n >> t;
    ll a[n + 5];
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    ll loop = t/sum;
    ll remaining_time, res2;
    
    remaining_time = t-sum*loop;
    res2 = remaining_time;
        //cout<<"res2= "<<res2<<" ";
    ll mul=0;
    for(int i=0;i<n;i++){
        mul+=a[i];
        if(mul>=remaining_time ){
            cout<<i+1<<" "<<a[i]-(mul-remaining_time)<<endl;
            break;
        }
    }
}
