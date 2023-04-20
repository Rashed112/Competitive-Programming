#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	string n;
	cin>>n;
	for(int i=0;i<n.size();i++){
		char ch;
		ch = '9'-(n[i]-'0');
		if( ch<n[i] ){
			if(i==0 && ch != '0'){
				n[i]=ch;
			}
			if(i!=0){
				n[i]=ch;
			}
			
		}
	}
	cout<<n;

}
