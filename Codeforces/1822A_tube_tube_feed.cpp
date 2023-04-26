#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int q;
    cin>>q;
    while(q--){
        int n, t;
        cin>>n>>t;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ent=0, res=-1;
        for(int i=0;i<n;i++){
            if(a[i]<=t){
                if(b[i]>=ent){
                    res=i;
                    ent = b[i];
                }
            }
            t--;
        }
        cout<<(res==-1? -1: res+1)<<endl;
    }
}
