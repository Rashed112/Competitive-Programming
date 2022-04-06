/*
Hints: only the 2nd array's size matters, so if it ends the whole process ends.

*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    vector<int> a(m), b(n), res(n);
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int i=0,j=0;
    while(j<n)
    {
       if(i<m && a[i]< b[j]){
            i++;
       }
       else
        res[j++]=i;
    }

    for(int i=0;i<n;i++) cout<<res[i]<<" ";
    return 0;

}
