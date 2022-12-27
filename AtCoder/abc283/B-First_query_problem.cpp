#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int no, k, x;
        cin>>no>>k;
        if(no==1) cin>>x;
        if(no==2){
            cout<<arr[k-1]<<endl;
        }
        if(no==1){
            arr[k-1]=x;
        }
        

    }
    return 0;
}
