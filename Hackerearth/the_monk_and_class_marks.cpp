#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int, multiset<string>>marksMap;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int marks;
		string name;
		cin>>name>>marks;
		marksMap[marks].insert(name);
	}
	auto last_it = --marksMap.end();
	while(1){
		auto &students = (*last_it).second;
		int marks = (*last_it).first;
		for(auto student: students){
			cout<<student<<" "<<marks<<endl;
		}
		if(last_it == marksMap.begin()){
			break;
		}
		last_it--;
	}
}
