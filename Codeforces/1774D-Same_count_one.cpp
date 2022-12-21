#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t, n, m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll sum=0;
        vector<vector<int>> v (n, vector<int> (m));
        int arr[n]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                sum+=v[i][j];
                if(v[i][j]==1){
                    arr[i]++;
                }
            }
        }
        //cout<<"sum="<<sum<<endl;
        if(sum%n !=0){
            cout<<"-1"<<'\n';
            continue;
        }
        ll num_of_one = sum/n;
        vector<tuple<int, int, int>>ans;
        vector<int> x,y;    
        for(int j=0;j<m;j++){ // as changes will be in the same column
            for(int i=0;i<n;i++){
                if(arr[i]>num_of_one && v[i][j]) x.push_back(i);
                if(arr[i]<num_of_one && !v[i][j]) y.push_back(i);
            }
            for(int i=0;i<min(x.size(), y.size()); i++){
                arr[y[i]]++, arr[x[i]]--;
                ans.emplace_back(x[i], y[i], j);
            }
            x.clear();
            y.clear();

        }
        cout<<ans.size()<<'\n';
        
        for(auto [i, j, k] : ans){
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        }
        
        
    }
}
