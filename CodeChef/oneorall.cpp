#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll arr[n], mini=1e9, sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	        mini=min(mini, arr[i]);
	    }
	    if(n%2){
	        cout<<((sum%2)?"CHEF":"CHEFINA")<<endl;
	        continue;
	    }
	    if(sum%2==0){
	        cout<<((mini%2)?"CHEF": "CHEFINA")<<endl;
	        continue;
	    }
	    cout<<"CHEF"<<endl;
	}
	return 0;
}
