/*
Hint: Tricky parts you have to think, when one array will be finished, how you would you know or continue the implementation of the other array and how to set the conditions for this.
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int m, n;
    cin>>m>>n;
    vector<int> a(m), b(n), c(m+n);
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int i=0, j=0,k=0;
    while(i<m || j<n)
    {
        if(j==n || (i<m && a[i]<b[j]) ){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }

    }
    for(int x : c){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}
