#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxN = 0;
    for(int i=0;i<n;i++){
        int cnt=1, j=i, k=i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                break;
            }
            else{
                cnt++;
            }
            j--;
        }
        
        while(k<n-1){ 
            if(arr[k]<arr[k+1]){
                break;
            }
            else{
                cnt++;
            }
            
            k++;
        }
        maxN = max(maxN, cnt);
        
    }
    cout<<maxN<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
