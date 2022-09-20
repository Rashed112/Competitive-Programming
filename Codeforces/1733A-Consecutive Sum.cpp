/*
Hint: we don't have to care about the number after k index, so we have to store the max values in  i%k indexes

Hint: if code don't run, check if you declare the vector size or not
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector< int > v(n);
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            v[i%k]= max(v[i%k], x);
        }
        ll sum=0;
        for(int i=0;i<k;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
}
