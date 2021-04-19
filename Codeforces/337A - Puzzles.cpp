/*

CF Tutorial link: https://codeforces.com/blog/entry/8629

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+5];

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int b=10000000;
    for(int i=0;i<m;i++){
        if((n+i-1)>=m){
            break;
        }
        b=min(b,arr[n+i-1]-arr[i]);
        //cout<<arr[n+i-1]<<"-"<<arr[i]<<endl;;
    }

    cout<<b<<endl;
    return 0;

}
