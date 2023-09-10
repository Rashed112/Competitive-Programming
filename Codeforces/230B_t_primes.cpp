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
const int N  = 1000007;

#define SIEVE
vector<ll> isPrime(N,1);
vector<ll> primes;
void sieve(){
    isPrime[0]=isPrime[1]=0;
    for(ll i=4;i<N;i+=2){
        isPrime[i]=0;
    }
    for(ll i=3;1LL*i*i<N;i+=2){
        if(isPrime[i]==1){
            for(ll j=i*i;j<N;j+=i){
                isPrime[j]=0;
            }
        }
    }
    for(ll i=2;i<N;i++){
        if(isPrime[i]){
            primes.push_back(i*i);
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    ll pos = getpos(primes, n);
    if(primes[pos]==n || (pos-1>=0 && primes[pos-1]==n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
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
