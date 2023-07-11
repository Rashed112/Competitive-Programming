#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i =1 ;i<n-1; ){
            swap(arr[i], arr[i+1]);
            i+=2;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	
	return 0;
}
