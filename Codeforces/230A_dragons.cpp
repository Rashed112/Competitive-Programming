#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;
    vector<pair<int, int>>vp(n);
    int x, y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vp[i]=make_pair(x, y);
    }   
    sort(vp.begin(), vp.end());
    for(int i=0;i<n;i++){
        if(s<=vp[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            s+=vp[i].second;
        }
    }
    cout<<"YES"<<endl;

}
