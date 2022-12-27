#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n], b[n], arr[n], p=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]>=x){
	            arr[p++]=i;
	        }
	        
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int sum=0;
	    for(int i=0;i<p;i++){
	        sum+=b[arr[i]];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
