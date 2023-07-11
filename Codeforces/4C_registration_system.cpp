#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
    cin>>t;
    string s;
    unordered_map<string, int>ump(t);
    for(int i=0;i<t;i++){
        cin>>s;
        if(ump.find(s)!=ump.end()){
            cout<<s<<ump[s]<<endl;
            ump[s]++;
        }
        else{
            cout<<"OK"<<endl;
            ump[s]++;
        }
    }
	
	return 0;
}
