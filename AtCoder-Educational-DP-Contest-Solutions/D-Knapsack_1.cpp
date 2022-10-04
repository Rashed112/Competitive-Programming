#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int wt[105], val[105];
ll dp[105][100005]; //two arguments of recursive func are changing, so 2D dp

ll func(int ind, int wt_left)
{
    if(wt_left == 0) return 0;
    if(ind<0) return 0;
    if(dp[ind][wt_left] != -1) return dp[ind][wt_left];
    
    ll ans = func(ind-1, wt_left); //if we don't choose item at index
    if(wt_left-wt[ind] >= 0){
        ans = max(ans, func(ind-1, wt_left-wt[ind])+val[ind]); //if we choose item at index
    }
    return dp[ind][wt_left] = ans;
    
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    cout<<func(n-1, w);

}
