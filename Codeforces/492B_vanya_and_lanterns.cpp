#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, l;
    cin>>n>>l;
    vector<double>lan(n);
    for(int i=0;i<n;i++){
        cin>>lan[i];
    }
    sort(all(lan));
    double maxN=0, prev, next;
    for(int i=0;i<n;i++){
        if(i==0){
            prev=lan[i]-0;
        }
        else{
            prev=(lan[i]-lan[i-1])/2;
        }
        if(i==n-1){
            next = l-lan[i];
        }
        else {
            next = (lan[i+1]-lan[i])/2;
        }
        maxN=max(maxN, max(prev, next));
    }
    printf("%.10lf\n", maxN);
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
