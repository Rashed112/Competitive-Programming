#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], a1[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0, r=n-1;
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            if(a[i] != a1[i]){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i] != a1[i]){
                r=i;
                break;
            }
        }
        while(l>0 && a1[l-1]<=a1[l]){
            l--;
        }
        while(r<n-1 && a1[r]<=a1[r+1]){
            r++;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
}
