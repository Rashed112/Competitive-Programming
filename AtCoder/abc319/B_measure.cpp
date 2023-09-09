#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;

#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin()) //returns pos equal or greater than of x
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
const int N  = 10000007;


void solve(){
    int n;
    cin>>n;
    vector<int>div;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            div.push_back(i);
        }
    }
    
    vector<int>res(n+1);
    res[0]=1;
    res[n]=1;
   
    for(int i=1;i<=n;i++){
        for(int j=0;j<div.size();j++){
            if(i%(n/div[j])==0 && div[j]<10){
                //cout<<"hi"<<div[j]<<" ";
                res[i]=div[j];
                break;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(res[i]==0){
            cout<<'-';
        }
        else{
            cout<<res[i];
        }
    }
}

int main() {
    _ios;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
