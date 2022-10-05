#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int wt[105], val[105];
ll dp[105][100005]; //two arguments of recursive func are changing, so 2D dp

ll func(int ind, int value_left) //for ind index returns the minimum weight for maximum value
{
    if(value_left == 0) return 0;
    if(ind < 0) return 1e15; //in this case, we don't have item, but value is left; and so we'll return a large integer wieght so that when we minimize the weight, it become excluded
    if(dp[ind][value_left] != -1) return dp[ind][value_left];

    ll ans = func(ind-1, value_left); //don't choose
    if(value_left - val[ind] >=0){
        ans = min(ans, func(ind-1, value_left-val[ind]) + wt[ind]); //choose
    }
    
    return dp[ind][value_left] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    
    int max_value = 1e5; //in the ques given, highest N=1e2, v=1e3; so total max_value could be N*v

    //so here we'll go from backward and check for which max_value we can gain under the fixed weight and that'll be the ans as we want the max value
    for(int i = max_value; i>=0; --i){
        if(func(n-1, i) <= w){
            cout<< i <<endl;
            break;
        }
    }
    

}
