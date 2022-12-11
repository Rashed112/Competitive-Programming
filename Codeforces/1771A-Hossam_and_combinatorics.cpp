#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int cnt1=1, cnt2=1;
        for(int i=1;i<n-1;i++){
            if(arr[i]==arr[0]){
                cnt1++;
                
            }
            else break;
        }
        for(int i=n-2;i>0;i--){
            if(arr[i]==arr[n-1]){
                cnt2++;
            }
            else break;
        }
        //cout<<cnt1<<" "<<cnt2<<endl;
        if(arr[0]== arr[n-1]){
            long long ans=0;
            for(int i=1; i<=n-1; i++){
                ans += i;
            }
            ans *= 2;
            cout<<ans<<endl;
        }
        else{
            long long ans = 0;
            for(int i=0; i<cnt1; i++) ans += cnt2;
            ans *= 2;
            cout<<ans<<"\n";
        }
        
    }
}
