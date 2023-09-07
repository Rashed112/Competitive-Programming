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
vector<int> isPrime(N,1), isPrime2(N, 0);
vector<int> notPrimes;
vector<int> primes;
vector<int> prefix1;
void sieve(){
    isPrime[0]=isPrime[1]=0;
    for(int i=4;i<N;i+=2){
        isPrime[i]=0;
        isPrime2[i]=2;
    }
    for(int i=3;i*i<N;i+=2){
        if(isPrime[i]==1){
            for(int j=i*i;j<N;j+=i){
                isPrime[j]=0;
                isPrime2[j]=i;
            }
        }
    }
    for(int i=1;i<N;i++){
        if(isPrime[i]==0){
            notPrimes.push_back(i);
        }
        else{
            primes.push_back(i);
        }   
    }
}

void solve(){
    int l, r;
    cin>>l>>r;
    if(r<4){
        cout<<-1<<endl;
        return;
    }
    int a=0, b=0;
    if(isPrime[r]==0){
        cout<<isPrime2[r]<<" "<<r-isPrime2[r]<<endl;
        return;
    }
    else{
        for(int i=r-1;i>=l;i--){
            if(isPrime[i]==0){
                cout<<isPrime2[i]<<" "<<i-isPrime2[i]<<endl;
                return;
            }
        }
    }
  
    cout<<-1<<endl;
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
