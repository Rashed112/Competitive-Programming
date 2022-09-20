/* 
Hint1: there is at least 1 player who will win 0 times.

Hint2: no matches should be divided by max number of wins.
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, x, y;
    cin>>n>>x>>y;
    if((x>0 && y>0) || (x==0 && y==0)){
        cout<<-1<<endl;
        return;
    }
    int mx = max(x,y);
    if((n-1)%mx){
        cout<<-1<<endl;
        return;
    }
    for(int i=1, p=1, q=0;i<n;i++){
        if(q==mx){
            p=i+1;
            q=0;
        }
        q++;
        cout<<p<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
