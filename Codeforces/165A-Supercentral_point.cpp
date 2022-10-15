/*
Hint: have to check given 4 conditions for every points
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x[t+5],y[t+5];
    
    for(int i=0;i<t;i++){
        cin>>x[i]>>y[i];
        
    }
    int c1=0,c2=0, c3=0, c4=0, ans=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(x[i] > x[j] && y[i] == y[j]){
                c1++;
                //cout<<"test"<<cnt<<endl;
            }
            else if(x[i] < x[j] && y[i] == y[j]){
                c2++;
            }
            else if(x[i] == x[j] && y[i] < y[j]){
                c3++;
            }
            else if(x[i] == x[j] && y[i] > y[j]){
                c4++;
            }
        }
        if(c1>0 && c2>0 && c3>0 && c4>0){
            ans++;
            
        }
        c1 =0; c2=0; c3=0;c4=0;
    }
    cout<<ans<<endl;
}
