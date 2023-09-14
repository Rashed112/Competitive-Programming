#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		multiset<ll>bags;
		for(int i=0;i<n;i++){
			ll candy;
			cin>>candy;
			bags.insert(candy);
		}
		
		ll res = 0;
		for(int i=0;i<k;i++){
			auto last_it = (--bags.end());
			//ll maxCandy = *last_it;
			res += *last_it;
			bags.erase(last_it);
			bags.insert(*last_it/2);
		}
		cout<<res<<endl;
	}
}
