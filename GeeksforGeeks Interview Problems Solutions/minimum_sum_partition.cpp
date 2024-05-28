int minDifference(int arr[], int n)  { 
  int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    vector<vector<int>>dp(n+1, vector<int>(sum+1, 0));

    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j==0){
                dp[i][j]=1;
            }
            else if(i==0){
                dp[i][j]=0;
            }
            else if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    vector<int>v;
    for(int i=0;i<=sum/2;i++){
        if(dp[n][i]){
            v.push_back(i);
        }
    }
    int res = INT_MAX;
    for(int i=0;i<v.size();i++){
        res = min(res, sum-2*v[i]);
    }
    return res;
}
