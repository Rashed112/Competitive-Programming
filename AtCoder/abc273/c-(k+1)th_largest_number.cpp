#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,a;
    cin>>n;
    map< int, int> mp;
    for(int i=0;i<n;i++){
        cin>>a;
        mp[a]++;
    }
   
    for(auto it = mp.rbegin(); it != mp.rend(); it++){ //this is how to print a map reversely
        cout<<it->second<<"\n";
    }
    for(int i=0;i<n-(int)mp.size();i++){
        cout<<0<<"\n";
    }

}
