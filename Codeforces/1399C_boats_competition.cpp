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
    vector<int>v(n);
    unordered_map<int,int>ump, temp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ump[v[i]]++;
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    sort(v.begin(),v.end());
    
    int cnt = 0, maxTeams = 0;
    for(int i=v[0]+v[1];i<=(v[n-2]+v[n-1]);i++){
        cnt = 0;
        temp = ump;
        for(int j=0;j<n-1;j++){
            temp[v[j]]--;
            for(int k=j+1;k<n;k++){
                if(temp[v[k]]>0 && v[j]+v[k]==i){
                    cnt++;
                    temp[v[k]]--;
                    break;
                }
            }
        }
        //cout<<"i="<<i<<" "<<"cnt="<<cnt<<" "<<endl;
        maxTeams = max(maxTeams, cnt);
    }
    cout<<maxTeams<<endl;
}

int main() {
    _ios;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
