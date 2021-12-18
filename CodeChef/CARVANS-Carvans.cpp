/*
Hint1: input case: speed of 5 cars: 4 5 6 7 8

Hint2: if speeds of two cars are exactly same then, they won't collide. That means, if 2nd car's speed is greater than 1st car's, then 2nd car has to slow down to the same speed of the cars ahead of its. 

*/


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
