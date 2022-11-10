//learnt to define the size of a 2D vector

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int dp[205][205];
int dfs(int i, int j,char prevVal, vector<vector<char>>& matrix ){
    if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size()) return 0;
    //to check if it's a consecutive letter or not..by ascii value
    if(matrix[i][j] - prevVal != 1) return 0;
    
    if(dp[i][j] !=0) return dp[i][j];
   //for 8 directions
    int res = 1+ max({dfs(i, j+1, matrix[i][j], matrix),
                        dfs(i, j-1, matrix[i][j], matrix),
                        dfs(i+1, j, matrix[i][j], matrix),
                        dfs(i-1, j, matrix[i][j], matrix),
                        dfs(i+1, j+1, matrix[i][j], matrix),
                        dfs(i+1, j-1, matrix[i][j], matrix),
                        dfs(i-1, j+1, matrix[i][j], matrix),
                        dfs(i-1, j-1, matrix[i][j], matrix) });
    
    dp[i][j] = res;

    return dp[i][j];
}

int longestIncreasingPath(vector<vector<char>>& matrix) {
    memset(dp, 0, sizeof(dp));
    int maxPath = 0;
    for(int i=0;i<matrix.size(); i++){
        for(int j=0;j<matrix[i].size(); j++){
            maxPath =max(maxPath, dfs(i, j, '@', matrix)); //using the prev ascii value of 'A'
        }
    }
    return maxPath;
}
int main()
{
    int m,n, t=0;
    
    while(cin>>m>>n){
        vector<vector<char>> matrix(m, vector<char>(n)); //this is how to define the size of a 2D vector
        if(m==0 && n==0) break;
        char x;
        t++;
        for(int i=0;i<m;i++){
        
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
            
        }

        cout<<"Case "<<t<<": "<<longestIncreasingPath(matrix)<<endl;
    }  
}

//graph+dp
