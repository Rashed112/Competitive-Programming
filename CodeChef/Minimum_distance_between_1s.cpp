#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt1=0,cnt2=0, ans=1,arr[n], p=0;
	    
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            cnt1++;
	            
	        }
	        if(cnt1>=1){
	            if(s[i]=='0'){
	                cnt2++;
	            }
	            if(s[i]=='1' && cnt1>1){
	                arr[p++]=cnt2;
	                cnt2=0;
	                
	                
	            }
	            
	        }
	        
	    }
	    for(int i=0;i<p;i++){
	        if(arr[i]%2==0){
	            ans=1;
	            break;
	        }
	        else ans=2;
	    }
	    //cout<<"3CNT2= "<<cnt2<<endl;
	    
	    cout<<ans<<endl;
	}
	return 0;
}
