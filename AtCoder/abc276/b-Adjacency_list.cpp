#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector< int > v[100005];
    int x, y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i=1;i<=n;i++) {
        cout<<v[i].size()<<" "; //row size
        sort(v[i].begin(), v[i].end()); //sorting the rows
         for (int j=0;j<v[i].size();j++) {
             cout<<v[i][j]<<" ";
         }
         cout<<endl;
    }
}
