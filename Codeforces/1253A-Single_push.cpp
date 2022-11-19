#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5], b[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> v(n);
        int k=0, f=0, l=0, r=0, cnt1=0, cnt2=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                cnt1++;
                //cout<<"cnt1= "<<cnt1<<" ";
                if(cnt1==1) l=i;
                r=i;
                if((b[i]-a[i])<0){
                    f=1;
                    //cout<<"f1= "<<f<<" ";
                    break;
                }
                else{
                    v[k++]= (b[i]-a[i]);
                    //cout<<"v= "<<v[k-1]<<" ";
                    
                } 
                //cout<<"v[k-1]= "<<v[k-1]<<" v[k-2]= "<<v[k-2]<<" ";
                if(cnt1>1 && v[k-1] != v[k-2]){  
                    f=1;
                    //cout<<"f2= "<<f<<" ";
                    
                }                
            }
            else{
                cnt2++;
                //cout<<"cnt2= "<<cnt2<<" ";
            }
            
        }
       // cout<<"f= "<<f<<" ";
        if(cnt2==n) cout<<"YES"<<endl;
        else if(cnt2>n-(r-l+1) || f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
}
