/*
Hint1: we can square and cube every int until a reduced limit 

Hint2: then we can make an unique array to keep that squared and cubic numbers, so that we can avoid such numbers which can be sqrt and cbrt at a time (like 64)
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        set<int> s;
        int cnt=0, l=sqrt(n);
        for(int i=1;i<=l;i++){

            if(pow(i,2)<=n) s.insert(pow(i,2));
            if(pow(i,3)<=n) s.insert(pow(i,3));

        }
        cout<<s.size()<<endl;
    }
    return 0;
}
