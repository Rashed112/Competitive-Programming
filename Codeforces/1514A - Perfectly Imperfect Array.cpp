/*

Hint1: only multiplication of square numbers can be a square number. that means........(think 😁, then look into Hint2)


Hint2: so, every number of the array should be a square number.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n+5],f=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0;

        for(int i=0;i<n;i++){
            a=sqrt(arr[i]);
            //cout<<"a= "<<a<<endl;
            if((a*a)!=arr[i]){

                f=1;
                break;
            }

        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
