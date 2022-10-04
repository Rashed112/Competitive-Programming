/*
Hint-1: sort and fixing v[0] as base divide the larger ones and to divide the largest one the number of steps we need is the ans, as this number is enough for all other
smaller values

Hint-2: to minimize the steps no, we have to divide one piece v[i] in such a way so that, divided piece would be as much large as possible which is equal to 
(2*v[0]-1) as the condition is 2x>y
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector< int > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int steps=0, pieces;
        for(int i=0;i< n;i++){
            if(v[i]%(2*v[0]-1) == 0 ) pieces=v[i]/(2*v[0]-1);
            else pieces=(v[i]/(2*v[0]-1))+1;
            steps+= pieces-1;
        }
        cout<<steps<<"\n";

    }
}
