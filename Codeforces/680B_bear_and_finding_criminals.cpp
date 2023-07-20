#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, a;
    cin>>n>>a;
    int arr[n+5];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int res = 0;
    if(arr[a]==1){
        res++;
    }
    int i=a;
    int j=i-1, k=i+1;
    while(j>0 && k<=n){
        if(arr[j] && arr[k]){
            res+=2;
        }
        j--;
        k++;

    }
    while(j>0){
        if(arr[j]){
            res++;
           
        }
         j--;
    }
    while(k<=n){
        if(arr[k]){
            res++;
            
        }
        k++;
    }
    cout<<res<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
