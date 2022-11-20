#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int f1=1;
    
    if(t%2)
        cout<<'a';
    for(int i=1;i<t;i+=2){
        if(f1==1){
            cout<<"ab";
            f1=0;
            
        }
        else{
            cout<<"ba";
            f1=1;
            
        }
        
    }
    
}
