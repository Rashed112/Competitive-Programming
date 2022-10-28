#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int > a(n), arr(2*n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        arr[2*i+1] = arr[a[i]-1]+1;
        arr[2*i+2] = arr[a[i]-1]+1;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\n";
    }
}
