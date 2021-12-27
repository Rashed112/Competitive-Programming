/*
Hint1: perimeter of a rectangle is always even.

Hint2: if two sticks are equal in size, then the other one has to be divided and in that case it had to be an even.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[5];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        if((arr[0]+arr[1]+arr[2])%2!=0){
            cout<<"NO"<<endl;
        }
        else if(arr[0]+arr[1] == arr[2]){
            cout<<"YES"<<endl;
        }
        else{
            if((arr[1] == arr[2]) && arr[0]%2==0){
                cout<<"YES"<<endl;
            }
            else if((arr[0]==arr[1]) && arr[2]%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;

}
