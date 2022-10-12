/*
* we have to understand the subproblem, which is, "is it possible to make a certain sum from an array?"
* then it's a 0/1 knapsack problem, which is whether we can take a certain index or not for making the sum
*/

int dp[105][10005]; // reason for 10005 is length*num[i] range which is 100*100=10000
int func(int ind, int target, vector< int >& A)
{
    if(target == 0) return 1;
    if(ind < 0 ) return 0;
    if(dp[ind][target] != -1) return dp[ind][target];
    //not consider ind-th index
    int isPossible = func(ind-1, target, A);
    //consider ind-th index
    if(target - A[ind] >=0)
        isPossible |= func(ind-1, target-A[ind], A); //the reason to use 'or' is if any of the option is true, then it's possible

    return dp[ind][target] = isPossible;
}
int Solution::solve(vector<int> &A, int B) {
    memset(dp, -1, sizeof(dp));
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
    }
    if(sum<B){
        return 0;
    }  
    
    return func(A.size()-1, B, A); 
}
