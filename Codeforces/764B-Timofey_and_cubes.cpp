/*
Hint: observe how the change occurs in odd and even n, cause if we perform same exchange in two indices, it'll be basically unchanged
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n;
    int arr[n+5];
    d = ceil(n*1.0/2);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<d;i+=2){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
