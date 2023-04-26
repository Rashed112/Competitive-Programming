#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    int res;
	    res= min(x*5, y*2+x);
	    cout<<res<<endl;
	}
	return 0;
}
