#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<vector<int>>vv(3, vector<int> (n));
        int sum = 0;
        for(int i=0;i<3;i++){
            int k=0;
            for(int j=0;j<n;j++){
                cin>>vv[i][j];
                k|=vv[i][j];
              //check if there are any 1's which is outside of the positions of our target value x using AND operation
                if((k&x) == k){
                    sum |= k;
                }
            }

        }
        cout<<((sum == x)? "Yes" : "No")<<endl;
        
    }
}
// Time O(n), as the execution operations were in one loop
