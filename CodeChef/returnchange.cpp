#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int res;
	    if(n%10>=5){
	        res=100-(n+(10-n%10));
	    }
	    else{
	        res=100-(n-n%10);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
