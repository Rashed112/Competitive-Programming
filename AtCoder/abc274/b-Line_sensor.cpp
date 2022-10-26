//Hint: simple implementation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005];
    memset(arr, 0, sizeof(arr));
    int h, w;
    cin>>h>>w;
    char x;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>x;
            if(x == '#') {
                arr[j]++; //counting while taking input
            }
        }
    }
    for(int i=0;i<w;i++){
        cout<<arr[i]<<" ";
    }
}
