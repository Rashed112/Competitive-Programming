/*
Hint1: sort

Hint2: use "Long Long int"
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    ll arr[t+5];
    for (int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr, arr+t);
    ll s=0,m=0;
    for(int i=0;i<t;i++){
        s=arr[i]*(t-i);
        if(s>m){
            m=s;
        }
    }
    cout<<m<<endl;
    return 0;

}
