//difficulty: Hard
//type: dp but not to count, rather than printing the exact matches

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    int lens = s.length(), lent = t.length();
    vector<vector<int>> dp (lens + 1, vector<int> (lent + 1));

    for (int i=1; i<=lens; i++){ //we're not considering i=0, cause, when length is 0, there will be no char
        for (int j=1; j<=lent; j++){
            if (s[i - 1] == t[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    // for(int i=0;i<=lens;i++){
    //     for(int j=0;j<=lent;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int i = lens, j = lent;
    string ans ;
    //we have to understand the dp table to understand this
    while (i > 0 && j > 0){
        if (s[i - 1] == t[j - 1]){
            ans = s[i - 1] + ans;
            i--; j--;
        }
        else{
            if (dp[i - 1][j] > dp[i][j - 1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
   cout<<ans<<"\n";
}
