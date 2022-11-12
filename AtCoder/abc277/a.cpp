#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n>>x;
    int arr[n+5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==x){
            cout<<i+1<<endl;
        }
    }
}
