/*
Hint1: sort

Hint2: as you always increase every elements by 1, so difference between highest and lowest number would be the ans 
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n+5];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        //ll cnt=0;
        cout<<arr[n-1]-arr[0]<<endl;
    }
    return 0;
}
