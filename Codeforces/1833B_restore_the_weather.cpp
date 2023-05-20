//hints: sort and use of vector pair

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n], b[n];
        vector<pair<int, int>>vp, vp2;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            a[i]=x;
            vp.push_back(make_pair(x, i));
        }
        sort(vp.begin(), vp.end());
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b, b+n);
        
        for(int i=0;i<n;i++){
            vp2.push_back(make_pair(vp[i].second, b[i]));
            //p[vp[i].first] = b[i];
        }
        sort(vp2.begin(), vp2.end());
        for(int i=0;i<n;i++){
            cout<<vp2[i].second<<" ";
        }
        cout<<endl;
        

        
    }
}
