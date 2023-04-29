//using prefix sum to identify where is x>=y>=z by adding 1 in the z position
//then we can calculate how many we have to exclude to make it almost-increasing, by pre[r]-pre[l+1]

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n, q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pre[n];
    pre[0]=0;
    for(int i=0;i<n;i++){
        pre[i+1]=pre[i];
        if(i>0 && i<n && arr[i-1]>=arr[i] && arr[i]>=arr[i+1]){
            pre[i+1]++;
        }
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        l--;r--;
        int ans=r-l+1;
        if(l<r){
            ans-=pre[r]-pre[l+1];
        }
        cout<<ans<<endl;
        
    }
    
}
