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
	    if(n<=1){
	        cout<<-1<<endl;
	        continue;
	    }
	    ll root = floor(sqrt(n-1));
	    ll a=root, b=root;
	    if(a*(a+1)<n){
	        b++;
	    }
	    cout<<a<<" "<<b<<" "<<n-a*b<<endl;
	}
	return 0;
}
