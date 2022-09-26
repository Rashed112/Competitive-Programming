/*
Hint: similar to Frog-1 problem. just a little change is needed in terms of k. just have to make it generalize with a loop.

Hint: have to check if n-k is being negative or not.
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int INF = 1e9 + 5;
const int N = 1e5 + 5;
vector<int> h(N), dp(N, -1);
int k;
// dp top down approach
int minCost(int n)
{

    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int cost = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if(n-j>=0)
            cost = min(cost, minCost(n - j) + abs(h[n] - h[n - j]));
        
    }

    dp[n] = cost;
    return cost;
}

int main()
{
    // memset(dp, -1, sizeof(dp)); //for array we can initialize like this...

    int n;
    cin >> n>>k;

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << minCost(n - 1) << endl;
}
