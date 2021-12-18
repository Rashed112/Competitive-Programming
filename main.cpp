#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int speed[n+5];
		int cnt=0;
		for(int i=0;i<n;i++){
			cin>>speed[i];
			if(i>0){
				if(speed[i]<=speed[i-1]){
					cnt++;
				}
				else{
					speed[i]=speed[i-1];
				}
			}
		}
		cout<<cnt+1<<endl;
	}
}
