/*
Hints: she can pick number randomly..so it would be wiser to pick the pair of numbers where there is zero or they are same.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,zero=0, f=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                zero++;
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                f=1;
                break;
            }
        }
        //cout<<"f-->"<<f<<endl;
        
        if(zero || f){
            cout<<n-zero<<endl;
        }
        
        else{
            cout<<n+1<<endl;
        }
        
    }
}
