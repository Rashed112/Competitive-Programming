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
vector<int> isPrime(N,1);
vector<int> primes;
vector<int>primeLove(N);
bool hasZero(int x){
    while(x){
            if(x%10==0){
                return true;
            }
            x/=10;
        }
        return false;
}
void sieve(){
    isPrime[0]=isPrime[1]=0;
    for(int i=4;i<N;i+=2){
        isPrime[i]=0;
    }
    for(int i=3;i*i<N;i+=2){
        if(isPrime[i]==1){
            for(int j=i*i;j<N;j+=i){
                isPrime[j]=0;
            }
        }
    }
    for(int i=0;i<N;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    for(auto x : primes){
        string s = to_string(x);
        int f=0;
        for(int i=1;i<s.size();i++){
            int subP = stoi(s.substr(i));
            if(isPrime[subP]==0){
                f=1;
                break;
            }
        }

        if(!f && !hasZero(x)){
            primeLove[x]=1;
        }
    }
}

void solve(){
    int n;
    cin>>n;
    cout<<primeLove[n]<<endl;

}

int main() {
    _ios;
    sieve();
    for(int i=1;i<N;i++){
        primeLove[i]+=primeLove[i-1];
    }
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
