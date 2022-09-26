/*
Hint: to find out nth position cost, we've to know (n-1)th, (n-2)th position cost from 0th position
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int INF = 1e9+5;
const int N = 1e5+5;
vector<int > h(N), dp(N, -1);

//dp top down approach
int minCost(int i)
{
    
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost=INT_MAX;
    //way 1
    cost=min(cost, minCost(i-1)+abs(h[i]-h[i-1]));
    //way 2
    if(i>1){
        cost= min(cost, minCost(i-2)+abs(h[i]-h[i-2]));
    }
    dp[i]=cost;
    return cost;
}

int main()
{
    //memset(dp, -1, sizeof(dp)); //for array we can initialize like this...

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    cout<<minCost(n-1)<<endl;
}
