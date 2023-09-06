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

#define SIEVE
//int primes[N];
vi prefix(N);
vi primes(N,1);
vector<int> pr;
void sieve(){
    primes[0]=primes[1]=0;
    for(int i=2;i*i<N;i++){
        if(primes[i]==1){
            //pr.pb(i);
            for(int j=i*i;j<N;j+=i){
                primes[j]=0;
            }
        }
    }
    for(int i=1;i*i<N;i++){
        for(int j=1; i*i+j*j*j*j<N; j++){
            int p = i*i + j*j*j*j;
            if(primes[p]){
                prefix[p]=1;
            }
        }
    }
    for(int i=1;i<=N;i++){
        prefix[i]+=prefix[i-1];
    }
}
void solve(){
    int n;
    cin>>n;
    cout<<prefix[n]<<endl;
    
}

int main() {
    _ios;
    sieve();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
