#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else if(n%2){
            cout<<-1<<endl;
        }
        else{
            int arr[n];
            for(int i=1;i<=n;i++){
                arr[i]=i;
                if(i%2==0){
                    swap(arr[i], arr[i-1]);
                }
            }
            for(int i=1;i<=n;i++){
                cout<<arr[i]<<" \n"[i==n];
            }
        }
        
    }
    
}
