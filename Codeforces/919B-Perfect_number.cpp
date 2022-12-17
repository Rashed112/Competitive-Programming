// normal simulation of the process

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    int i=18, k=1;
    while(i++){
        int sum=0, t=i;
        while(t>0){
            sum+=t%10;
            t/=10;
        }
        if(sum!=10) continue;
        else{
            if(k==n){
                cout<<i<<endl;
                break;
            }
            else{
                k++;
            }
        }
    }
}
