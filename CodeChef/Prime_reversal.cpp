#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s1, s2;
	    cin>>s1>>s2;
	    int s1_1=0, s1_0=0, s2_1=0, s2_0=0;
	    for(int i=0;i<n;i++){
	        if(s1[i]=='1') s1_1++;
	        else s1_0++;
	        if(s2[i]=='1') s2_1++;
	        else s2_0++;
	    }
	    if(s1_1==s2_1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
