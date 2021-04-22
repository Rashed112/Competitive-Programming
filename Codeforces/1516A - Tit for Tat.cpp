/*
Hint1: you can decrease from first to before last number, but you can increase only just one number.. 

Hint2: just select last number to increase every time and decrease number first to n-1.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1 && k!=0;i++){
            if(k<arr[i]){
                arr[i]-=k;
                arr[n-1]+=k;
                k=0;
            }
            else{
                k-=arr[i];
                arr[n-1]+=arr[i];
                arr[i]=0;
            }

        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
